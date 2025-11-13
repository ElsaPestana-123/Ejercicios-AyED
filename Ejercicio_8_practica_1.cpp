/*Escriba una función recursiva para calcular la potencia de un número
real elevado a un entero positivo, partiendo:
X^0 = 1
X^n = (X^(n/2))^2 si n es par
X^n = X * X^(n-1) si n es impar
*/
#include <iostream>
using namespace std;

unsigned int power(int base, int exp){
    if(exp == 0) return base;
    if(exp == 1) return base;
    if(exp % 2 == 0){
        unsigned int res = power(base, exp / 2);
        return res * res;
    } else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    unsigned int result = power(base, exp);
    cout << base << " raised to the power of " << exp << " is " << result << endl;
    return 0;
}