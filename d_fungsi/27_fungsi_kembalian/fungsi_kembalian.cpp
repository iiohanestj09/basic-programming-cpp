#include <iostream>
using namespace std;

int f(int x){      
    int y = x * x;
    return y;
}
                                    //! Fungsi Kembali
int penjumlahan(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int input_kuadrat, hasil, hasil2, a, b;
    cout<<"Masukkan Angka Untuk Dikuadratkan : ";
    cin>>input_kuadrat;

    hasil = f(input_kuadrat);

    cout<<hasil<<endl<<endl;

    cout<<"Penjumlahan a + b"<<endl;
    cout<<"Masukkan Nilai a : ";
    cin>>a;
    cout<<"Masukkan Nilai b : ";
    cin>>b;

    hasil2 = penjumlahan(a, b);

    cout<<"Hasil Dari Penjumlahan "<<a<<" dan "<<b<<" Adalah : "<<hasil2;

}