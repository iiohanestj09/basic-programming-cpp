// 05. Menghitung BMR dan Menentukan Status Berat Badan Ideal Berdasarkan BMI 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    int pilihan, usia;
    string jenis_kel, statusBMi, saran;
    float berat_bdn, tinggi_bdn, hitungBMR, hitungBMI;

    cout<<"Pilihlah Salah Satu"<<endl;
    cout<<"1. Laki-laki\n2. Perempuan"<<endl;
    cout<<"Pilihan : ";
    cin>>pilihan;

    cout<<"Usia Anda Sekarang Berapa : ";
    cin>>usia;
    cout<<"Berat Badan Anda (kg) : ";
    cin>>berat_bdn;
    cout<<"Tinggi Badan Anda (cm) : ";
    cin>>tinggi_bdn;

    if(pilihan == 1){ //! Rumus BMR Laki-laki dan Perempuan Sesuai Rumus Harris-Benedict
        jenis_kel = "Laki-laki";
        hitungBMR = 66.5 + (13,7 * berat_bdn) + (5 * tinggi_bdn) - (6.8 * usia);
    } else if(pilihan == 2){
        jenis_kel =  "Perempuan";
        hitungBMR = 665 + (9,6 * berat_bdn) + (1.8 * tinggi_bdn) - (4.7 * usia);
    } else {
        jenis_kel = "Anonim";
    } 

    hitungBMI = berat_bdn / pow((tinggi_bdn / 100), 2); //! /100 Karena Inputan Tinggi dlm cm, Dibawa Ke meter

    if(hitungBMI < 18.5){
        statusBMi = "Kurus";
        saran = "Tambahkan asupan kalori dan protein, serta lakukan latihan beban untuk meningkatkan massa otot.";
    } else if(18.5 <= hitungBMI && hitungBMI <= 24.99){
        statusBMi = "Normal";
        saran = "Pertahankan pola makan sehat dan rutin berolahraga.";
    } else if(25 <= hitungBMI && hitungBMI <=29.99){
        statusBMi = "Gemuk";
        saran = "Kurangi asupan kalori, perbanyak sayur dan buah, serta tingkatkan aktivitas fisik.";
    } else {
        statusBMi = "Obesitas";
        saran = "Konsultasikan dengan ahli gizi untuk rencana diet yang tepat dan lakukan olahraga secara teratur.";
    }

    cout<<"---------------------------------------------------------------";
    cout<<"-----------------------------------------------------------"<<endl;

    cout<<"Anda adalah Seorang "<<jenis_kel<<". Usia Anda sekarang adalah "<<usia<<" tahun."
        <<" Berat dan Tinggi Badan Anda adalah "<<berat_bdn<<" kg dan "<<tinggi_bdn<<" cm."<<endl;
    
    cout<<"Sesuai dengan data dan perhitungan, "<<endl;
    cout<<"Indikator BMR Anda adalah "<<fixed<<setprecision(2)<<hitungBMR<<" kkal/hari"<<endl;
    cout<<"Dan Indikator BMI Anda adalah "<<fixed<<setprecision(2)<<hitungBMI<<" kg/m2"<<endl;

    cout<<"---------------------------------------------------------------";
    cout<<"-----------------------------------------------------------"<<endl;

    cout<<"Berdasarkan Indikator BMI Anda. Anda Masuk dalam Golongan : "<<statusBMi<<endl;
    cout<<"Saran : "<<endl;
    cout<<saran;
}