// 01. Sistem Penggajian Karyawan

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
        string nama;        
        int jam_kerja, tarif, gaji;

        cout<<"Masukkan Nama Karyawan : ";
        getline(cin, nama);
        cout<<"Jam Kerja : ";
        cin>>jam_kerja;
        cout<<"Tarif per jam : ";
        cin>>tarif;
        
        gaji = jam_kerja * tarif;

        cout<<left<<setw(25)<<"| Nama Karyawan"<<setw(18)<<"| Jam Kerja"
        <<setw(19)<<"| Tarif Per Jam"
        <<setw(20)<<"| Gaji Total       |"<<endl;
        cout<<"--------------------------------------------";
        cout<<"--------------------------------------"<<endl;

        cout<<left<<"| "<<setw(23)<<nama<<"| "<<setw(16)<<jam_kerja
        <<"| "<<setw(17)<<tarif
        <<"| "<<setw(17)<<gaji<<"|"<<endl;
}