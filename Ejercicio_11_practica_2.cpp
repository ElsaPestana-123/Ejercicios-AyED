#include <iostream>
using namespace std;

string** matriz;
int N;

bool validarMov(int x, int y){

    for(int i =x-1; i >=0;i--){ // verficar fila
        if(matriz[i][y] == "R"){
            return false;
        }

    }

    for(int j =y-1; j >=0;j--){ // verifcar columna
        if(matriz[x][j] == "R"){
            return false;
        }
    }

    for(int i = x-1, j = y-1; i >= 0 && j >=0; i--, j--){
        if(matriz[i][j] == "R"){
            return false;
        }
    }

    for(int i = x-1, j = y+1; i >= 0 && j < N; i--, j++){
        if(matriz[i][j] == "R"){
            return false;
        }
    }

    return true;

}

void imprimirTablero(){
    cout << "--- Solucion Encontrada ---" << endl;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            
            cout << matriz[i][j] << " "; 
        }
        cout << endl; 
    }
    cout << endl; 
}

void reinas(int index=0){ 
    // x es donde estoy, n es el numero de reinas a poner, index es lo que tengo hasta el ahora

    if(N == index){
        cout<<"Solucion hallada"<<endl;
        imprimirTablero();
        return;
    }

    for(int j = 0; j < N; j++){
        
        if(validarMov(index, j)){
            matriz[index][j] ="R";
        
            reinas(index + 1);
            matriz[index][j] = ".";  
        }  
    }

}

int main(){
    cout<<"Ingrese el tamaño del tablero: ";
    cin>>N;

    matriz = new string*[N];

    for(int i = 0; i < N; i++){
        matriz[i] = new string[N];

        for(int j = 0; j < N; j++){
            matriz[i][j] = ".";
        }
    }

    reinas();

    return 0;
}