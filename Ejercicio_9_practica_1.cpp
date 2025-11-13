/*Dado un arreglo de N números enteros, diseñar algoritmos
recursivos que calculen:
a) El mayor elemento del arreglo.
b) La suma de los elementos del arreglo.
c) La media de todos los elementos del arreglo.
d) Verificar si el arreglo está ordenado.
*/
#include <iostream>
using namespace std;
#define MAX 500

int max(int array[], int left, int right){
    if(left == right) return array[left];

    int max1 = max(array, left + 1, right);
    return (array[left] > max1) ? array[left] : max1;

}

int suma(int array[], int left, int right){
    if(left == right) return array[left];

    return array[left] + suma(array, left + 1, right);
}

float promedio(int array[], int size){
    if(size == 0) return 0.0f;
    return suma(array, 0, size - 1) / float(size);
}

bool orden(int array[], int left, int right){
    if(left >= right) return true;
    if(array[left] > array[left + 1]) return false;
    return orden(array, left + 1, right);

}

int main() {
    int array[MAX];
    int size;

    cout<<"Ingrese los elementos del arreglo"<<endl;
    for(int i = 0; i < size; i++){ 
        cin>>array[i]; 
    }

    cout << "Maximo: " << max(array, 0, size - 1) << endl;
    cout << "Suma: " << suma(array, 0, size - 1) << endl;
    cout << "Promedio: " << promedio(array, size) << endl;
    cout << "Ordenado: " << (orden(array, 0, size - 1) ? "Si" : "No") << endl;

    return 0;
}
