// 09. Menyusun Tabel Konversi Satuan Panjang (+ Menggunakan Looping)

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int pilih, awal, akhir;
    double a, hasil;
    string ket;

    cout<<"Pilihlah Salah Satu Konversi Meter Ke :"<<endl;
    cout<<"1. Sentimeter\n2. Milimeter\n3. Kilometer\n";
    cout<<"Pilihan : ";
    cin>>pilih;
    
    if(0 < pilih && pilih < 4){
    cout<<"Mulai Berapa Satuan Meternya = ";
    cin>>awal;
    cout<<"Sampai Berapa Satuan Meternya = ";
    cin>>akhir;

        if(pilih == 1){
            cout<<left<<setw(20)<<"Meter"<<setw(20)<<"Sentimeter"<<endl;
            cout<<"-------------------------------"<<endl;
            
            for(int a = awal; a <= akhir; a++){
            hasil = a * 100;
            cout<<left<<setw(20)<<a<<setw(20)<<hasil<<endl;
            }
        } else if(pilih == 2){
            cout<<left<<setw(20)<<"Meter"<<setw(20)<<"Milimeter"<<endl;
            cout<<"-------------------------------"<<endl;

            for(int a = awal; a <= akhir; a++){
            hasil = a * 1000;
            cout<<left<<setw(20)<<a<<setw(20)<<hasil<<endl;
            }
        } else if(pilih == 3){
            cout<<left<<setw(20)<<"Meter"<<setw(20)<<"Kilometer"<<endl;
            cout<<"-------------------------------"<<endl;

            for(int a = awal; a <= akhir; a++){
            hasil = a * 0.001;
            cout<<left<<setw(20)<<a<<setw(20)<<fixed<<setprecision(3)<<hasil<<endl;
            }
        }      
    } else {
        cout<<"Maaf, Kode Yang Anda Masukkan Salah, Coba Lagi!!!"<<endl;
    }
}