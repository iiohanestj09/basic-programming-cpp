//^ 04. MANAJEMEN DATA KARYAWAN 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int maxKry = 17;      //! Misalkan, sebuah perusahaan hanya mempunyai 17 Karyawan
string dataKry[maxKry][4];
/*
    [0][0] = Nama Karyawan
    [0][1] = Usia
    [0][2] = Jam Kerja
    [0][3] = Gaji Per Jam Kerja
*/
int totalKry = 0;

void daftarDataKry(int index){
    if(index >= totalKry){
        return;
    }

    int usiaKry = stoi(dataKry[index][1]);
    int jamKerja = stoi(dataKry[index][2]);
    int gajiPerJam = stod(dataKry[index][3]);
    double totalGajiKry = jamKerja * gajiPerJam;

    cout << setw(23) << left << dataKry[index][0]
        << setw(17) << left << usiaKry 
        << setw(20) << left << jamKerja 
        << "Rp. " << setw(16) << left << setprecision(2) << gajiPerJam  
        << "Rp. " << setw(17) << left << fixed << setprecision(2) << totalGajiKry << endl;
    
    daftarDataKry(index + 1);
}
void tampilanData(){
    if(totalKry == 0){
        cout << "TIDAK ADA DATA KARYAWAN!." << endl;
        return;
    }
    cout << setw(23) << left << "Nama Karyawan"
        << setw(17) << left << "Usia (Tahun)"
        << setw(20) << left << "Jam Kerja (Jam)"
        << setw(20) << left << "Gaji (/Jam)"
        << setw(21) << left << "Total Gaji" << endl;
    cout << string(100, '-') << endl;
    daftarDataKry(0);
    cout << string(100, '-') << endl;
}

double sumGaji(int index){
    if(index >= totalKry){
        return 0;
    }
    double jumlahGaji = 0;
    int jamKerja = stoi(dataKry[index][2]);
    int gajiPerJam = stoi(dataKry[index][3]);
    double totalGajiKry = jamKerja * gajiPerJam;
    return totalGajiKry + sumGaji(index + 1); 
}
void rataanGaji(){
    double rataan = sumGaji(0) / totalKry;
    cout << "Rata-Rata Gaji Di Perusahaan Adalah Rp. " << fixed << setprecision(2) << rataan << endl;
}

void tambahData(){
    if(totalKry >= maxKry){
        cout << "Data Karyawan Sudah Penuh!" << endl;
        return;
    }
    cin.ignore();
    cout << "Masukkan Nama Anda : ";
    getline(cin, dataKry[totalKry][0]);
    cout << "Masukkan Usia Anda : ";
    cin >> dataKry[totalKry][1];
    if(0 <= stoi(dataKry[totalKry][1]) && stoi(dataKry[totalKry][1]) < 15){
        cout << "Tidak Ada Karyawan Di Bawah Umur 15 Tahun!" << endl;
        return;
    } else if(stoi(dataKry[totalKry][1]) < 0){
        cout << "Umur Tidak Bisa Negatif!" << endl;
        return;
    }
    cout << "Masukkan Total Jam Kerja Anda  : ";
    cin >> dataKry[totalKry][2];
    cout << "Masukkan Gaji Per Jam Anda : " ;
    cin >> dataKry[totalKry][3];

    totalKry++;
    cout << "DATA BERHASIL DITAMBAHKAN!" << endl;
}

void menu(){
    int pilihan;
    do{
        cout << "\n#MENU\n";
        cout << "1. Menampilkan Data Karyawan\n2. Rata-rata Gaji Perusahaan\n";
        cout << "3. Mengisi Data Karyawan\n4. Keluar\n";
        cout << "Pilihan (1 - 4) : ";
        cin >> pilihan;

        switch (pilihan){
            case 1: tampilanData(); break;
            case 2: rataanGaji(); break;
            case 3: tambahData(); break;
            case 4: cout << "PROGRAM TELAH SELESAI!" << endl; break;
            default: cout << "Pilihan Tidak Valid. Coba Lagi!" << endl; break;
        }
    } while (pilihan != 4);
}

int main(){
    menu();
    return 0;
}