#include <iostream>
using namespace std;

int main(){
    int a = 50;
    int *b = &a;
    
    cout<<"Nilai Yang Disimpan Di a : "<<a<<endl;
    cout<<"Alamat A : "<<&a<<endl<<endl;

    cout<<"Nilai Yang Disimpan Di b : "<<b<<endl;
    cout<<"Alamat b itu sendiri : "<<&b<<endl;
    cout<<"Nilai yang ditunjuk oleh Pointer b : "<<*b<<endl;
    return 0;
}