// 10. Menghitung Rata-rata Dan Standar Deviasi

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int pilihan;
    double n1, n2, n3, n4, n5, rata2, varians, stand_devi;

    cout<<"Pilihlah Salah Satu"<<endl;
    cout<<"1. Standar Deviasi Populasi (Misal, 5 Nilai adalah SELURUH Data)"<<endl;
    cout<<"2. Standar Deviasi Sampel (Misal, 5 Nilai adalah SEBAGIAN Data)"<<endl;
    cout<<"Pilihan : ";
    cin>>pilihan;

    cout<<"Masukkan Nilai 1 : ";
    cin>>n1;
    cout<<"Masukkan Nilai 2 : ";
    cin>>n2;
    cout<<"Masukkan Nilai 3 : ";
    cin>>n3;
    cout<<"Masukkan Nilai 4 : ";
    cin>>n4;
    cout<<"Masukkan Nilai 5 : ";
    cin>>n5;

    rata2 = (n1 + n2 + n3 + n4 + n5) / 5; 

    if(pilihan == 1){
        varians = (pow((n1 - rata2), 2) + pow((n2 - rata2), 2) 
            + pow((n3 - rata2), 2) + pow((n4 - rata2), 2) 
            + pow((n5 - rata2), 2)) / 5;                        //! /5 Karena Seluruh Data (Populasi)
    }else if(pilihan == 2){
        varians = (pow((n1 - rata2), 2) + pow((n2 - rata2), 2) 
            + pow((n3 - rata2), 2) + pow((n4 - rata2), 2) 
            + pow((n5 - rata2), 2)) / (5-1);                    //! /(5-1) Karena sebagian Data (Sampel)
    } else{
        rata2 = 0;
        varians = 0;
    }

    stand_devi = sqrt(varians);

    cout<<"------------------------------------------------------"<<endl;
    cout<<"Maka, "<<endl;
    cout<<"Rata-rata = "<<fixed<<setprecision(2)<<rata2<<endl;
    cout<<"Standar Deviasi = "<<fixed<<setprecision(2)<<stand_devi<<endl;
}