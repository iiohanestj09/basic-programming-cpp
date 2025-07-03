#include <iostream>
using namespace std;

int main(){
    const int baris = 2;                                //! Harus Pakai "const" saat di array Multidimensi
    const int kolom = 3;
    int nilai[baris][kolom] = {1, 4, 6, 3, 9, 7};        //! index[a] dan index[b] => n = a * b
    
    /*
        [0][0] = 1
        [0][1] = 4
        [0][2] = 6

        [1][0] = 3
        [1][1] = 9
        [1][2] = 7
    */
    
    for(int a = 0; a < 2; a++){             //? Menampilkan Banyak Baris
        for(int b = 0; b < 3; b++){         //? Menampilkan Banyak Kolom
            cout<<nilai[a][b]<<" ";
        }
        cout<<endl;
    }

    /*
        1 4 6
        3 9 7
    */
    
}