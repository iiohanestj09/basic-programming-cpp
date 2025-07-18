//^ 04. Penjualan Dengan Diskon
//? 26 November 2024

#include <iostream>
#include <iomanip>
using namespace std;

void hitungDiskon(int *dataBrg, int barang, float &sumDiskon){
    if(barang <= 0){
        return;
    }
    float diskon;    
    string ket;
    int hargaBrg = dataBrg[barang - 1];
    if(hargaBrg >= 750000){
        diskon = hargaBrg - (hargaBrg * 0.1); 
        ket = "10%";
    } else if(hargaBrg >= 500000){
        diskon = hargaBrg - (hargaBrg * 0.05);
        ket = "5%";
    } else{
        diskon = hargaBrg - (hargaBrg * 0);
        ket = "Tidak Ada Diskon";
    }

    sumDiskon += diskon;
    hitungDiskon(dataBrg, barang - 1, sumDiskon);
    cout << "Diskon Untuk Barang " << barang << " : " << ket << endl;
}

int main(){
    int jmlhBrg, harga;
    float sumDiskon = 0;
    cout << "Masukkan Jumlah Barang : ";
    cin >> jmlhBrg;
    int *dataBrg = new int[jmlhBrg];

    for(int i = 0; i < jmlhBrg; i++){
        cout << "Masukkan Harga Barang " << i + 1 << " : ";
        cin >> dataBrg[i];
    }
    cout << endl;
    hitungDiskon(dataBrg, jmlhBrg, sumDiskon);
    cout << "Total Harga Setelah Diskon : Rp" << fixed << setprecision(2) << sumDiskon << endl;
    delete[] dataBrg;

    cout << setw(60) << setfill('=') << "=" << endl;
    return 0;
}