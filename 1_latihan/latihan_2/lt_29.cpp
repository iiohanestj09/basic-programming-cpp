// 09. Menyusun Tabel Konversi Satuan Panjang (+ Menggunakan Looping)

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int awal, akhir, cm, mm;
    double a, km;

    cout<<"Mulai Berapa Satuan Meternya = ";
    cin>>awal;
    cout<<"Sampai Berapa Satuan Meternya = ";
    cin>>akhir;

    cout<<left<<setw(20)<<"Meter"<<setw(20)<<"Sentimeter"<<setw(20)<<"Milimeter"
        <<setw(20)<<"Kilometer"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;

    for(int a = awal; a <= akhir; a++){
        cm = a * 100;
        mm = a * 1000;
        km = a / 1000.0;

        cout<<left<<setw(20)<<a<<setw(20)<<cm<<setw(20)<<mm<<setw(20)<<fixed<<setprecision(3)<<km<<endl;
    }
}