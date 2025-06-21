//^ 02. SISTEM KLASIFIKASI HASIL UJIAN

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int maxJumlahSiswa = 30;
string dataSiswa[maxJumlahSiswa][2];
/*
    [][0] = Nama Siswa
    [][1] = Nilai Siswa
*/
int siswa = 0;
int maxNilai = 0;
int minNilai = 100;

int sumNilai(int index){
    if(index < 0){
        return 0;
    }
    return stoi(dataSiswa[index][1]) + sumNilai(index - 1);
}
double rataanNilai(){
    if (siswa == 0) return 0; // Cegah pembagian dengan nol
    int total = sumNilai(siswa - 1);
    return (double) total / siswa;
}

void daftarNilai(int index, int &maxNilai, int &minNilai){
    if(index >= siswa){
        return;
    }

    int nilaiSiswa = stoi(dataSiswa[index][1]);
    char kategori;
    
    if(nilaiSiswa >= 90){
        kategori = 'A';
    } else if(80 <= nilaiSiswa && nilaiSiswa < 90){
        kategori = 'B';
    } else if(70 <= nilaiSiswa && nilaiSiswa < 80){
        kategori = 'C';
    } else if(60 <= nilaiSiswa && nilaiSiswa < 70){
        kategori = 'D';
    } else{
        kategori = 'E';
    }
    cout << setw(24) << left << dataSiswa[index][0]
        << setw(10) << left << nilaiSiswa
        << setw(10) << left << kategori << endl;

    if(nilaiSiswa >= maxNilai){
        maxNilai = nilaiSiswa;
    }
    if(nilaiSiswa <= minNilai){
        minNilai = nilaiSiswa;
    }
    daftarNilai(index + 1, maxNilai, minNilai);
}
void tampilanNilai(){
    if(siswa == 0){
        cout << "TIDAK ADA DATA NILAI SISWA!." << endl;
        return;
    }

    maxNilai = 0;
    minNilai = 100;
    cout << setw(24) << left << "Nama Siswa"
        << setw(10) << left << "Nilai"
        << setw(10) << left << "Klasifikasi" << endl;
    cout << string(50, '-') << endl;
    daftarNilai(0, maxNilai, minNilai);

    cout << endl << "NILAI RATA-RATA : " << fixed << setprecision(2) << rataanNilai() << endl;
    cout <<"NILAI TERTINGGI : " << maxNilai << " & NILAI TERENDAH : " <<  minNilai << endl;

    cout << string(50, '-') << endl;
}

void tambahDataSiswa(){
    if(siswa >= maxJumlahSiswa){
        cout << "Data Siswa Sudah Terpenuhi" << endl;
        return;
    }
    cin.ignore();
    cout << "Masukkan Nama Siswa : ";
    getline(cin, dataSiswa[siswa][0]);
    cout << "Masukkan Nilai : ";
    cin >> dataSiswa[siswa][1];

    if(stoi(dataSiswa[siswa][1]) < 0){
        cout << "Nilai Siswa Tidak Boleh Negatif" << endl;
        return;
    }
    siswa++;
    cout << "Data Siswa Ke-"<<siswa<<" Sudah Ditambahkan" << endl;
}

void menu(){
    int pilihan;
    do {
        cout << "\n#MENU\n";
        cout << "1. Daftar Nilai Siswa\n2. Memasukkan Nilai Siswa\n3. Keluar\n";
        cout << "Pilih Opsi (1 - 3) : ";
        cin >> pilihan;
        switch(pilihan){
            case 1: tampilanNilai(); break;
            case 2: tambahDataSiswa(); break;
            case 3: cout << "PROGRAM TELAH SELESAI"; break;
            default: cout << "Pilihan Tidak Valid. Coba Lagi!"; break;
        }
    } while(pilihan != 3);  
}

int main(){
    menu();
    return 0;
}