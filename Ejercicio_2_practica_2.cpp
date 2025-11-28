#include <iostream>
using namespace std;

bool usados[10] = {false};

void digitos(int m, int n=0, int pos=1){
    int disponibles[9] = {1,2,3,4,5,6,7,8,9};

    if(pos > m){
        cout<< n << endl;
        return;
    }

    for(int i = 0; i < 9; i++){
        int digito = disponibles[i];
        if(!usados[digito]){
          int num = n * 10 + digito;
          if(num % pos == 0){
            usados[digito] = true;
            digitos(m, num, pos+1);
            usados[digito] = false;
          }
        }  

    }

}

int main(){

    int m = 4,n,pos;

    digitos(m);

    return 0;
}