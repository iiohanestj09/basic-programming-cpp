#include <iostream>
using namespace std;

int main (){
    int biaya, total_biaya;

    cout<<"Masukkan Harga \t\t\t\t: ";
    cin>>biaya;

    if(80000 < biaya && biaya < 120000){
        cout<<"Selamat, Anda Mendapatkan Potongan Harga 10%"<<endl;
        total_biaya = biaya * 90/100;
        cout<<"Total = Rp "<<total_biaya<<endl;
    } else if(biaya >= 120000){
        cout<<"Selamat, Anda Mendapatkan Potongan Harga 20%"<<endl;
        total_biaya = biaya * 80/100;
        cout<<"Total = Rp "<<total_biaya<<endl;
    } else{
        cout<<"Maaf Anda Tidak Mendapatkan Potongan Harga"<<endl;
        total_biaya = biaya;
        cout<<"Total = Rp "<<total_biaya<<endl;
    }

    cout<<"--------------------------------------------"<<endl;
    cout<<"TERIMA KASIH SUDAH BERBELANJA DI SIGMA STORE";
    
}