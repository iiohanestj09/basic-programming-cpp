// 06. Menghitung Rata-rata Suhu Harian

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float suhu1, suhu2, suhu3, suhu4, suhu5, rata2suhu;

    cout<<"Masukkan Suhu Hari 1 : ";
    cin>>suhu1;
    cout<<"Masukkan Suhu Hari 2 : ";
    cin>>suhu2;
    cout<<"Masukkan Suhu Hari 3 : ";
    cin>>suhu3;
    cout<<"Masukkan Suhu Hari 4 : ";
    cin>>suhu4;
    cout<<"Masukkan Suhu Hari 5 : ";
    cin>>suhu5;

    rata2suhu = (suhu1 + suhu2 + suhu3 + suhu4 + suhu5) / 5;

    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Maka, Rata-rata suhu dari 5 hari tersebut adalah = "
        <<fixed<<setprecision(1)<<rata2suhu<<endl;
}