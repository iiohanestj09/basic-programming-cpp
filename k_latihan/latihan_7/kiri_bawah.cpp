//* Segitiga KIRI BAWAH

#include <iostream>
using namespace std;

int main(){
    int a, b;

    for(a = 1; a <= 5; a++){
        for(b = 1; b < a; b++){
            cout<<b;       
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