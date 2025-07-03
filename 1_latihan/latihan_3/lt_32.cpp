// 02. Absensi Mahasiswa Dalam Kelas

#include <iostream>
using namespace std;

int main(){
    cout<<"========================ABSENSI MAHASISWA TI C========================"<<endl;
    cout<<"Ketik 1 Untuk Kehadiran Atau Tekan 0 Untuk Tidak hadir"<<endl;
    string loop_ulang;
    do{
        float presentasi_hadir, sum_kehadiran = 0;
        int kehadiran;
        string keterangan;
        for(int a = 1; a <= 5; a++){
            cout<<"Apakah Mahasiswa Hadir Pada Hari ke-"<<a<<" : ";
            cin>>kehadiran;

            sum_kehadiran += kehadiran;
        }

        presentasi_hadir = (sum_kehadiran / 5) * 100;        
        cout<<"Presentasi Kehadiran Anda : "<<presentasi_hadir<<"%"<<endl;

        if(presentasi_hadir < 50){
            keterangan = "Kurang";
        } else if(50 <= presentasi_hadir && presentasi_hadir <= 75){
            keterangan = "Cukup";
        } else if(presentasi_hadir > 75){
            keterangan = "Sangat Baik";
        }

        cout<<"Status Kehadiran Anda : "<<keterangan<<endl<<endl;
        cout<<"Ingin Menghitung Kehadiran Untuk Mahasiswa Lain (y untuk Iya, Selain Itu Tidak) : ";
        cin>>loop_ulang;

        cout<<"------------------------------------------------------------------"<<endl;
        
    } while(loop_ulang == "y" || loop_ulang == "Y");

    cout<<"PROGRAM ANDA TELAH SELESAI!"<<endl;
    cout<<"======================================================================"<<endl;

}