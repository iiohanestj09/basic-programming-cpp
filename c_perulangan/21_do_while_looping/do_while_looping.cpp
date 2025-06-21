// Menghitung Luas Persegi Panjang Dengan Looping

#include <iostream>
using namespace std;

int main(){
    int L, p, l;
    string ulang;

    cout<<right<<"Menghitung Luas Persegi Panjang Dengan Looping"<<endl;
    cout<<right<<"=============================================="<<endl;

    do{
        cout<<"Masukan Panjang \t: ";
        cin>>p;
        cout<<"Masukan Lebar \t\t: ";
        cin>>l;

        L = p * l;

        cout<<"Maka Luas Persegi Panjang Tersebut adalah "<<L<<" cm2."<<endl;
        cout<<"-------------------------------------------------"<<endl;

        cout<<"Ulangi Proses (y / n) \t: ";
        cin>>ulang;
    } while(ulang == "y");

    cout<<"PROGRAM TELAH SELESAI"<<endl;
    cout<<"====================================================="<<endl;
} 