// 03. Menghitung Volume dan Luas Permukaan Balok

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int V, Lp, p, l, t;

    cout<<"Masukan Panjang : ";
    cin>>p;
    cout<<"Masukkan Lebar : ";
    cin>>l;
    cout<<"Masukkan Tinggi : ";
    cin>>t;

    V = p * l * t;
    Lp = 2 * ((p * l) + (p * t) + (l * t));

    cout<<endl;

    cout<<left<<setw(18)<<"| Panjang (cm)"<<setw(18)<<"| Lebar (cm)"<<setw(18)<<"| Tinggi (cm)"
        <<setw(25)<<"| Luas Permukaan (cm2)"<<setw(20)<<"| Volume (cm3)"<<"|"<<endl;
    cout<<"------------------------------------------------------------------------";
    cout<<"----------------------------"<<endl;

    cout<<left<<"| "<<setw(16)<<p
        <<"| "<<setw(16)<<l
        <<"| "<<setw(16)<<t
        <<"| "<<setw(23)<<Lp
        <<"| "<<setw(18)<<V<<"|"<<endl; 
}