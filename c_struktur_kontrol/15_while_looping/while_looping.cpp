#include <iostream>
using namespace std;

int main(){
    int awal, akhir;

    cout<<"Mulai Berapa Cetaknnya : ";
    cin>>awal;
    cout<<"Sampai Berapa Cetakannya : ";
    cin>>akhir;

    int a = awal;
    while(a >= akhir){       //Karena Kita Pakai a--, maka nilai awal > akhir
        cout<<a<<". Hello, World!"<<endl;
        a--;                 //Kita Coba Pakai Postdecrement
    }
}