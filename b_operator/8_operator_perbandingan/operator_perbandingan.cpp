#include <iostream>
using namespace std;

int main(){
    int a, b;
    bool kondisi;
    string hasil;

    cout<<"Masukkan Variabel a : ";
    cin>>a;
    cout<<"Masukkan Variabel b : ";
    cin>>b;
    cout<<"---------------------------------------------------"<<endl;

    // Sama Dengan (==)
    kondisi = a == b;
    hasil = kondisi == 1?"Sama Dengan" : "Tidak Sama Dengan";
    cout<<"Variabel a "<<hasil<<" Variabel b"<<endl;
    cout<<endl;

    // Tidak Sama Dengan (!=)
    kondisi = a != b;
    hasil = kondisi == 1?"Tidak Sama Dengan" : "Sama Dengan";
    cout<<"Variabel a "<<hasil<<" Variabel b"<<endl;
    cout<<endl;

    // Kurang Dari dan Lebih Dari (< >)
    kondisi = a < b;
    hasil = kondisi == 1?"Lebih Kecil Dari" : "Tidak Lebih Kecil Dari";
    cout<<"Variabel a "<<hasil<<" Variabel b"<<endl;
    cout<<endl;

    // Kurang Dari atau Sama Dengan dan Lebih Dari atau Sama Dengan
    kondisi = a >= b;
    hasil = kondisi == 1?"Lebih Dari atau Sama Dengan" : 
        "Tidak Lebih Dari atau Sama Dengan";
    cout<<"Variabel a "<<hasil<<" Variabel b"<<endl;
    cout<<endl;
}