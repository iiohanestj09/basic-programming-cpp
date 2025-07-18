//* Segitiga KANAN BAWAH (MODIFIKASI)

#include <iostream>
using namespace std;

int main(){
    for(int a = 1; a <= 5; a++){
        for(int b = 1; b <= 5 - a; b++){
            cout<<" ";
        }

        for(int c = 1; c <= a; c++){
            cout<<a;
        }

        cout<<endl;
    }
}

/*
    1
   22
  333
 4444
55555
*/