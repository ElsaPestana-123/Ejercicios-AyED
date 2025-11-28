#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a =b;
    b= temp;
}

int factorial(int n) {
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int** matriz = nullptr;
int fila =0;

void back(int array[], int n, int k){

    if (matriz == nullptr){

        int n_fac = factorial(n);
        matriz = new int*[n_fac];

        for(int i = 0; i < n_fac; i++)
            matriz[i] = new int[n];

        fila = 0;
    }

    if(k == n){
        for(int j=0; j < n; j++){
            matriz[fila][j] = array[j];
        }
        fila++;
        return;
    }    

    for(int i = k; i < n; i++){
        swap(array[k], array[i]);
        back(array, n, k+1);
        swap(array[k], array[i]);
    }

}

int main(){
    int n = 3;
    int array[n];
    
    for(int i =0; i < n; i++)
        array[i] = i+1;
    
    back(array, n, 0);   

    for(int i =0; i < fila; i++){
        for(int j =0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int n_fac = factorial(n);
    for(int i = 0; i < n_fac; i++) 
       delete[] matriz[i];

    delete[] matriz;
    return 0; 
}