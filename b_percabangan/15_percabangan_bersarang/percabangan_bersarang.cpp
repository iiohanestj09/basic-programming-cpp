#include <iostream>
using namespace std;

int main (){
    int pil, umur;
    string jkel, status, kegiatan, menikah;

    cout<<"Pilihlah Salah Satu : "<<endl;
    cout<<"1. Laki-laki\n2. Perempuan"<<endl;
    cout<<"Pilihan : ";
    cin>>pil;
    cout<<"Umur Anda (th) : ";
    cin>>umur;

    if(pil == 1){
        jkel = "Laki-laki";
        if (umur >= 27){
            status = "Sudah Waktunya";
            kegiatan = "Cari Jodoh Woi";
            menikah =" Menikah Boss!";
        } else {
            status = "Belum Waktunya";
            kegiatan = "Tingkatkan Kualitas Diri Anda Yaa Ganteng";
            menikah = " Menikah Boss!";
        }
    } else if(pil == 2){
        jkel = "Perempuan";
        if (umur >= 25){
            status = "Sudah Waktunya";
            kegiatan = "Cari Jodoh Yaa Cantik";
            menikah = " Menikah Boss!";
        } else{
            status = "Belum Waktunya";
            kegiatan = "Tingkatkan Kualitas Diri Anda Yaa Cantik";
            menikah = " Menikah Boss!";
        }
    }
    else{
        jkel = "Anomali";
        status = "Sudah Waktunya";
        kegiatan = "Pergi!!!";
        menikah = " Anda Mencari Jati Diri Woi";
        
    }

    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Anda adalah seorang "<<jkel<<" berumur "<<umur<<" tahun"<<endl;
    cout<<status<<menikah<<endl;
    cout<<"Silahkan "<<kegiatan<<endl;
}
