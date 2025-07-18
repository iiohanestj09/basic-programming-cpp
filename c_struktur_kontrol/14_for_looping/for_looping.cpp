#include <iostream>
using namespace std;

int main(){
    int awal, akhir;

    cout<<"Mulai Berapa Cetakannya : ";
    cin>>awal;
    cout<<"Sampai Kapan Cetakannya : ";
    cin>>akhir;

    for(int a = awal; a <= akhir; a++){
        cout<<a<<". Saya Senang Belajar Pemrograman"<<endl;
    }
}