#include <iostream>
using namespace std;

//! Reporter (Mengerjakan Dan Mengembalikan)

int pangkat_tiga(int x){
    int y = x * x * x;
    return y;
}

//! Worker (Tidak Mengembalikan atau Tidak Reporting)
//* void (Fungsi Tanpa Kembalian) ==> Tipe Data

void tampilkan(int input){
    cout<<"Menampilkan Menggunakan Void\n";
    cout<<input<<endl;
}

int main(){
    int input, hasil;

    cout<<"Masukkan Angka Untuk Dikubikan : ";
    cin>>input;
    
    hasil = pangkat_tiga(input);
    tampilkan(hasil);                 //! Bisa Seperti Ini
    
    cout<<endl;
    
    tampilkan(pangkat_tiga(input)); //! Bisa Juga Seperti Ini
}