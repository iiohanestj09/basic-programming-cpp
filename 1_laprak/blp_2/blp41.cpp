//^ 01. MANAJEMEN INVENTARIS TOKO 
//? Selasa, 29 Oktober 2024

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int maxItem = 15;             //! max Item/Barang adalah 15, lebih dari itu inventaris Penuh.
string inventaris[maxItem][3];
    /* 
    [][0] : Nama Barang
    [][1] : Harga Barang
    [][2] : Jumlah Barang
    */
int totalBarang = 0;

void daftarBarang(int index, double &sumNilai) {
    if (index >= totalBarang) {
        return;
    }

    double hargaBrg = stod(inventaris[index][1]);
    int jumlahBrg = stoi(inventaris[index][2]);
    double nilaiBrg = hargaBrg * jumlahBrg;
    sumNilai += nilaiBrg;

    cout << setw(25) << left << inventaris[index][0]
        << "Rp. " << setw(21) << left << fixed << setprecision(2) << hargaBrg
        << setw(13) << left << jumlahBrg
        << "Rp. " << setw(33) << left << fixed << setprecision(2) << nilaiBrg << endl;

    daftarBarang(index + 1, sumNilai);                    //! Rekursif utk menampilkan daftar Barang
}
void tampilanBarang(){
    if(totalBarang == 0){
        cout << "TIDAK ADA DATA INVENTARIS!." << endl;
        return;
    }
    cout << "\nInventaris Toko:\n";         
    cout << setw(25) << left << "Nama Barang"
        << setw(25) << left << "Harga"
        << setw(13) << left << "Jumlah"
        << setw(33) << left << "Nilai" << endl;
    cout << string(85, '-') << endl;

    double sumNilai = 0;
    daftarBarang(0, sumNilai);                            //! Memanggil Fungsi Daftar Barangt Tadi
    cout << string(85, '-') << endl;
    cout << "TOTAL NILAI INVENTARIS : " << sumNilai << endl;
}

void tambahBarang(){
    if(totalBarang >= maxItem){
        cout << "Inventaris Penuh!" << endl;
        return;
    }
    cin.ignore();
    cout << "Masukkan Nama Barang : ";
    getline(cin, inventaris[totalBarang][0]);
    cout << "Masukkan Harga Barang : ";
    cin >> inventaris[totalBarang][1];
    cout << "Masukkan Jumlah Barang : ";
    cin >> inventaris[totalBarang][2];

    if (stoi(inventaris[totalBarang][2]) == 0 ){
        cout << "Jumlah Barang Tidak Boleh Kosong!" << endl;
        return;
    } else if(stoi(inventaris[totalBarang][2]) < 0){
        cout << "Jumlah Barang Tidak Boleh Negatif!" << endl;
        return;
    }

    totalBarang++;
    cout << "BARANG BERHASIL DITAMBAHKAN!"<<endl;
}

void kurangiBarang(){
    cin.ignore();
    string nama;
    cout << "Masukkan Nama Barang Yang Jumlahnya Ingin Dikurangi : ";
    getline(cin, nama);

    for(int i = 0; i < totalBarang; i++){
        if(inventaris[i][0] == nama){
            int jumlahKurang;
            int jumlahSekarang = stoi(inventaris[i][2]);
            cout << "Jumlah Yang Ingin Dikurangi : ";
            cin >> jumlahKurang;

            if(jumlahKurang < 0){
                cout << "Jumlah Barang Yang Dikurangi Tidak Boleh Negatif" << endl;
                return;
            } else if(jumlahKurang == 0){
                cout << "Jumlah Barang Yang Dikurangi Tidak Boleh Nol!" << endl;
                return;
            } else if(jumlahKurang > jumlahSekarang){
                cout << "Jumlah Yang Dikurangi Melebih Jumlah Barang Saat Ini!" << endl;
            } 

            inventaris[i][2] = to_string(jumlahSekarang - jumlahKurang);
            cout << "JUMLAH BARANG BERHASIL DIKURANGI!" << endl;
            return;
        }
    }
    cout << "Barang Tidak Ditemukan!" << endl;
}

void menu(){
    int pilihan;

    do{
        cout << "\n#MENU\n";
        cout << "1. Tampilkan Inventaris\n2. Tambah Barang\n3. Kurangi Barang\n4. Keluar\n";
        cout << "Pilih Opsi (1 - 4) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1: tampilanBarang(); break;
            case 2: tambahBarang(); break;
            case 3: kurangiBarang(); break;
            case 4: cout << "PROGRAM TELAH!" << endl; break;
            default: cout << "Pilihan Tidak Valid! Coba Lagi!" << endl; break;
        }
    } while (pilihan != 4);
}

int main(){
    menu();
    return 0;
}