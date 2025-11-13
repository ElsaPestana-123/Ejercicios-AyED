/*Elabore un algoritmo recursivo el cual dado un arrglo de enteros ordenado 
en forma ascendente y sin elementos repetidos, haga una búsqueda binaria
de un elemento. E indicando si éste existe en el mismo.
*/
#include <iostream>
using namespace std;
#define MAX 500

int SeachrBinary(int array[], int obj, int star, int end){
    if(star > end) return -1;

    int medium = star + (end - star) / 2;

    if(array[medium] == obj) return obj;

    if(array[medium] < obj){
        return SeachrBinary(array, obj, medium +1, end);
    } else {
        return SeachrBinary(array, obj, star, end -1);
    }

}

int main(){
    int array[MAX];
    int size;
    int obj;

    cout<<"Ingrese el tamano del arreglo"<<endl;
    cin>>size;

    cout<<"Ingrese los elementos del arreglo"<<endl;
    for(int i = 0; i < size; i++){ 
        cin>>array[i]; 
    }
    

    cout<<"Ingrese el numero a buscar: "<<endl;
    cin>> obj;

    int result = SeachrBinary(array, obj, 0, size -1);

    if(result != -1){
        cout<<"El numero "<<obj<<" fue encontrado."<<endl;
    } else {
        cout<<"El numero "<<obj<<" no fue encontrado."<<endl;
    }

    return 0;
}