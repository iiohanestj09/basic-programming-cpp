#include <iostream>
using namespace std;

void fungsi_tanpa_pointer(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void fungsi_dengan_reference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void fungsi_dengan_pointer(int *c, int *d){
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
}

int main(){
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;

    fungsi_tanpa_pointer(a, b);                             //! Ini hanya mengubah value di FUNGSI-nya
    cout<<"Hasil 1 ==> FUNGSI TANPA POINTER"<<endl;         //! Tidak Merubah Nilai PARENT-nya
    cout<<"Nilai a : "<<a<<endl;                        
    cout<<"Nilai b : "<<b<<endl<<endl;                      //? a = 2, b = 3 Itu Nilai PARENT

    fungsi_dengan_reference(a, b);                          //* Disini, nilai PARENT a,b berubah 
    cout<<"Hasil 2 ==> FUNGSI DENGAN REFERENCE"<<endl;      //? Dari a = 2, b = 3 => Menjadi a = 3, b = 2
    cout<<"Nilai a : "<<a<<endl;                            //^ Fungsi ini menggunakan REFERENCE (&)
    cout<<"Nilai b : "<<b<<endl;

    fungsi_dengan_pointer(&c, &d);                          //* Disini juga nilai PARENT c,d berubah
    cout<<"Hasil 3 ==> FUNGSI DENGAN POINTER"<<endl;        //^ Fungsi ini Menggunakan POINTER (*)
    cout<<"Nilai c : "<<c<<endl;                            //^ dengan tambahan adanya Pengalamat (&)
    cout<<"Nilai d : "<<d<<endl;
    return 0;
}