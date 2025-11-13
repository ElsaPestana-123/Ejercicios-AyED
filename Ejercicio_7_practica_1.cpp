/*Escriba una función recursiva para calcular:
La serie: 1 + 1/2 + 1/3 + ... + 1/n
Asuma que recibe como parámetro el valor de n
*/
#include <iostream>
using namespace std;

float divide(int n){
    if(n == 0){
        return 0.0; // Return 0.0 for division by zero case
    }

    return divide(n - 1) + 1.0 / n;
    
}

int main(){
    int numero;

    cout<<"Ingrese un numero entero positivo: "<<endl;
    cin>> numero;

    float resultado = divide(numero);

    cout<<"El resultado de la division es: "<<resultado<<endl;

    return 0;
}
