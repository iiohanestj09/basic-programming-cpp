#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int maxBarang = 50;
string dataBarang[maxBarang][4];
/*
    [][0] = ID Barang
    [][1] = Nama Barang
    [][2] = Harga Barang
    [][3] = Jumlah Barang
*/
int totalBarang = 0;

void daftarBarang(int index){
    if(index >= totalBarang){
        return;
    }
    cout << left << setw(6) << dataBarang[index][0]
        << left << setw(24) << dataBarang[index][1]
        << "Rp. " << left << setw(13) << fixed << setprecision(2) << dataBarang[index][2]
        << left << setw(13) << dataBarang[index][3] << endl;
    
    daftarBarang(index + 1);
}
void tampilanBarang(){
    if(totalBarang == 0){
        cout << "Tidak Ada Barang Di Toko!" << endl;
        return;
    }
    cout << "\n@Daftar Semua Barang:\n";
    cout << left << setw(6) << "ID"
        << left << setw(24) << "Nama Barang"
        << left << setw(17) << "Harga Barang"
        << left << setw(13) << "Jumlah Barang" << endl;
    cout << string(60, '-') << endl;
    daftarBarang(0);
    cout << string(60, '-') << endl;
}

void tambahBarang(){
    if(totalBarang >= maxBarang){
        cout << "Barang Di Toko Penuh!" << endl;
        return;
    }
    cout << "Masukkan Nomor Barang: ";
    cin >> dataBarang[totalBarang][0];
    cin.ignore();
    cout << "Masukkan Nama Barang: ";
    getline(cin, dataBarang[totalBarang][1]);
    cout << "Masukkan Harga Satuannya: ";
    cin >> dataBarang[totalBarang][2];
    cout << "Masukkan Jumlah Barang: ";
    cin >> dataBarang[totalBarang][3];

    totalBarang++;
    cout << "Barang Berhasil Ditambahkan!" << endl;
}

void updateBarang(){
    if(totalBarang == 0){
        cout << "Tidak Ada Barang Yang Bisa Di-Update!\nKarena Tidak Ada Barang Di Toko." << endl;
    }
    int countCari = 0;
    string cariBarang, updateJumlahBarang;
    cout << "Masukkan Nomor Barang yang Ingin Di-update: ";
    cin >> cariBarang;
    for(int i = 0; i < totalBarang; i++){
        if(cariBarang == dataBarang[i][0]){
            cout << "Jumlah Barang Sebelumnya: " << dataBarang[i][3] << endl;
            cout << "Jumlah Barang Yang Ingin Di-Update: ";
            cin >> updateJumlahBarang;
            dataBarang[i][3] = updateJumlahBarang;
            cout << "Barang Berhasil Di-Update!" << endl;
            countCari++;
        }
    }

    if(countCari == 0){
        cout << "Nomor Barang Tidak Ditemukan!" << endl;
        return;
    }
}

void hapusBarang(){
    if(totalBarang == 0){
        cout << "Tidak Ada Barang Yang Bisa Dihapus!\nKarena Tidak Ada Barang Di Toko." << endl;
    } 
    int countCari = 0;
    string cariBarang, updateJumlahBarang;
    cout << "Masukkan Nomor Barang yang Ingin Dihapus: ";
    cin >> cariBarang;
    for(int i = 0; i < totalBarang; i++){
        if(cariBarang == dataBarang[i][0]){
            for(int j = i; j < totalBarang - 1; j++){
                for(int k = 0; k < 4; k++){
                    dataBarang[j][k] = dataBarang[j + 1][k];
                }
            }
            totalBarang--;
            countCari++;
            cout << "Barang Berhasil Dihapus!" << endl;
            break;
        }
    }

    if(countCari == 0){
        cout << "Nomor Barang Tidak Ditemukan!" << endl;
        return;
    }
}

void analisisData(){
    if(totalBarang == 0){
        cout << "Tidak Ada Data Untuk Dianalisis!" << endl;
        return;
    }
    double maxHargaBarangX = 0, minHargaBarangX = 9999999999999999;
    double maxJumlahX = 0, minJumlahX = 9999999999999999;
    double maxHarga = 0, minHarga = 9999999999999999;
    double sumHarga = 0;

    for(int i = 0; i < totalBarang; i++){
        double hargaBarangX = stod(dataBarang[i][2]);
        double jumlahX = stod(dataBarang[i][3]);
        double hargaX = hargaBarangX * jumlahX;
        sumHarga += hargaX;

        if(hargaBarangX >= maxHargaBarangX){
            maxHargaBarangX = hargaBarangX;
        }
        if(hargaBarangX <= minHargaBarangX){
            minHargaBarangX = hargaBarangX;
        }

        if(jumlahX >= maxJumlahX){
            maxJumlahX = jumlahX;
        }
        if(jumlahX <= minJumlahX){
            minJumlahX = jumlahX;
        }

        if(hargaX >= maxHarga){
            maxHarga = hargaX;
        }
        if(hargaX <= minHarga){
            minHarga = hargaX;
        }
    }

    cout << "\n@Analisa Data Barang:\n";
    cout << "Barang Dengan Harga Satuannya Termahal: Rp. " 
        << fixed << setprecision(2) << maxHargaBarangX << endl;
    cout << "Barang Dengan Harga Satuannya Termurah: Rp. " 
        << fixed << setprecision(2) << minHargaBarangX << endl << endl;
    cout << "Barang Dengan Jumlah Terbanyak : " << fixed << setprecision(0) << maxJumlahX << endl;
    cout << "Barang Dengan Jumlah Tersedikit: " << fixed << setprecision(0) << minJumlahX << endl << endl;
    cout << "Barang Dengan Total Harga Termahal: Rp. " 
        << fixed << setprecision(2) << maxHarga << endl;
    cout << "Barang Dengan Total Harga Termurah: Rp. " 
        << fixed << setprecision(2) << minHarga << endl << endl;
    cout << "TOTAL HARGA SEMUA BARANG: Rp. " << fixed << setprecision(2) << sumHarga << endl; 
}


void menu(){
    int pilihan;
    do{
        cout << "\n#MENU\n";
        cout << "1. Daftar Semua Barang\n2. Tambah Barang\n3. Update Barang\n4. Hapus Barang\n"
            << "5. Analisis Data\n6. Keluar" << endl;
        cout << "Pilihan (1 - 6) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1: tampilanBarang(); break;
            case 2: tambahBarang(); break;
            case 3: updateBarang(); break;
            case 4: hapusBarang(); break;
            case 5: analisisData(); break;
            case 6: cout << "Program Telah Selesai!" << endl; break;
            default: cout << "Pilihan Tidak Valid! Coba Lagi." << endl; continue;
        }
    }while(pilihan != 6);
}
int main(){
    cout << left << setw(50) << setfill('=') << "="  << "TOKO SIGMA" 
    << left << setw(50) << setfill('=') << "=" << endl;
    cout << setfill(' ');

    menu();

    return 0;
}