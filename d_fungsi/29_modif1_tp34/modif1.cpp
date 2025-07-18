//! MODIFIKASI PROGRAM SENDIRI DENGAN KONSEP FUNGSI

#include <iostream>
#include <iomanip>
using namespace std;

void header();
void inputan(string nama, float &jmlh_pelajaran);
void loop_nilai(float jmlh_pelajaran, float &rata_rata);
void cabang_rataan(float rata_rata, string &prestasi, string &keterangan);
void loop_ulang(char &ulang);
void penutup();

int main(){
    char ulang;
    header();

    do{
        string nama, prestasi, keterangan;
        float rata_rata, nilai, jmlh_pelajaran;

        inputan(nama, jmlh_pelajaran);

        loop_nilai(jmlh_pelajaran, rata_rata);

        cabang_rataan(rata_rata, prestasi, keterangan);

        loop_ulang(ulang);

    } while(ulang == 'y' || ulang == 'Y');

    penutup();

    return 0;
}

void header(){
    cout<<setw(35)<<setfill('=')<<"="<<"SELAMAT DATANG DI APLIKASI SIPAJAR"<<setw(35)<<setfill('=')<<"="<<endl;
}

void inputan(string nama, float &jmlh_pelajaran){
    cout<<"Masukkan Nama Siswa : ";
    cin.ignore();
    getline(cin, nama);
    cout<<"Masukkan Jumlah Pelajaran : ";
    cin>>jmlh_pelajaran; 
}

void loop_nilai(float jmlh_pelajaran, float &rata_rata){
    float sum_nilai = 0, nilai;

    for(int a = 1; a <= jmlh_pelajaran && 3 <= jmlh_pelajaran; a++){
        cout<<"Masukkan Nilai Mata Pelajaran Ke-"<<a<<" : ";
        cin>>nilai;

        sum_nilai += nilai;
    }

    rata_rata = sum_nilai / jmlh_pelajaran;

    cout<<endl;
    cout<<"Maka, Nilai Rata-Rata Anda Adalah "<<fixed<<setprecision(2)<<rata_rata<<endl;
}

void cabang_rataan(float rata_rata, string &prestasi, string &keterangan){
    if(rata_rata < 50){
        prestasi = "Kurang Baik";
        keterangan = "Jangan Menyerah, Anda Perlu Belajar Lebih Keras Untuk Memahami Materi.";
    } else if(50 <= rata_rata && rata_rata < 70){
        prestasi = "Cukup Baik";
        keterangan = "Nilai Yang Cukup, Tapi Masih Butuh Kerja Keras Lagi";
    } else if(70 <= rata_rata && rata_rata < 85){
        prestasi = "Baik";
        keterangan = "Bagus! Anda Memiliki Pemahaman Yang Kuat Tentang Materi";
    } else if(rata_rata >= 85){
        prestasi = "Sangat Baik";
        keterangan = "Luar Biasa! Anda Telah Mencapai Tingkat Keunggulan Yang Tinggi";
    }

    cout<<"Berdasarkan Nilai Rata-rata, Anda Memiliki Prestasti Yang "<<prestasi<<endl;
    cout<<"Keterangan : "<<keterangan<<endl<<endl;
}

void loop_ulang(char &ulang){
    cout<<"Ingin Menghitung Nilai Siswa Yang Lain? (y untuk Iya, Selain Itu Tidak) \t: ";
    cin>>ulang;    
    cout<<setw(104)<<setfill('-')<<"-"<<endl<<endl;
}

void penutup(){
    cout<<setw(16)<<setfill(' ')<<" "
        <<"PROGRAM TELAH SELESAI, TERIMA KASIH SUDAH MENGGUNAKAN APLIKASI SIPAJAR :) "<<endl;
    cout<<setw(104)<<setfill('=')<<"="<<endl;
}