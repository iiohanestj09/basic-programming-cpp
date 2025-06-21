// Menghitung luas segitiga dengan menggunakan pemrograman

#include <iostream>
using namespace std;

int main(){
    float L, a, t;

    cout<<" Menghitung Luas Segitiga\n========================="<<endl;

    cout<<"Panjang Alas \t: ";
    cin>>a;
    cout<<"Tinggi \t\t: ";
    cin>>t;
    cout<<"-------------------------"<<endl;
    
    L = (a * t)/2;

    cout<<"Diketahui : "<<endl;
    cout<<"Panjang Alas Segitiga \t= "<<a<<" cm"<<endl;
    cout<<"Tinggi Segitiga \t= "<<t<<" cm"<<endl;
    cout<<"Maka, Luas Segitiga :\n";
    cout<<"L = (a * t)/2"<<endl;
    cout<<"L = "<<"("<<a<<" * "<<t<<")"<<"/2 "<<endl;
    cout<<"L = "<<(a * t)<<"/2 "<<endl;
    cout<<"L = "<<L<<endl;
    cout<<"========================="<<endl;
    cout<<"Maka, Luas Segitiga Tersebut adalah "<<L<<" cm2"<<endl;
}