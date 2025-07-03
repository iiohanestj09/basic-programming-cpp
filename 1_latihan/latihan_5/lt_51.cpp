// 01. Sistem Penggajian Karyawan
//! 24 September 2024

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nama, jabatan; 
    int pilih, jam_kerja, tarif_per_jam, gaji;

    cout<<"Surat Gaji Karyawan"<<endl;
    cout<<"PT SIGMA"<<endl;
    cout<<"==================="<<endl;
    cout<<"Pilihlah Salah Satu : "<<endl;
    cout<<"1. Peserta Magang\n2. Staf Junior\n3. Staf Senior\n4. Team Leader\n5. Kepala Departemen"
        <<endl;
    cout<<"Pilihan : ";
    cin>>pilih;

    if(0 < pilih && pilih < 6){
        switch(pilih){
            case 1 : jabatan = "Peserta Magang"; tarif_per_jam = 10000; break;
            case 2 : jabatan = "Staf Junior"; tarif_per_jam = 30000; break;
            case 3 : jabatan = "Staf Senior"; tarif_per_jam = 55000; break;
            case 4 : jabatan = "Team Leader"; tarif_per_jam = 100000; break;
            case 5 : jabatan = "Kepala Departemen"; tarif_per_jam = 600000; break;
        }
            cout<<"Anda Sekarang Masuk Sebagai "<<jabatan<<endl;
            cout<<"Masukkan Nama Anda : ";
            cin.ignore();           //! Karakter Newline Yang Tersisa Di Buffer akan Diabaikan
            getline(cin, nama);
            cout<<"Jam Kerja : ";
            cin>>jam_kerja;

            gaji = jam_kerja * tarif_per_jam;

            cout<<left<<setw(25)<<"| Nama Karyawan"<<setw(18)<<"| Jam Kerja"
                <<setw(19)<<"| Tarif Per Jam"
                <<setw(20)<<"| Gaji Total       |"<<endl;
            cout<<"--------------------------------------------";
            cout<<"--------------------------------------"<<endl;

            cout<<left<<"| "<<setw(23)<<nama<<"| "<<setw(16)<<jam_kerja
                <<"| "<<setw(17)<<tarif_per_jam
                <<"| "<<setw(17)<<gaji<<"|"<<endl;
    } else
    cout<<"Maaf Anda Bukan Karyawan Dari PT SIGMA"<<endl;
}