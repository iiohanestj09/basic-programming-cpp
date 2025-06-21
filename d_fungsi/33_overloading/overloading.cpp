//* Overloading = Menimpa 
//* Biasanya Digunakkan Untuk Suatu Fungsi Yang General 
// Seperti Menghitung Kotak (Persegi dan Persegi Panjang)

#include <iostream>
using namespace std;

int luas_kotak(int sisi);
int luas_kotak(int p, int l);
double luas_kotak(double p, double l);

int main(){
    cout<<"1. "<<luas_kotak(4)<<endl;
    cout<<"2. "<<luas_kotak(2, 3)<<endl;
    cout<<"3. "<<luas_kotak(5.5, 2.2)<<endl;
    cout<<"4. "<<luas_kotak(5.5, 6.0)<<endl;
}

int luas_kotak(int sisi){
    return sisi * sisi;
}

int luas_kotak(int p, int l){
    return p * l;
}

double luas_kotak(double p, double l){
    return p * l;
}