// 01. Harga Dan Diskon Di Toko

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string loop_ulang;

    cout<<"=========================================SIGMA STORE=========================================="<<endl;
    cout<<"Selamat Datang Di Sigma Store,\nKami Siap Melayani Anda."<<endl<<endl;

    do{
        int jumlah_brg, harga;
        float diskon, total_biaya;
        string keterangan;

        cout<<"Masukkan Jumlah Barang Belanjaan : ";
        cin>>jumlah_brg;

        int sum_harga = 0;
        for(int a = 1; a <= jumlah_brg; a++){

            cout<<"Masukkan Harga Barang Ke-"<<a<<" : ";
            cin>>harga;

            sum_harga += harga;
        }
        cout<<"Total Harga \t\t   : "<<sum_harga<<endl;
        cout<<"---------------------------------------------------------------------------------"
                "---------"<<endl;
        
        if(sum_harga < 250000){
            diskon = 0;
            keterangan = "Maaf, Anda Tidak Mendapat Diskon, Karena Belanjaan Anda Kurang Dari Rp 250.000";
        } else if(250000 <= sum_harga && sum_harga <= 500000){
            diskon = 0.05;
            keterangan = "Selamat, Anda Mendapat Diskon Sebesar 5% Karena Belanjaan Anda Di Antara " 
                            "Rp 250.000 - Ro. 500.000";          //! Teksnya Kepanjangan, Jadi Taruh Di Bawah
        } else if(sum_harga > 500000){
            diskon = 0.1;
            keterangan = "Selamattt, Anda Mendapat Dison Sebesar 10% Karena Belanjaan Anda Lebih Dari " 
                            "Rp 500.000";
        }

        cout<<keterangan<<endl;
        total_biaya = sum_harga - (sum_harga * diskon);

        cout<<"Maka, Total Biaya Belanjaan Anda Adalah \t: Rp "<<fixed<<setprecision(2)<<total_biaya<<endl;
        cout<<endl;
        cout<<"Ingin Menambah Belanjaan Anda? (y untuk Iya, Selain Itu Tidak) \t\t: ";
        cin>>loop_ulang;

        cout<<"---------------------------------------------------------------------------------"
                "---------"<<endl<<endl;
    } while(loop_ulang == "y" || loop_ulang == "Y");

    cout<<"TERIMA KASIH SUDAH BERBELANJA DI SIGMA STORE :)"<<endl;
    cout<<"=============================================================================================="<<endl;
}
