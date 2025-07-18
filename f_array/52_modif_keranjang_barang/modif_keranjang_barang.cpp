//* MODIFIKASI Program Keranjang Buah

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(){
    int max = 5, top = -1;
    int pilihan, no_index;
    string keranjang[max];

    do{
        cout<<"Pilihan : \n1. Tambah\n2. Ubah\n3. Selesai"<<endl;
        cout<<"Masukkan Plihan : ";
        cin>>pilihan;
        system("cls");

        switch(pilihan){
            case 1:
            if(top == max - 1){
                cout<<"Keranjang Penuh!"<<endl;
            } else{
                top++;
                cout<<"Masukkan Isi : ";
                cin>>keranjang[top];
                cout<<"Data "<<keranjang[top]<<" Berhasil Ditambahkan."<<endl;
            }
            break;

            case 2:
            cout<<"Nomor Data Yang Ingin Diubah : ";
            cin>>no_index;
            cout<<"Barang Yang Diubah : "<<keranjang[no_index - 1]<<endl;
            cout<<"Barang Yang Baru   : ";
            cin>>keranjang[no_index - 1];
            break;

            case 3:
            pilihan = 3;
            break;

            default:
            cout<<"Pilihan Salah. Coba Lagi!!!"<<endl;
            break;
        }
        

        cout<<setw(50)<<setfill('-')<<"-"<<endl;
        cout<<"Isi Keranjang Saat Ini : "<<endl;
        for(int i = 0; i <= top; i++){
            cout<<i + 1<<". "<<keranjang[i]<<endl;
        }
        cout<<setw(50)<<setfill('=')<<"="<<endl;
        
    } while(pilihan != 3);

    cout<<"PROGRAM TELAH SELESAI!"<<endl;
    return 0;
}