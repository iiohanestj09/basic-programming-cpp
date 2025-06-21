// 04. Mengonversi Mata Uang
//! DISCLAIMER : KURS MATA UANG ASING TERHADAP RUPIAH DAPAT BERUBAH TIAP DETIK

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int pilihan;
    double rupiah, konversi, kurs;
    string uang_asing;

    cout<<"Mengkonversi Mata Uang Rupiah Menjadi Mata Uang Asing"<<endl;
    cout<<"====================================================="<<endl;
    cout<<"Pilihlah Salah Satu : "<<endl;
    cout<<"1. Mata Uang Amerika \t(Dollar)"<<endl;
    cout<<"2. Mata Uang Eropa \t(Euro)"<<endl;
    cout<<"3. Mata Uang Jepang \t(Yen)"<<endl;
    cout<<"4. Mata Uang India \t(Rupe)"<<endl;
    cout<<"5. Mata Uang Saudi \tArabia (Riyal)"<<endl;
    cout<<"6. Mata Uang Korea \t(Won)"<<endl;
    cout<<"7. Mata Uang Malaysia \t(Ringgit)"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Pilihan : ";
    cin>>pilihan;

    if(0 < pilihan && pilihan < 8){
        cout<<"Masukkan Jumlah Rupiah : ";
        cin>>rupiah;

        switch(pilihan){
            case 1:
                uang_asing = "Dollar";
                kurs = 15176.35;
                break;
            case 2:
                uang_asing = "Euro";
                kurs = 16854.70;
                break;
            case 3:
                uang_asing = "Yen";
                kurs = 105.70;
                break;
            case 4:
                uang_asing = "Rupe";
                kurs = 181.63;
                break;
            case 5:
                uang_asing = "Riyal";
                kurs = 4048.52;
                break;
            case 6:
                uang_asing = "Won";
                kurs = 11.38;
                break;
            case 7:
                uang_asing = "Ringgit";
                kurs = 3618.62;
                break;
        }

        konversi = rupiah / kurs;

        cout<<"Maka, Rp "<<rupiah<<" Dikonversi Menjadi Mata Uang "<<uang_asing
            <<" Adalah "<<fixed<<setprecision(2)<<konversi<<endl;
    } else{ 
        cout<<"Kode Yang Anda Masukkan Salah, Coba Lagi!!!"<<endl;
    }
}
