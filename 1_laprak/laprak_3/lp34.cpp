// 04. Rata-rata Nilai dan Kategori Prestasi

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string ulang;
    cout<<"============================SELAMAT DATANG DI APLIKASI SIPAJAR============================="<<endl;

    do{
        string nama, prestasi, keterangan;
        float rata_rata, nilai, jumlah_pelajaran;

        cout<<"Masukkan Nama Siswa : ";
        cin.ignore();
        getline(cin, nama);
        cout<<"Masukkan Jumlah Pelajaran : ";
        cin>>jumlah_pelajaran;

        float sum_nilai = 0;
        for(int a = 1; a <= jumlah_pelajaran && 3 <= jumlah_pelajaran; a++){
            cout<<"Masukkan Nilai Mata Pelajaran Ke-"<<a<<" : ";
            cin>>nilai;

            sum_nilai += nilai;
        }

        rata_rata = sum_nilai / jumlah_pelajaran;

        cout<<endl;
        cout<<"Maka, Nilai Rata-Rata Anda, Adalah "<<fixed<<setprecision(2)<<rata_rata<<endl;

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

        cout<<"Ingin Menghitung Nilai Siswa Yang Lain? (y untuk Iya, Selain Itu Tidak) \t: ";
        cin>>ulang;    
        cout<<"---------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
    } while(ulang == "y");

    cout<<"         PROGRAM TELAH SELESAI, TERIMA KASIH SUDAH MENGGUNAKAN APLIKASI SIPAJAR :) "<<endl;
    cout<<"==========================================================================================="<<endl;
}
