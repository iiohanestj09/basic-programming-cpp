// 00. Menghitung Faktorial
//? 01 Oktober 2024

#include <iostream>
using namespace std;

int main(){
    int angka, positif;

    do{
        cout<<"Masukkan Angka Positif Untuk Menghitung Faktorial (Angka Negatif Untuk Berhenti) : ";
        cin>>angka;

        positif = angka;
        if(0 <= angka){

            cout<<"Faktorial Dari Angka "<<angka<<" : ";

            int sum_angka = 1;
            while(0 < angka){
                sum_angka *= angka;
                angka--;
            }
        
            cout<<sum_angka<<endl;
            sum_angka = 1;
        } 

    } while(0 <= positif);

    cout<<"PROGRAM TELAH SELESAI"<<endl;
}