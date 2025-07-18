// 06. Menghitung Rata-rata Suhu Harian

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float suhu1, suhu2, suhu3, suhu4, suhu5, rata2suhu;
    string cuaca, saran;

    cout<<"Masukkan Suhu Hari Ke-1 : ";
    cin>>suhu1;
    cout<<"Masukkan Suhu Hari Ke-2 : ";
    cin>>suhu2;
    cout<<"Masukkan Suhu Hari Ke-3 : ";
    cin>>suhu3;
    cout<<"Masukkan Suhu Hari Ke-4 : ";
    cin>>suhu4;
    cout<<"Masukkan Suhu Hari Ke-5 : ";
    cin>>suhu5;

    rata2suhu = (suhu1 + suhu2 + suhu3 + suhu4 + suhu5) / 5;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Maka, Rata-rata suhu dari 5 hari terakhir adalah = "
        <<fixed<<setprecision(1)<<rata2suhu<<" "<<static_cast<char>(248)<<"C"<<endl;
                                                //! Simbol Derajat dengan kode ASCII 248
    
    if(rata2suhu < 20.0){
        cuaca = "Cuaca Dingin";
        saran = "Suhu yang rendah, pastikan Anda mengenakan jaket ataupun pakaian hangat Lainnya.";
    } else if(20.0 < rata2suhu && rata2suhu < 30.0){
        cuaca =  "Cuaca Normal";
        saran = "Suhu Yang Nyaman, cocok untuk aktivitas sehari-hari.";
    } else {
        cuaca = "Cuaca Panas";
        saran = "Suhu Yang Tinggi, pastikan Anda tetap terhidrasi.";
    }
    cout<<"Berdasarkan Rata-rata Suhu 5 hari terakhir. Cuacanya dapat dikategorikan sebagai "
        <<cuaca<<endl;
    cout<<"Saran : "<<endl;
    cout<<saran<<endl;
}