//^ 09. SISTEM MANAJEMEN PARKIR

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

const int maxParkir = 100;
string dataParkir[maxParkir][4];
/*
    [][0] = Plat Nomor
    [][1] = Jenis Kendaraan
    [][2] = Waktu Masuk
    [][3] = Waktu Keluar
*/
int kendaraan = 0;
void daftarParkiran(int index){
    if(index >= kendaraan){
        return;
    }
    cout << setw(20) << left << dataParkir[index][0]
        << setw(18) << left << dataParkir[index][1]
        << setw(15) << left << dataParkir[index][2]
        << setw(15) << left << dataParkir[index][3];

    int jamMasuk, menitMasuk, jamKeluar, menitKeluar;
    char sep;
    stringstream(dataParkir[index][2]) >> jamMasuk >> sep >> menitMasuk;
    stringstream(dataParkir[index][3]) >> jamKeluar >> sep >> menitKeluar;

    int totalMenitMasuk = jamMasuk * 60 + menitMasuk;
    int totalMenitKeluar = jamKeluar * 60 + menitKeluar;
    int durasiMenit = totalMenitKeluar - totalMenitMasuk;

    double biayaParkir = 30 * durasiMenit;     //! Biaya Per Menit = 30 Rupiah, atau 1.800 Perjam

    int durasiJam = durasiMenit / 60;
    durasiMenit = durasiMenit % 60;

    if(durasiMenit == 0){
        cout << setw(2) << right << durasiJam << setw(11) << left << " Jam"; 
    } else{
        cout << setw(2) << right << durasiJam << ":" << setw(10) << left << durasiMenit;
    }
    cout << "Rp. " << setw(14) << left << fixed << setprecision(2) << biayaParkir << endl;
    daftarParkiran(index + 1);
}
void tampilanDataParkir(){
    if(kendaraan == 0){
        cout << "TIDAK ADA KENDARAAN!" << endl;
        return;
    }
    cout << endl << "BIAYA PARKIR RP. 1.800 PER JAM!" << endl;
    cout << setw(20) << left << "Plat Nomor"
        << setw(18) << left << "Jenis Kendaraan"
        << setw(15) << left << "Waktu Masuk"
        << setw(15) << left << "Waktu Keluar"
        << setw(13) << left << "Durasi"
        << setw(18) << left << "Biaya Parkir" << endl;
    cout << string(97, '-') << endl;
    daftarParkiran(0);
    cout << string(97, '-') << endl;
}

void tambahData(int &pilihanJenis,int &jamMasuk,int &menitMasuk,int &jamKeluar,int &menitKeluar){
    if(kendaraan >= maxParkir){
        cout << "PARKIRAN PENUH!" << endl;
        return;
    }
    char sep;
    cout << "Masukkan Plat Kendaraan : ";
    cin.ignore();    
    getline(cin, dataParkir[kendaraan][0]);
    
    cout << "Jenis Kendaraan : 1. Sepeda | 2. Motor | 3. Mobil | 4. Bus " << endl;
    cout << "Pilihan Jenis Kendaraan : ";
    cin >> dataParkir[kendaraan][1];
    pilihanJenis = stoi(dataParkir[kendaraan][1]);
    if(1 <= pilihanJenis && pilihanJenis <= 4){
        switch(pilihanJenis){
            case 1: dataParkir[kendaraan][1] = "Sepeda"; break;
            case 2: dataParkir[kendaraan][1] = "Motor"; break;
            case 3: dataParkir[kendaraan][1] = "Mobil"; break;
            case 4: dataParkir[kendaraan][1] = "Bus"; break;
        }

        cout << "Waktu Masuk Parkiran (JAM : MENIT)  : ";
        cin.ignore();
        getline(cin, dataParkir[kendaraan][2]);
        stringstream(dataParkir[kendaraan][2]) >> jamMasuk >> sep >> menitMasuk;    //! sep = seperate (:)
        
        cout << "Waktu keluar Parkiran (JAM : MENIT) : ";
        getline(cin, dataParkir[kendaraan][3]);
        stringstream(dataParkir[kendaraan][3]) >> jamKeluar >> sep >> menitKeluar;

        kendaraan++;
        cout << "DATA BERHASIL DITAMBAHKAN!" << endl;
    } else{
        cout << "PILIHAN TIDAK VALID. COBA LAGI!" << endl;
    }
}

void menu(){
    int pilihan, pilihanJenis, jamMasuk, menitMasuk, jamKeluar, menitKeluar;

    do{
        cout << "\n#MENU\n";
        cout << "1. Tampilan Daftar Parkiran Hari ini\n2. Menambah Data Kendaraan Di Parkiran\n3. Keluar\n";
        cout << "Pilihan (1 - 3) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1: tampilanDataParkir(); break;
            case 2: tambahData(pilihanJenis, jamMasuk, menitMasuk, jamKeluar, menitKeluar); break;
            case 3: cout << "PROGRAM TELAH SELESAI!" << endl; break;
            default: cout << "KODE YANG ANDA MASUKKAN SALAH. COBA LAGI!" << endl; break;
        }
    } while(pilihan != 3);
}

int main(){
    menu();
    return 0;
}