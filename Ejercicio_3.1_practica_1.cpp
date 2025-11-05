/*Dado un número entero positivo o nulo(en base decimal), construya un algoritmo recursivo que
tenga por resultado otro número entero cuyo valor sea la representación hexadecimal (en base 16)
del valor dado.
*/
#include <iostream>
using namespace std;

string to_hexadecimal(int n){
    if(n == 0) return "0";
    if(n == 1) return "1";
    if(n == 2) return "2";
    if(n == 3) return "3";
    if(n == 4) return "4";
    if(n == 5) return "5";
    if(n == 6) return "6";
    if(n == 7) return "7";
    if(n == 8) return "8";
    if(n == 9) return "9";
    if(n == 10) return "A";
    if(n == 11) return "B";
    if(n == 12) return "C";
    if(n == 13) return "D";
    if(n == 14) return "E";
    if(n == 15) return "F";

    return to_hexadecimal(n / 16) + to_hexadecimal(n % 16);
    
}

int main(){
    int n;

    cout<<"Ingrese un numero"<<endl;
    cin>>n;

    cout<<"En Hexadecimal es:"<< "  "<< to_hexadecimal(n)<<endl;
}