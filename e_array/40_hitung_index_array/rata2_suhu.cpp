//* Menghitung rata-rata Suhu Seminggu menggunakan Array

#include <iostream>
using namespace std;

int main(){
    int suhu[7] = {57, 45, 19, 20, 7, 9, -3};
    int sum_suhu = 0;
    int n_suhu = sizeof(suhu)/sizeof(*suhu);
    float rata2_suhu;

    for(int i = 0; i < 7; i++){
        cout<<"Suhu Pada Hari Ke-"<<i + 1<<" : "<<suhu[i]<<endl;
        sum_suhu += suhu[i];
    }

    rata2_suhu = sum_suhu / n_suhu;

    cout<<"Maka, Rata-rata suhu dalam seminggu ini adalah = "<<rata2_suhu<<"C";

    //! Jumlah Index Array (n) = sizeof(nama_array)/sizeof(*nama_array)
}