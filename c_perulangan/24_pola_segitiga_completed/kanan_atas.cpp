//* Segitiga KANAN ATAS

#include <iostream>
using namespace std;

int main(){
    for(int a = 5; 0 < a && a <= 5; a--){
        for(int b = 5 - a; 0 < b; b--){
            cout<<" ";
        }

        for(int c = 1; c < a; c++){
            cout<<c;
        }

        cout<<a<<endl;
    }
}

/*
12345
 1234
  123
   12
    1
*/