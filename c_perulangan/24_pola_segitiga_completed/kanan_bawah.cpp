//* Segitiga KANAN BAWAH

#include <iostream>
using namespace std;

int main(){
    for(int a = 1; a <= 5; a++){
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
    1
   12
  123
 1234
12345
*/
    