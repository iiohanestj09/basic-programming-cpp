#include <iostream>
using namespace std;

int main(){
    int pil;
    string jkel;

    cout<<"Pilih Salah Satu : "<<endl;
    cout<<"1. Laki-laki\n2. Perempuan"<<endl;
    cout<<"Pilihan : ";
    cin>>pil;

    switch(pil){
        case 1 :
            jkel = "Laki-laki";
            break; // Agar Berhenti untuk setiap case
        case 2 :
            jkel = "Perempuan";
            break;
        default : // Jawaban selain pil 1 dan 2, pakai default
            jkel = "Alomani";
            break;
    }
    cout<<"Jenis Kelamin Saya Adalah "<<jkel<<endl;
}