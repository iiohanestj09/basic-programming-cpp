// 00. Data Peserta Lomba
//? Selasa, 17 September 2024

#include <iostream>
#include <iomanip>
// #include <string>
using namespace std;

int main(){
    string nama_lengkap;
    int usia;
    float tinggi, skor;
    bool lulus;

    cout<<"Nama Lengkap Peserta : ";
    getline(cin, nama_lengkap);
    cout<<"Masukkan Usia Peserta : ";
    cin>>usia;
    cout<<"Masukkan Tinggi Badan Peserta : ";
    cin>>tinggi;
    cout<<"Berapa Nilai Rata-rata Peserta : ";
    cin>>skor;

    cout<<left;
    cout<<setw(20)<<"Nama Lengkap : "<<nama_lengkap<<endl;
    cout<<setw(20)<<"Usia : "<<usia<<" tahun"<<endl;
    cout<<setw(20)<<"Tinggi Badan : "<<fixed<<setprecision(1)<<tinggi<<" cm"<<endl;
    cout<<setw(20)<<"Nilai Rata-Rata :"<<fixed<<setprecision(2)<<skor<<endl;
    cout<<setw(20)<<((80 <= skor && skor <= 100)?"SELAMAT ANDA LULUS, HEBATTT!!!" : 
    "MAAF ANDA TIDAK LULUS, JANGAN MENYERAH DAN TERUSLAH BERUSAHA :)");
}