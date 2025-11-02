/*Dado un número entero positivo o nulo(en base decimal), construya un algoritmo recursivo que
tenga por resultado otro número entero cuyo valor sea la representación binaria (en base 2)
del valor dado.
*/
#include <iostream>
using namespace std;

unsigned int to_binary(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return to_binary(n/2) * 10 + (n%2);
    
}

int main(){
    int numero;

    cout<<"Ingrese un numero entero positivo: ";
    cin>> numero;

    unsigned int resultado = to_binary(numero);

    cout<<"El numero en binario es: "<< resultado << endl;

    return 0;
}