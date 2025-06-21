//* Materinya
/*
Misalkan, 

#include <iostream>
using namespace std;

int main(){
cout<<maman<<endl;
}

int maman; //? Deklarasi VARIABEL

Ini akan mengakibatkan eror karena, variabel maman ini deklarasinya malah dibawah

Namun, Pada Fungsi, Kita Bisa Menaruhnya Di Bawah Main Program.
Dengan Catatan, Fungsi Tsb Ditaruh Di Atas Dan Bawah Main Program
*/


#include <iostream>
using namespace std;

float luas(float p, float l);           //! Deklarasi FUNGSI
void tampilkan(float x);

int main(){
    float p, l, hasil;
    cout<<"Masukkan Panjang : ";
    cin>>p;
    cout<<"Masukkan Lebar : ";
    cin>>l;

    cout<<"Maka, Luas Dari Persegi Panjangnya Adalah "<<endl;

    hasil = luas(p,l);
    tampilkan(hasil);

    cout<<endl;     //! ATAU 

    tampilkan(luas(p, l));
    
}

float luas(float p, float l){               //! FUNGSI-NYA TARUH DI BAWAH MAIN PROGRAM
    return p * l;                        //? Langsung Saja Seperti ini juga bisa
}

void tampilkan(float x){
    cout<<"Luas Persegi Panjang : "<<x<<endl;
}
