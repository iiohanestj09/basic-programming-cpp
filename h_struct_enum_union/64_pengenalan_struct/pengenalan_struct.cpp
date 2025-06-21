#include <iostream>
using namespace std;
                                        //? "struct" = TIPE DATA
struct nilai{                           //? "nilai" = NAMA STRUKTUR                    
    double bingpprof;                   //? "bingprof","matkom",dll = ANGGOTA STRUKTUR   ==> Si "nilai"
    double matkom;
    double alpro;
    string ket;
};                                  //! tipe data STRUCT setelahnya harus ada titik koma

int main(){
    nilai putra;                        //? "putra","maman" = NAMA/IDENTITAS VARIABEL    ==> Si "nilai"
    nilai maman;                        

    putra.alpro = 85;                
    putra.bingpprof = 70;           
    putra.matkom = 60;
    putra.ket = "Tuntas";

    maman.alpro = 12;
    maman.bingpprof = 15;
    maman.matkom = 100;
    maman.ket = "Tuntas";

    cout<<"Nilai Putra :"<<endl;
    cout<<"Algoritma dan Pemrograman : "<<putra.alpro<<endl;
    cout<<"Bahasa Inggris Profesi    : "<<putra.bingpprof<<endl;
    cout<<"Matematika Komputer       : "<<putra.matkom<<endl;
    cout<<putra.ket<<endl;

    cout<<"Nilai Maman :"<<endl;
    cout<<"Algoritma dan Pemrograman : "<<maman.alpro<<endl;
    cout<<"Bahasa Inggris Profesi    : "<<maman.bingpprof<<endl;
    cout<<"Matematika Komputer       : "<<maman.matkom<<endl;
    cout<<maman.ket<<endl;

}