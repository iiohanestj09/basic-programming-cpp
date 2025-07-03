// 08. Menghitung Biaya Cat Untuk Mengecat Dinding Ruangan

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int p, l, t, harga_cat;
    float Ld, butuh_cat, biaya_total;

    cout<<"Panjang Ruangan (m) : ";
    cin>>p;
    cout<<"Lebar Ruangan (m) : ";
    cin>>l;
    cout<<"Tinggi Ruangan (m) : ";
    cin>>t;
    cout<<"Harga Cat Per Liter (Rp) : ";
    cin>>harga_cat;

    cout<<"----------------------------------------------------"<<endl;
    cout<<"Diketahui : "<<endl;

    Ld = 2 * ((p * t) + (l * t));               //! Menghitung Luas Dinding Saja, Luas Alas Tidak
    cout<<"Luas Dinding \t: "<<fixed<<setprecision(2)<<Ld<<" m^2"<<endl;

    butuh_cat = Ld / 10;
    cout<<"Jumlah Cat Yang Dibutuhkan : "<<fixed<<setprecision(2)<<butuh_cat<<" liter"<<endl;

    biaya_total = butuh_cat * harga_cat;
    cout<<"Total Biaya Cat \t: Rp "<<fixed<<setprecision(2)<<biaya_total<<endl;
}