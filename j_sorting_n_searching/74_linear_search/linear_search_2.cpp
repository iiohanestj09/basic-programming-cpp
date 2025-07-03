#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cari, hasilCari = 0;
    int angka[100] = {
        1, 7, 12, 5, 3, 15, 22, 14, 17, 28, 
        6, 10, 26, 19, 8, 23, 4, 9, 27, 21, 
        18, 2, 24, 13, 25, 20, 16, 30, 11, 29, 
        5, 8, 17, 26, 1, 14, 3, 9, 28, 7, 
        21, 13, 30, 19, 2, 11, 6, 18, 25, 4, 
        12, 22, 10, 16, 27, 23, 15, 20, 29, 8, 
        5, 9, 17, 26, 3, 1, 7, 18, 14, 21, 
        2, 10, 13, 28, 22, 19, 30, 6, 4, 15, 
        23, 12, 11, 24, 27, 25, 16, 29, 20, 8, 
        3, 5, 18, 9, 7, 14, 1, 12, 22, 6
    };

    cout << "Data Yang Tersedia: " << endl;
    for(int a = 0; a < 100; a++){
        cout << left << setw(5) << angka[a];
        if((a + 1) % 10 == 0){
            cout << endl;
        }
    }

    cout << "\nMasukkan Data Yang Ingin Dicari: ";
    cin >> cari;    

    for(int i = 0; i < 100; i++){
        if(cari == angka[i]){
            hasilCari++;
        }
    }

    if(hasilCari == 0){
        cout << "Data " << cari << " Tidak Ditemukan!" << endl;
    } else{
        cout << "Data " << cari << " Ditemuka Di : ";
        for(int j = 0; j < 100; j++){
            if(cari == angka[j]){
                cout << "Indeks Ke-" << j << endl;
            }
        }
    }
    return 0;
}