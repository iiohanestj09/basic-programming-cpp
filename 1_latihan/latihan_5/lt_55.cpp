// 05. Menentukan Status Berat Badan Ideal Berdasarkan BMI 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    string nama, statusBMi, saran;
    float berat_bdn, tinggi_bdn, hitungBMI;

    cout<<"Masukkan Nama Anda : ";
    getline(cin, nama);
    cout<<"Berat Badan Anda (kg) : ";
    cin>>berat_bdn;
    cout<<"Tinggi Badan Anda (cm) : ";
    cin>>tinggi_bdn;

    hitungBMI = berat_bdn / pow((tinggi_bdn / 100), 2); //! /100 Karena Inputan Tinggi dlm cm, Dibawa Ke meter

    if(hitungBMI < 18.5){
        statusBMi = "Underweight";
        saran = "Tambahkan asupan kalori dan protein, " 
                "serta lakukan latihan beban untuk meningkatkan massa otot.";
    } else if(18.5 <= hitungBMI && hitungBMI <= 24.99){
        statusBMi = "Normal";
        saran = "Pertahankan pola makan sehat dan rutin berolahraga.";
    } else if(25 <= hitungBMI && hitungBMI <=29.99){
        statusBMi = "Overwight";
        saran = "Kurangi asupan kalori, perbanyak sayur dan buah, serta tingkatkan aktivitas fisik.";
    } else {
        statusBMi = "Obesitas";
        saran = "Konsultasikan dengan ahli gizi untuk rencana diet yang tepat "
                "dan lakukan olahraga secara teratur.";
    }

    cout<<"-------------------------------------------------------------------------------------------"<<endl;

    cout<<"Berdasarkan Berat dan Tinggi Badan Anda, Didapatkan Indikator BMI Anda Adalah "
        <<fixed<<setprecision(2)<<hitungBMI<<" kg/m2"<<endl;
    cout<<"Dan Anda Masuk dalam Golongan : "<<statusBMi<<endl;
    cout<<"Saran : "<<saran<<endl;
}