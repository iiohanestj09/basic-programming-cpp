#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cari, temp, minValue, indexSwap, hasilCari = 0;
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

    for(int i = 0; i < 99; i++){
        minValue = angka[i];
        for(int j = i; j < 100; j++){
            if(angka[j] <= minValue){
                minValue = angka[j];
                indexSwap = j;
            }
        }
        temp = angka[i];
        angka[i] = minValue;
        angka[indexSwap] = temp;
    }

    cout << "Masukkan Data Yang Ingin Dicari: ";
    cin >> cari;
    
    int left = 0, right = 99, mid;
    while(left <= right){
        mid = left + (right - left) / 2;

        if(cari == angka[mid]){
            cout << "Data " << cari << " Ditemukan di Indeks Ke-" << mid << endl;
            hasilCari++;
            break;
        }

        if(angka[mid] <= cari){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    if(hasilCari == 0){
        cout << "Data " << cari << " Tidak Ditemukan!" << endl;
    }
    return 0;
}