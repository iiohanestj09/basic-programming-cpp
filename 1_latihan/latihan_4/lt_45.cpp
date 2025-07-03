//^ 05. Analasis Hasil Penjualan

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main(){
    int jmlProduk;
    float sumHasil = 0, maxHasil = 0;
    string kategori;
    
    cout << "Masukkan Jumlah Produk: ";
    cin >> jmlProduk;
    cin.ignore();

    string **dataProduk = new string *[jmlProduk];
    for(int i = 0; i < jmlProduk; i++){
        dataProduk[i] = new string[3];
    }
    cout << "Masukkan data produk (nama produk, harga satuan, jumlah terjual) : " << endl;
    for(int i = 0; i < jmlProduk; i++){
        cout << "Nama Produk " << i + 1 << ": ";
        getline(cin, dataProduk[i][0]);
        cout << "Harga: ";
        cin >> dataProduk[i][1];
        cout << "Terjual: ";
        cin >> dataProduk[i][2];
        cin.ignore();

        float hasil = stof(dataProduk[i][1]) * stof(dataProduk[i][2]);
        sumHasil += hasil;

        if(hasil >= maxHasil){
            maxHasil = hasil;
            kategori = dataProduk[i][0];
        }
        cout << endl;
    }
    for(int a = 0; a < jmlProduk; a++){
        cout << "Produk " << a + 1 << ": " << dataProduk[a][0]
            << ", Harga: Rp " << dataProduk[a][1] 
            << ", Jumlah: " << dataProduk[a][2] << endl;
    }

    cout << endl << "Total pendapatan: Rp " << sumHasil << endl;
    cout << "Rata-rata pendapatan per-produk: Rp " << fixed << setprecision(2)
        << sumHasil / jmlProduk << endl;
    cout << "Produk dengan pendapatan tertinggi: '" << kategori << "'"
        "(Rp " << fixed << setprecision(2) << maxHasil << ")" << endl;

    for(int i = 0; i < jmlProduk; i++){
        delete[] dataProduk[i];
    }
    delete[] dataProduk;
    return 0;
}