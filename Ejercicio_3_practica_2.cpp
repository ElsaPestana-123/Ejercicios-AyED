#include <iostream>
#include <string>
using namespace std;

void back(int n, int r,int num, int pos, string solucion){

    if(pos > n){
        if(num == r){
            cout << solucion << " = " << r << endl;
        }
        return;
    }

    int num_temp;

    for(int i = 0; i<4 ;i++){

        if(i == 0){
            num_temp = num + pos;
            back(n, r, num_temp, pos+1, solucion + "+" + to_string(pos));

        } else if(i == 1){

            num_temp = num - pos;
            back(n, r, num_temp, pos+1, solucion + "-" + to_string(pos));

        } else if(i== 2){
            num_temp = num * pos;
            back(n, r, num_temp, pos+1, solucion + "*" + to_string(pos));

        } else if(i == 3){

            if(num%pos == 0){
                num_temp = num / pos;
                back(n, r, num_temp, pos+1, solucion + "/" + to_string(pos));

            }
        }
        
    }

}

    
int main(){
    int N = 4;
    int R = 0;

    back(N, R, 1, 2, "+1");

    back(N, R, -1, 2, "-1");

    return 0;
}