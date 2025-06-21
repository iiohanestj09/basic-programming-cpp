#include <iostream>
using namespace std;

int main(){
    const float phi = 3.14;
    float L, r;

    cout<<"Menghitung Luas Lingkaran\n========================="<<endl;
    cout<<"Jari-jari Lingkaran \t: ";
    cin>>r;
    cout<<"-------------------------"<<endl;

    L = phi * r * r;

    cout<<"Diketahui :"<<endl;
    cout<<"phi \t\t\t= "<<phi<<endl;
    cout<<"Jari-jari lingkaran \t= "<<r<<" cm"<<endl;
    
    cout<<"Maka, Luas Lingkaran :\n";
    cout<<"L = phi * r^2"<<endl;
    cout<<"L = "<<phi<<" * "<<r<<"^2"<<endl;
    cout<<"L = "<<phi<<" * "<<r * r<<endl;
    cout<<"L = "<<L<<endl;
    cout<<"========================="<<endl;
    cout<<"Jadi, Luas Lingkaran dengan jari-jari "<<r<<" cm "<<"adalah "<<L<<" cm2"<<endl;
}