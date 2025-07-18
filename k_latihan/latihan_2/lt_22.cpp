// 02. Kalkulator Diskon Belanja

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float harga, diskon, total;

    cout<<"Harga Barang : ";
    cin>>harga;
    cout<<"Diskon : ";
    cin>>diskon;

    total = harga * (1 - diskon/100);

    cout<<"Harga Awal : Rp "<<harga<<endl;
    cout<<"Diskon Yang Anda Dapatkan : "<<diskon<<"%"<<endl;
    cout<<"Total : Rp "<<fixed<<setprecision(2)<<total<<endl;
}