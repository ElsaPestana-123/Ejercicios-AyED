/*Escriba una función que invierta los dígitos de un número entero, empleando 
operaciones sobre números enteros. Ejemplo 653 a 356.
*/
#include <iostream>
using namespace std;

int reverse(int n, int i = 0){
    if(n == 0) return i;
    return reverse(n/10, i * 10 + n%10);
}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int reversed = reverse(n);

    cout << "El numero invertido es: " << reversed << endl;

    return 0;
}
