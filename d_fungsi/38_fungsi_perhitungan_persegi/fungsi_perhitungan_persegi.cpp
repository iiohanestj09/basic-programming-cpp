#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void header();
void body(double s);
void loop_ulang(char &ulang);
void footer();

int main(){
    char ulang;
    header();
    do{
        int s;
        cout<<"Masukkan Panjang Sisi : ";
        cin>>s;
        body(s);

        loop_ulang(ulang);
        system("cls");
    } while (ulang == 'y' || ulang == 'Y');

    footer();
    return 0;
}

void header(){
    cout<<"MENGHITUNG LUAS DAN KELILING SEBUAH PERSEGI"<<endl;
    cout<<setw(42)<<setfill('=')<<"="<<endl;
}

void body(double s){
    double l = s * s;
    double k = 4 * s;

    cout<<"L = sisi * sisi"<<endl<<"L = "<<s<<" * "<<s<<endl<<"L = "<<fixed<<setprecision(2)<<l<<endl;
    cout<<setw(42)<<setfill('=')<<"="<<endl;
    cout<<"K = 4 * sisi"<<endl<<"K = 4 * "<<s<<endl<<"K = "<<fixed<<setprecision(2)<<k<<endl;
}

void loop_ulang(char &ulang){
    cout<<"Ingin Menghitung Persegi Lain? (y untuk Iya, Selain itu Tidak) : ";
    cin>>ulang;
    cout<<setw(42)<<setfill('-')<<"-"<<endl;
}

void footer(){
    cout<<"PROGRAM TELAH SELESAI!"<<endl;
}