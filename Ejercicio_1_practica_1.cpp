// Construya una funcion que calcule el valor de la combinatoria de 2 números enteros

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 2) return 1;
    return n * factorial(n - 1);
}
/*
int combinatoria(int n, int k){
    if (k == 0 || k == n) return 1;
    if (k == 1 || k == n - 1) return n;

    return factorial(n) / (factorial(k) * factorial(n - k));

}
*/
int combinatoria(int n, int k){
    if (k == 0 || k == n) return 1;
    if (k == 1 || k == n - 1) return n;

    return combinatoria(n - 1, k - 1) + combinatoria(n - 1, k);
}


int main() {
    int n, k;
    cout << "Ingrese n y k: ";
    cin >> n >> k;

    int resultado = combinatoria(n, k);
    cout << "C(" << n << ", " << k << ") = " << resultado << endl;

    return 0;
}