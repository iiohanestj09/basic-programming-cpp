#include <iostream>
using namespace std;

struct aktor{
    string nama;
    int tahunLahir;
};

struct film{
    string judul;
    string genre;
    int tahunRilis;

    //struct actor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){
    aktor aktor1, aktor2;
    film film1, film2;

    //^ Buat Aktor 1
    aktor1.nama = "Maman Dodol";
    aktor1.tahunLahir = 1990;

    //^ Buat Aktor 2
    aktor2.nama = "Putra Dae";
    aktor2.tahunLahir = 2005;

    //^ Buat Film 1
    film1.judul = "Maling Kandang";
    film1.genre = "Dongeng";
    film1.tahunRilis = 2020;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    //^ Buat Film 2
    film2.judul = "dilan 2000";
    film2.genre = "Documenter";
    film2.tahunRilis = 2040;
    film2.pemeran_1 = aktor1;

    cout << film1.judul << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl << endl;

    cout << film2.judul << endl;
    cout << film2.pemeran_1.nama << endl;
    cout << film2.pemeran_2.nama << endl;    //! KOSONG

    return 0;
}