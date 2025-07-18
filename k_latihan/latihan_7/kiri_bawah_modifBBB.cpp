//* Segitiga KIRI BAWAH (MODIFIKASI BBB)

#include <iostream>
using namespace std;

int main(){
    int x = 1;

    for(int a = 1; a <= 5; a++){
        for(int b = 1; b < a; b++){
            cout<<x;
            x++;
        }

    cout<<x<<endl;
    x++;
    }
}

/*
1
23
456
78910
1112131415
*/