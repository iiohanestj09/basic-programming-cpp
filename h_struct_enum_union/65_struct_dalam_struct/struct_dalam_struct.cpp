#include <iostream>
using namespace std;

struct dosen{
    string nama;
    string jenis_kelamin;
    int umur;
};

struct matkul{
    string nama_matkul;
    string status;
    int sks;

    dosen dosen1, dosen2; //! Memanggil Struct Dosen
};

int main(){
    dosen dosen1, dosen2;
    matkul matkulA, matkulB;

    dosen1.nama = "Ibu Nana";
    dosen1.jenis_kelamin = "Wanita";
    dosen1.umur = 40;

    dosen2.nama = "Pak Faiz";
    dosen2.jenis_kelamin = "Pria";
    dosen2.umur = 24;

    matkulA.dosen1 = dosen1;
    matkulA.dosen2 = dosen2;
    matkulA.nama_matkul = "ALgoritma dan Pemrograman";
    matkulA.sks = 4;
    matkulA.status = "Wajib";
    
    matkulB.dosen1 = dosen1;                                    //! Kita memanggil dosen1 hanya untuk matkulB
    matkulB.nama_matkul = "Pengantar Teknologi Informasi";
    matkulB.sks = 3;
    matkulB.status = "Wajib";

    cout<<"Matkul A "<<endl;
    cout<<"Nama Matkul : "<<matkulA.nama_matkul<<endl;
    cout<<"SKS         : "<<matkulA.sks<<endl;
    cout<<"Status      : "<<matkulA.status<<endl;
    cout<<"Dosen 1     : "<<matkulA.dosen1.nama<<endl;
    cout<<"Dosen 2     : "<<matkulA.dosen2.nama<<endl;

    cout<<"========================================================="<<endl;

    cout<<"Matkul B"<<endl;
    cout<<"Nama Matkul : "<<matkulB.nama_matkul<<endl;
    cout<<"SKS         : "<<matkulB.sks<<endl;
    cout<<"Status      : "<<matkulB.status<<endl;
    cout<<"Dosen 1     : "<<matkulB.dosen1.nama<<endl;
    cout<<"Dosen 2     : "<<matkulB.dosen2.nama<<endl;              //! Sehingga ini Otomatis Kosong.

    return 0;
}