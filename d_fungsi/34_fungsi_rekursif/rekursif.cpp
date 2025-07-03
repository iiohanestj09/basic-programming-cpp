//* Menghitung Faktorial

#include <iostream>             //! Rekursif = Memanggil Kembali Fungsi Dirinya Sendiri === Looping
using namespace std;

int faktorial(int x);

int main(){
    int faktor;
    cout<<faktorial(4)<<endl<<endl;

    cout<<"Masukkan Angka Yang Ingin Dijumlahkan : ";
    cin>>faktor;

    cout<<"Maka, Faktorial Dari "<<faktor<<" Adalah : "<<faktorial(faktor)<<endl;

}

int faktorial(int x){
    if(x <= 0) return 1;
    return x * faktorial(x - 1);
}