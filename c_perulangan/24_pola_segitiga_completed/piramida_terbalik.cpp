//* Segitiga PIRAMIDA TERBALIK (*)

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for(int a = 5; a > 0; a--){
        for(int b = 1; b <= 5 - a; b++){
            cout<<" ";
        }
        for(int c = a; c > 0; c--){
            cout<<setw(2)<<c;
        }
        cout<<endl;
    }
}

/*
5 4 3 2 1       * * * * *
 4 3 2 1         * * * * 
  3 2 1     ==>   * * * 
   2 1             * * 
    1               *
*/