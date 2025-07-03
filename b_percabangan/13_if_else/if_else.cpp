#include <iostream>
using namespace std;

int main(){
    int biaya, total;

    cout<<"Pengeluaran Anda : ";
    cin>>biaya;

    if(biaya > 80000){
        cout<<"Selamattt, Anda mendapatkan Potongan Harga 10%"<<endl;
        total = biaya * 90/100;
    } else{
        cout<<"Maaf, Anda tidak mendapatkan potongan Harga"<<endl;
        total = biaya;
    }
    cout<<"------------------------------------------"<<endl;
    cout<<"Total : "<<total<<endl;
}