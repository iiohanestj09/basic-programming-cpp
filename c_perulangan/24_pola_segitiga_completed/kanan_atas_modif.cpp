//* Segitiga KANAN ATAS (MODIFIKASI)

#include <iostream>
using namespace std;

int main(){
    for(int a = 1; a <= 5; a++){
        for(int b = 1; b <= a - 1; b++){
            cout<<" ";
        }

        for(int c = 1; c <= 6 - a; c++){
            cout<<a;
        }

        cout<<endl;
    }
}

/*
11111
 2222
  333
   44
    5
*/