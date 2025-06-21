#include <iostream>
using namespace std;

int main (){
    int a, hasil;

    cout<<"Masukan Bilangan Bulat : ";
    cin>>a;

    hasil = a % 2;

    string kondisi = hasil == 1?"Ganjil" : "Genap";

    cout<<"Maka, Bilangan "<<a<<" Merupakan Bilangan "<<kondisi<<endl;
}