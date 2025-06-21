// 05. Pengelolaan Pengeluaran Harian

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string loop_ulang;
    cout<<"==========================Pengeluaran Anda Dalam Seminggu=========================="<<endl;

    do{ 
        int pilihan, pengeluaran;
        float total_pengeluaran = 0, max_pengeluaran = 0;
        float sum_makanan = 0, sum_transportasi = 0, sum_kebutuhan = 0, sum_hiburan = 0, sum_lain = 0;
        string kategori_max;

        cout<<"KETERANGAN : Ketik Salah Satu Dari Kategori Di Bawah : "<<endl;
        cout<<"1. Makan || 2. Transportasi || 3. Kebutuhan || 4. Hiburan || 5. Lain-lain"<<endl<<endl;

        for(int a = 1; a <= 7; a++){
            cout<<"Masukkan Kategori Pengeluaran Hari Ke-"<<a<<" : ";
            cin>>pilihan;
            cout<<"Masukkan Jumlah Pengeluaran Hari Ke-"<<a<<"   : Rp "; 
            cin>>pengeluaran;

            switch(pilihan){
                case 1 :
                    sum_makanan += pengeluaran;
                    if (pengeluaran > max_pengeluaran) {
                        max_pengeluaran = pengeluaran;
                        kategori_max = "Makanan";
                    }
                    break;
                case 2 :
                    sum_transportasi += pengeluaran;
                    if (pengeluaran > max_pengeluaran) {
                        max_pengeluaran = pengeluaran;
                        kategori_max = "Transportasi";
                    }
                    break;
                case 3 :
                    sum_kebutuhan += pengeluaran;
                    if (pengeluaran > max_pengeluaran) {
                        max_pengeluaran = pengeluaran;
                        kategori_max = "Kebutuhan";
                    }
                    break;
                case 4 :
                    sum_hiburan += pengeluaran;
                    if (pengeluaran > max_pengeluaran) {
                        max_pengeluaran = pengeluaran;
                        kategori_max = "Hiburan";
                    }
                    break;
                case 5 :
                    sum_lain += pengeluaran;
                    if (pengeluaran > max_pengeluaran) {
                        max_pengeluaran = pengeluaran;
                        kategori_max = "Lain-lain";
                    }
                    break;            
                }
            }

    cout<<endl;
    total_pengeluaran = sum_makanan + sum_transportasi + sum_kebutuhan + sum_hiburan + sum_lain;
    cout<<"Total Pengeluaran Anda Dalam Seminggu  : Rp "<<fixed<<setprecision(2)<<total_pengeluaran<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Total Pengeluaran Untuk Makanan        : Rp "<<fixed<<setprecision(2)<<sum_makanan<<endl;
    cout<<"Total Pengeluaran Untuk Transportasi   : Rp "<<fixed<<setprecision(2)<<sum_transportasi<<endl;
    cout<<"Total Pengeluaran Untuk Kebutuhan      : Rp "<<fixed<<setprecision(2)<<sum_kebutuhan<<endl;
    cout<<"Total Pengeluaran Untuk Hiburan        : Rp "<<fixed<<setprecision(2)<<sum_hiburan<<endl;
    cout<<"Total Pengeluaran Untuk Lainnya        : Rp "<<fixed<<setprecision(2)<<sum_lain<<endl<<endl;
    cout<<"Pengeluaran Terbesar Dalam Sehari      : Rp "<<fixed<<setprecision(2)<<max_pengeluaran
        <<" (Kategori: "<<kategori_max<<")"<<endl<<endl;

    cout<<"Ingin Menghitung Pengeluaran Di Minggu Lain? (y untuk Iya, Selain itu Tidak) : ";
    cin>>loop_ulang;
    cout<<"-----------------------------------------------------------------------------------"<<endl;

    } while(loop_ulang == "y" || loop_ulang == "Y");

    cout<<endl;
    cout<<"PROGRAM TELAH SELESAI"<<endl;
    cout<<"==================================================================================="<<endl;
}