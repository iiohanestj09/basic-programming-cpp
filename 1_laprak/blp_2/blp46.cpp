//^ 06. SISTEM MANAJEMEN PERPUSTAKAAN

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int maxBuku = 100;
string dataBuku[maxBuku][3];
/*
    [][0] = Judul Buku
    [][1] = Penulis
    [][2] = Tahun Terbit
*/
int totalBuku = 0;
void tambahBuku(){
    if(totalBuku >= maxBuku){
        cout << "Data Buku Sudah Penuh!" << endl;
        return;
    }
    cin.ignore();
    cout << "Masukkan Nama Buku : ";
    getline(cin, dataBuku[totalBuku][0]);
    cout << "Nama Penulis Buku  : ";
    getline(cin, dataBuku[totalBuku][1]);
    cout << "Tahun Terbit Buku  : ";
    cin >> dataBuku[totalBuku][2];

    totalBuku++;
    cout << "DATA BUKU BERHASIL DITAMBAHKAN!" << endl;
}

void cariBuku(){
    string cariBuku;
    int hasilCari = 0;
    cout << "Judul Buku Yang Ingin Dicari : ";
    cin.ignore();
    getline(cin, cariBuku);

    for(int a = 0; a < totalBuku; a++){
        if(cariBuku == dataBuku[a][0]){
            cout << "Buku Yang Anda Cari Terdapat Pada :" << endl;
            cout << "DATA BUKU KE-" << a+1 << endl;
            cout << "Judul Buku   : " << dataBuku[a][0] << endl;
            cout << "Penulis      : " << dataBuku[a][1] << endl;
            cout << "Tahun Terbit : " << stoi(dataBuku[a][2]) << endl;
            hasilCari++;
        }
        
    }
    if(hasilCari == 0){
        cout << "BUKU YANG ANDA CARI TIDAK DITEMUKAN!" << endl;
    }
}

void daftarBuku(int index){
    if(index >= totalBuku){
        return;
    }
    int tahunTrbt = stoi(dataBuku[index][2]);
    cout << setw(40) << left << dataBuku[index][0]
        << setw(25) << left << dataBuku[index][1]
        << setw(13) << left << tahunTrbt << endl;
    
    daftarBuku(index + 1);
}
void tampilanBuku(){
    if(totalBuku == 0){
        cout << "TIDAK ADA DATA BUKU!." << endl;
        return;
    }
    cout << endl << setw(40) << left << "Judul Buku"
        << setw(25) << left << "Penulis"
        << setw(13) << left << "Tahun terbit" << endl;
    cout << string(80, '-') << endl;
    daftarBuku(0);
    cout << string(80, '-') << endl;
}

void menu(){
    int pilihan;
    do{
        cout << "\n#Menu\n";
        cout << "1. Menambah Buku\n2. Mencari Buku\n3. Tampilan Daftar Buku\n4. Keluar\n";
        cout << "Pilihan (1 - 4) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1: tambahBuku(); break;
            case 2: cariBuku(); break;
            case 3: tampilanBuku(); break;
            case 4: cout << "PROGRAM TELAH SELESAI!" << endl; break;
            default: cout << "Pilihan Tidak Valid. Coba Lagi!" << endl; break;
        }
    } while (pilihan != 4);
}

int main(){
    menu();
    return 0;
}