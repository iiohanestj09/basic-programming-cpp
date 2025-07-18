// 02. Kalkulator Diskon Belanja

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int pilih, harga;
    float diskon, total;
    string ket;

    cout<<setw(18)<<"SIGMA STORE"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Pilih Barang Yang Diinginkan : "<<endl;
    cout<<"1. Meja\n2. Kursi\n3. Rak Sepatu\n4. Kipas Angin\n5. Rice Cooker\n6. Lemari\n7. Kasur\n";
    cout<<"Pilihan : ";
    cin>>pilih;
    cout<<endl;

    if(0 < pilih && pilih < 8){
        switch(pilih){
            case 1 : harga = 150000; ket = "Meja"; break;
            case 2 : harga = 100000; ket = "Kursi"; break;
            case 3 : harga = 70000; ket = "Rak Sepatu"; break;
            case 4 : harga = 180000; ket = "Kipas Angin"; break;
            case 5 : harga = 200000; ket = "Rice Cooker"; break;
            case 6 : harga = 300000; ket = "Lemari"; break; 
            case 7 : harga = 700000; ket = "Kasur"; break;
            }
        cout<<"Anda Sekarang Memilih "<<ket<<" Dengan Harga Rp "<<harga<<endl;
        cout<<"Karena Hari ini Ada Promo 11.11, maka Anda Mendapatkan Diskon Sesuka Hati"<<endl;
        cout<<"Masukkan Diskon Yang Anda Inginkan (%) : ";
        cin>>diskon;

        total = harga * (diskon / 100);

        cout<<"Maka, Total Harganya Adalah Rp "<<fixed<<setprecision(2)<<total<<endl;
        cout<<"--------------------------------------------"<<endl;
        cout<<"TERIMA KASIH SUDAH BERBELANJA DI SIGMA STORE"<<endl;
    
    } else {
        cout<<"Maaf, Kode Barang Yang Masukkan Tidak Valid / Tidak Ada Di Toko Kami"<<endl;
    }
}
