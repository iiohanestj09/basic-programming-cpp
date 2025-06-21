#include <iostream>
using namespace std;

int fibonancci(int x);
void tampil(int y);

int main(){
    int input;

    cout<<"Masukkan Nilai Deret Ke- : ";
    cin>>input;

    tampil(input);
    
    return 0;
}

int fibonancci(int x){
    if(x <= 1) return x;
    return fibonancci(x - 1) + fibonancci(x - 2); 
}

void tampil(int y){
    cout<<"Maka, Deret Ke-"<<y<<" adalah "<<fibonancci(y)<<endl;
}
