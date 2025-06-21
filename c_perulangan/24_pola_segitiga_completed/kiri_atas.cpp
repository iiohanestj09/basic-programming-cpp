//* Persegi KIRI ATAS

#include <iostream>
using namespace std;

int main(){
    int a, b;

    for(a = 5; 0 < a; a--){
        for(b = 1; b < a; b++){
            cout<<b;       
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