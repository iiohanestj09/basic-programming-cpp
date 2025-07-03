#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int jmlh;

    cout<<"Masukkan Panjang Tinggi Dan Alas Segitiga Siku-siku : ";
    cin>>jmlh;

    for(int a = 1; a <= jmlh ; a++){
        for(int b = 1; b < a ; b++){
            cout<<"* ";
        }
        cout<<"*"<<endl;
    }
}