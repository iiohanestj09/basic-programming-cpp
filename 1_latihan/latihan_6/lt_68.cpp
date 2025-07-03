//^ 08. SISTEM MANAJEMEN TUGAS
/*
    TODO Menambahkan Tugas, Menandai Tugas sudah selesai, menampilkan semua tugas
    TODO Menandai Tugas Sudah Selesai ==> hitung Tugas yang sudah selesai & Belum Selesai
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int maxTugas = 100;
string dataTugas[maxTugas][3];
/*
    [][0] = Judul Tugas
    [][1] = Deskripsi 
    [][2] = Status
*/
int totalTugas = 0;

void tambahTugas(){
    if(totalTugas >= maxTugas){
        cout << "Data Tugas Sudah Penuh!" << endl;
        return;
    }
    cin.ignore();
    cout << "Masukkan Judul Tugas     : ";
    getline(cin, dataTugas[totalTugas][0]);
    cout << "Masukkan Deskripsi Tugas : ";
    getline(cin, dataTugas[totalTugas][1]);
    dataTugas[totalTugas][2] = "Belum Selesai";

    totalTugas++;
    cout << "DATA BERHASIL DIMASUKKAN!" << endl;
}

void tandaiTugas(){
    cin.ignore();
    string judulTugas;
    cout << "Judul Tugas Yang Ingin Diuabah Statusnya : ";
    getline(cin, judulTugas);

    for(int i = 0; i < totalTugas; i ++){
        if(judulTugas == dataTugas[i][0]){
            if(dataTugas[i][2] == "Belum Selesai"){
                dataTugas[i][2] = "Selesai";
                cout << "STATUS TUGAS BERHASIL DIUBAH!" << endl;
                return;
            } else{
                cout << "TUGAS |" << dataTugas[i][0] << "| SUDAH SELESAI SEBELUMNYA!" << endl;
                return;
            }
        }
    }
    cout << "JUDUL TUGAS YANG ANDA CARI, TIDAK DITEMUKAN!" << endl;
}

void daftarTugas(int index, int &sumSelesai, int &sumBelum){
    if(index >= totalTugas){
        return;
    }
    cout << setw(19) << left << dataTugas[index][0]
        << setw(60) << left << dataTugas[index][1]
        << setw(13) << left << dataTugas[index][2] << endl;
        if(dataTugas[index][2] == "Selesai"){
            sumSelesai++;
        } else{
            sumBelum++;
        }
    daftarTugas(index + 1, sumSelesai, sumBelum);
}
void seluruhTugas(){
    if(totalTugas == 0){
        cout << "TIDAK ADA DATA TUGAS!." << endl;
        return;
    }
    int sumSelesai = 0, sumBelum = 0;
    cout << endl << setw(19) << left << "Judul Tugas"
        << setw(62) << left << "Deskripsi"
        << setw(13) << left << "Status" << endl;
    cout << string(95, '-') << endl;
    daftarTugas(0, sumSelesai, sumBelum);
    cout << string(95, '-') << endl << endl;
    cout << "Jumlah Tugas Yang Selesai : " << sumSelesai << endl;
    cout << "Jumlah Tugas Yang Belum Selesai : " << sumBelum << endl;
}

void menu(){
    int pilihan;
    do{
        cout << "\n#MENU\n";
        cout << "1. Menambahkan Tugas\n2. Tandai Tugas Selesai\n3. Menampilkan Semua Tugas\n4. Keluar\n";
        cout << "Pilihan (1 - 4) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1: tambahTugas();  break;
            case 2: tandaiTugas(); break;
            case 3: seluruhTugas(); break;
            case 4: cout << "PROGRAM TELAH SELESAI!" << endl; break;
            default: cout << "Pilihan Tidak Valid. Coba Lagi!" << endl; break;
        }
    } while(pilihan != 4);
}

int main(){
    menu();
    return 0;
}   