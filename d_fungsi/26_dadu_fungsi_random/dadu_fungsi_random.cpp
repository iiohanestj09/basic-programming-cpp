#include <iostream>
#include <cstdlib> //! Mengandung Fungsi Random
using namespace std;

int main(){
    char lanjut;
    while(true){
        cout<<"Lempar Dadu (y / n) : ";
        cin>>lanjut;

        if(lanjut == 'y'){
            cout<<1 + (rand() % 6)<<endl;
        } else if(lanjut == 'n'){
            cout<<"Program Telah Selesai"<<endl;
            break;
        } else{
            cout<<"Warning : Kode Yang Anda Masukkan Salah"<<endl<<endl;
        }
    }
}