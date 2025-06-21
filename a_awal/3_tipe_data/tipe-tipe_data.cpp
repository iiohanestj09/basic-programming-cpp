// Tipe - tipe Data

/*
    1. String : Kalimat
    2. Integer : Bilangan Bulat 
    3. Float : Bilangan Desimal (6 - 7 digit belakang Koma)
    4. Double : Bilangan Desimal (15 - 16 digit di belakang Koma)
    5. Char : 1 Karakter Tunggal
    6. Bool : Logika (True / False) (1 / 0)

    tipe_data nama_variabel = value_variabel
*/

#include <iostream>
using namespace std;

int main(){

    string nama_lengkap = "Yohanes Putra P. Muwa Dae";
    int umur = 19;
    float tinggi_badan = 165.29;
    double berat_badan = 50.21839;
    char golongan_darah = 'B';
    bool pria = true;

    cout<<"Nama Lengkap : "<<nama_lengkap<< endl;
    cout<<"Umur : "<<umur<< endl;
    cout<<"Tinggi Badan : "<<tinggi_badan<< endl;
    cout<<"Berat Badan: "<<berat_badan<< endl;
    cout<<"Golongan Darah : "<<golongan_darah<< endl;
    cout<<"Pria : "<<pria<< endl;
}