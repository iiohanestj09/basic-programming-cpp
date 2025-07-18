#include <iostream>
using namespace std;

int main(){
    int angka[] = {5, 7, 10, 3, 9, 8, 3, 1, 4, 10};
    int n = sizeof(angka)/sizeof(*angka);
    int cari, hasil_cari = 0;
    
    cout<<"Data Yang Tersedia : "<<endl;
    for(int a = 0; a < n; a++){
        cout<<"Index Ke-"<<a<<" : "<<angka[a]<<"\t";
        if((a + 1) % 4 == 0){                //? Menambahkan baris baru setelah setiap 3 kolom
            cout<<endl;
        }
    }
    cout<<endl<<endl<<"Data Yang Dicari : "<<endl;
    cout<<"Masukkan Data Yang Ingin Dicari : ";
    cin>>cari;

    for(int b = 0; b < n; b++){
        if(cari == angka[b]){
            hasil_cari++;
        }
    }

    if(hasil_cari == 0){
        cout<<"Data "<<cari<<" Tidak Ditemukan!"<<endl;
    } else{
        cout<<"Data "<<cari<<" Ditemukan Di : "<<endl;
        for(int c = 0; c < n; c++){
            if(cari == angka[c]){
                cout<<"Indeks ke-"<<c<<endl;
            }
        }
    }

    return 0;
}