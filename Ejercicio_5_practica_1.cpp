//Escriba un algoritmo recursivo que halle la suma de los primeros N números naturales.
#include <iostream>
using namespace std;

int suma(int n){
    if(n == 0) return 0;
    return n + suma(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    int resultado = suma(n);
    cout << "La suma de los primeros " << n << " numeros enteros es: " << resultado << endl;
    return 0;
}