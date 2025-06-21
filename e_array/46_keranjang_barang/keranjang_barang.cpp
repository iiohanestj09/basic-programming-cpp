//* Program Keranjang Buah

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(){
    int top = -1;
    string keranjang[5];
    char lanjut;

    do{
        system("cls");
        if(top == 4){
            cout<<"Keranjang Penuh!"<<endl;
        } else{
            top++;
            cout<<"Masukkan Isi : ";
            cin>>keranjang[top];
            cout<<"Data "<<keranjang[top]<<" Berhasil Ditambahkan."<<endl;
        }

        cout<<setw(50)<<setfill('=')<<"="<<endl;
        cout<<"Isi Keranjang Saat Ini : "<<endl;
        
        for(int i = 0; i <= top; i++){
            cout<<i + 1<<". "<<keranjang[i]<<endl;
        }
        
        cout<<"Menambah Keranjang (y / n) : ";
        cin>>lanjut;
    } while(lanjut == 'y' || lanjut == 'Y');

    cout<<"PROGRAM TELAH SELESAI!"<<endl;
    return 0;
}