// 04. Konversi Rupiah (Rp) Menjadi Dollar ($)

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    double jumlah_rupiah, kurs, dollar;

    kurs = 15382.45;

    cout<<"Menkonversi Mata Uang Rupiah Menjadi Dollar"<<endl;
    cout<<"==========================================="<<endl;

    cout<<"Masukan Jumlah Uang Anda (dalam Rupiah) : ";
    cin>>jumlah_rupiah;

    cout<<"Maka, Rp "<<jumlah_rupiah<<" Dikonversi Menjadi Dollar adalah : ";

    dollar = jumlah_rupiah/kurs;

    cout<<"$"<<fixed<<setprecision(2)<<dollar<<endl;
}