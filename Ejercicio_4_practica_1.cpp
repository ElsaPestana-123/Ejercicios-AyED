/*Elabore una función recursiva la cual dado un arreglo de caracteres que conforman 
una palabra retorne verdadero si la ésta es capicúa. Ejemplos de palabras
capicuas: "salas", "oro", "arepera".
*/
#include <iostream>
using namespace std;

bool capicua(char array[], int n, int left, int right){

    if(left >= right){
        return true;
    }

    if(array[left] != array[right]){
        return false;
    }

    return capicua(array, n, left + 1, right - 1);
}

int main() {
    int n;
    cout << "Ingrese el size del arreglo: ";
    cin >> n;
    char array[n];

    cout << "Ingrese los elementos del arreglo: ";
    for(int i = 0; i < n; i++){
        cout << "Elemento " << i + 1 << ": ";
        cin >> array[i];
    }

    if(capicua(array, n, 0, n - 1)) cout << "ES CAPICUA" << endl;

    else cout << "NO ES CAPICUA" << endl;

    return 0;
}