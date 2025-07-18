// 07. Menghitung Total Biaya Perjalanan

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float jarak, konsumsi, biaya_total;
    int harga_bensin;

    cout<<"Jarak Tempuh (km) : ";
    cin>>jarak;
    cout<<"Konsumsi Bahan bakar (km/L) : ";
    cin>>konsumsi;
    cout<<"Harga Bahan Bakar (Rp/L) : ";
    cin>>harga_bensin;
    
    biaya_total = (jarak / konsumsi) * harga_bensin;
    cout<<"---------------------------------------------------"<<endl;

    cout<<"Maka, Perhitungan Biaya Total Perjalanan Anda adalah : "<<endl;
    cout<<"Biaya Total = (Jarak Tempuh / Konsumsi Bahan Bakar) * Harga Bahan Bakar"<<endl;
    cout<<"Biaya Total = ("<<jarak<<" / "<<konsumsi<<") * "<<harga_bensin<<endl;
    cout<<"Biaya Total = "<<jarak / konsumsi<<" * "<<harga_bensin<<endl;
    cout<<"Biaya Total = "<<"Rp "<<fixed<<setprecision(2)<<biaya_total<<endl;
}