/*Suponga que solo cuenta con un lenguaje cuyas operaciones aritméticas son +, -, /; 
diseñe una función recursiva la cual, dados dos reales A y B, retorne como resultado 
la evaluación de A * B.
*/
#include <iostream>
using namespace std;

unsigned int multiply(unsigned int a, unsigned int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiply(a, b - 1);
}

int main() {
    unsigned int num1, num2;
    cout << "Ingrese dos enteros positivos: ";
    cin >> num1 >> num2;

    unsigned int result = multiply(num1, num2);
    cout << "El producto de " << num1 << " y " << num2 << " es: " << result << endl;
    return 0;
}