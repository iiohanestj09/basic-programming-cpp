#include <iostream>
using namespace std;

int main(){
    int var = 100;
    int *ptr = &var;            //? * sebagai Pointer
    int &ref = var;             //? & sebagai Reference

    //* var, *ptr, dan ref akan saling terikat, jika salah satu nilai diganti, maka semua ikut terganti
    //* Sedangkan ptr menyimpan alamat 'var'

    cout<<"AWALAN : "<<endl;
    cout<<"Nilai Dari var : "<<var<<". Alamat var : "<<&var<<endl;      //* alamat dari var, ptr, dan ptr sama
    cout<<"ATAU,                 Alamat var : "<<ptr<<endl;
    cout<<"Nilai Dari ref : "<<ref<<". Alamat ref : "<<&ref<<endl;
    cout<<"Nilai Dari *ptr : "<<*ptr<<". Alamat ptr : "<<&ptr<<endl;

    cout<<endl<<"MODIFIKASI : "<<endl;
    var = 200;
    cout<<"UBAH var = 200"<<endl;
    cout<<"var : "<<var<<endl<<"ref : "<<ref<<endl<<"*ptr : "<<*ptr<<endl<<endl;

    ref = 300;
    cout<<"UBAH ref = 300"<<endl;
    cout<<"var : "<<var<<endl<<"ref : "<<ref<<endl<<"*ptr : "<<*ptr<<endl<<endl;   
    
    *ptr = 400;
    cout<<"*UBAH ptr = 400"<<endl;
    cout<<"var : "<<var<<endl<<"ref : "<<ref<<endl<<"*ptr : "<<*ptr<<endl;    

    return 0;
}