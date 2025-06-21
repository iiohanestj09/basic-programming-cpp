// 07. Menghitung Total Biaya Perjalanan

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float jarak, konsumsi, biaya_total;
    int harga_bensin;
    string ket;

    cout<<"Jarak Tempuh (km) : ";
    cin>>jarak;
    cout<<"Konsumsi Bahan bakar (km/L) : ";
    cin>>konsumsi;
    cout<<"Harga Bahan Bakar (Rp/L) : ";
    cin>>harga_bensin;

    if(konsumsi > 15){
        ket = "Efisien";
    } else if(10 < konsumsi && konsumsi < 15){
        ket = "Cukup Efisien";
    } else{
        ket = "Boros";
    }
    
    biaya_total = (jarak / konsumsi) * harga_bensin;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Maka, Perhitungan Biaya Total Perjalanan Anda adalah : "<<endl;
    cout<<"Biaya Total = (Jarak Tempuh / Konsumsi Bahan Bakar) * Harga Bahan Bakar"<<endl;
    cout<<"Biaya Total = ("<<jarak<<" / "<<konsumsi<<") * "<<harga_bensin<<endl;
    cout<<"Biaya Total = "<<jarak / konsumsi<<" * "<<harga_bensin<<endl;
    cout<<"Biaya Total = "<<"Rp "<<fixed<<setprecision(2)<<biaya_total<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Dan Berdasarkan Konsumsi Bahan Bakar Sebelumya, Kendaran Anda Termasuk Golongan "<<ket<<endl;
}