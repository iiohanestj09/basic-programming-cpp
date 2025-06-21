#include <iostream>
using namespace std;

enum warna{merah, putih, hitam, coklat = 5, kuning, biru};

int main(){
    warna kain;
    kain = kuning;

    if(kain == putih){
        cout << "Warna Kain Putih" << endl;
    }

    cout << kain << endl;  //? akan menunjukan indeks ke berapa "kuning" dari 'coklat' = 5
    return 0;
}