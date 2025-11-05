/* Escriba una función recursiva para calcular el máximo común divisor(m.c.d)
de dos números dados aplicando propiedades recurrentes del m.c.d
*/
#include <iostream>
using namespace std;

int mcd(int a, int b){
    int resto;
    
    if (a > b){
        resto = a % b;
        if (resto == 0){
            return b;
        } else {
            return mcd(b, resto);
        }

    } else {
        resto = b % a;
        if (resto == 0){
            return a;
        } else {
            return mcd(a, resto);
        }
    }
}   

int main(){
    int num1, num2;
    cout << "Ingrese dos numeros para calcular su m.c.d: ";
    cin >> num1 >> num2;

    int resultado = mcd(num1, num2);
    cout << "El m.c.d de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}