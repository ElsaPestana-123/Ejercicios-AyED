/*Escribir un programa recursivo que ordene un arreglo de enteros por el método
de Mezcla: se va dividiendo el arreglo sucesivamente en dos mitades y cuando 
la longitud de cada mitad sea 2 sea comparan los elementos y se ordenan.
Después de ordenadas las dos mitades, amabas se mezclan ordenadamente en un solo
arreglo aprovechando el hecho de que las mitades ya están ordenadas.
*/
#include <iostream>
using namespace std;

int merge(int array[], int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1], right[n2];

    for(int i = 0; i < n1; i++){
        left[i] = array[start + i];
    }

    for(int j = 0; j < n2; j++){
        right[j] = array[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;

    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            array[k] = left[i];
            i++;
        } else {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        array[k] = left[i];
        i++;
        k++;
    }

    while(j < n2){
        array[k] = right[j];
        j++;
        k++;
    }
}

int mergeSort(int array[], int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;

        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);

        merge(array, start, mid, end);
    }
}

int main(){
    int n;
    cout << "Ingrese el tamano del arreglo:";
    cin >> n;

    int array[n];
    cout << "Ingrese los elementos:\n";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    mergeSort(array, 0, n - 1);

    cout << "Arreglo ordenado:\n";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}