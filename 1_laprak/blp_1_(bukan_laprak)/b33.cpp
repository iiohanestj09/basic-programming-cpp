// 03. Menghitung Luas Permukaan dan Volume Bangun Ruang

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int pilih1, pilih2;
    float panjang, lebar, tinggi, jarijari, sisi, volume, luas_permukaan;
    string bangun_ruang;
    
    cout<<"Pilihlah Salah Satu "<<endl;
    cout<<"1. Balok\n2. Tabung\n3. Kubus\n4. Kerucut\n";
    cout<<"Pilihan : ";
    cin>>pilih1;
    cout<<endl;

    if(0 < pilih1 && pilih1 < 5){
        switch(pilih1){
            case 1 : 
            bangun_ruang = "Balok";
            cout<<"Anda Sekarang Memilih Bangun Ruang Balok"<<endl;
            cout<<"----------------------------------------"<<endl;
            cout<<"Masukkan Panjang (cm) : ";
            cin>>panjang;
            cout<<"Masukkan Lebar (cm) : ";
            cin>>lebar;
            cout<<"Masukkan Tinggi (cm) : ";
            cin>>tinggi;

            luas_permukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
            volume = panjang * lebar * tinggi;
            break;

            case 2 : 
            bangun_ruang = "Tabung";
            cout<<"Anda Sekarang Memilih Bangun Ruang Tabung"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Masukkan Jari-jari (cm) : ";
            cin>>jarijari;
            cout<<"Masukkan Tinggi (cm) : ";
            cin>>tinggi;

            luas_permukaan = 2 * 3.14 * jarijari * (jarijari + tinggi);
            volume = 3.14 * pow(jarijari, 2) * tinggi;
            break;

            case 3 : 
            bangun_ruang = "Kubus";
            cout<<"Anda Sekarang Memilih Bangun Ruang Kubus"<<endl; 
            cout<<"----------------------------------------"<<endl;
            cout<<"Masukkan Panjang Sisi (cm) : ";

            luas_permukaan = 6 * pow(sisi, 2);
            volume = pow(sisi, 3);
            break;

            case 4 : 
            bangun_ruang = "Kerucut";
            cout<<"Anda Sekarang Memilih Bangun Ruang Kerucut"<<endl; 
            cout<<"------------------------------------------"<<endl;
            cout<<"Masukkan Jari-jari (cm) : ";
            cin>>jarijari;
            cout<<"Masukkan Tinggi (cm) : ";
            cin>>tinggi;

            luas_permukaan = 3.14 * jarijari * (jarijari + sqrt(pow(jarijari, 2) + pow(tinggi, 2)));
                                                    // Garis Pelukis (s) = akar2( r^2 + tinggi^2 )
            volume = (3.14 * pow(jarijari, 2) * tinggi) / 3;
            break;
        }
        cout<<endl;

        cout<<left<<setw(25)<<"| Bangun Ruang"<<setw(30)<<"| Luas Permukaan (cm^2)"
            <<setw(25)<<"| Volume (cm^3)"<<"|"<<endl;
        cout<<"------------------------------------------------------------------------------------"<<endl;
        cout<<left<<setw(27)<<fixed<<setprecision(2)<<bangun_ruang
            <<setw(30)<<fixed<<setprecision(2)<<luas_permukaan
            <<setw(25)<<fixed<<setprecision(2)<<volume<<endl;
    } else {
        cout<<"Maaf, Kode Yang Anda Masukkan Salah"<<endl;
    }
}