// 03. Pembayaran Tagihan Listrik

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string loop_ulang;
    cout<<"==============================PENGGUNAAN LISTRIK ANDA==============================="<<endl;

    do{
        int listrik;
        string keterangan;
        float harga_normal, tagihan_sebelum, diskon, potongan, tagihan_setelah;
        cout<<"Masukkan Penggunaan Listrik Anda : ";
        cin>>listrik;
        cout<<"Total Penggunaan Listrik Anda : "<<fixed<<setprecision(2)<<listrik<<" kWh"<<endl<<endl;

        if(listrik <= 100){
            harga_normal = 1500;
        } else if(100 < listrik && listrik <= 300){
            harga_normal = 2000;
        } else if(listrik > 300){
            harga_normal = 3000;
        }

        tagihan_sebelum = listrik * harga_normal;

        if(tagihan_sebelum < 200000){
            diskon = 0;
            keterangan = "Maaf, Anda Tidak Mendapatkan Diskon";
        } else if(200000 <= tagihan_sebelum && tagihan_sebelum <= 500000){
            diskon = 0.05;
            keterangan = "Selamat, Anda Mendapat Diskon Sebesar 5%";
        } else if(500000 < tagihan_sebelum && tagihan_sebelum <= 1000000){
            diskon = 0.075;
            keterangan = "Selamatt, Anda Mendapat Diskon Sebesar 7.5%";
        } else if(tagihan_sebelum > 1000000){
            diskon = 0.1;
            keterangan = "Selamattt, Anda Mendapat Diskon Sebesar 10%";
        }

        potongan = tagihan_sebelum * diskon;
        cout<<keterangan<<endl;
        cout<<"Tagihan Anda Sebelum Diskon : "<<listrik<<" kWh * Rp "<<harga_normal<<" = Rp "
        <<fixed<<setprecision(2)<<tagihan_sebelum<<endl;
        cout<<"Potongan Harga Yang Anda Dapatkan Rp "<<fixed<<setprecision(2)<<potongan<<endl;

        tagihan_setelah = tagihan_sebelum - (tagihan_sebelum * diskon);
        
        cout<<"Sehingga Total Tagihan Anda Rp "<<fixed<<setprecision(2)<<tagihan_setelah<<endl<<endl;

        cout<<"Ingin Menghitung Tagihan Untuk Pengguna Lain? (y untuk Iya, Selain Itu Tidak) : ";
        cin>>loop_ulang;
        cout<<"------------------------------------------------------------------------------------"<<endl;
    } while(loop_ulang == "y" || loop_ulang == "Y");

    cout<<setw(33)<<" "<<"PROGRAM TELAH SELESAI"<<endl;
    cout<<"===================================================================================="<<endl;
}