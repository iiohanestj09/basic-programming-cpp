#include <iostream>
using namespace std;

float luas(float p, float l){
    float x = p * l;
    return x;
}

float keliling(float p, float l){
    float y = 2 * (p + l);
    return y;
}

void tampilkan_luas_n_keliling(float p, float l){
    cout<<"Maka, Luas Dari Persegi Panjang tersebut Adalah : "<<luas(p,l)<<" cm2"<<endl;
    cout<<"Dan, Keliling dari Persegi Panjang tersebut Adalah : "<<keliling(p,l)<<" cm"<<endl;
}

int main(){
    float p, l;
    cout<<"Menghitung Luas Dan Keliling Sebuah Persegi Panjang"<<endl;
    cout<<"Masukkan Panjang : ";
    cin>>p;
    cout<<"Masukkan Lebar : ";
    cin>>l;

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Diketahui : \nPanjang   : "<<p<<"\nLebar     : "<<l<<endl<<endl;

    tampilkan_luas_n_keliling(p, l);   
}