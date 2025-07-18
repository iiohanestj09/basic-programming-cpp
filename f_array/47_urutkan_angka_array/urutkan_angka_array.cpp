//* Sorting Array = Mengurutkan Data-data Di Array Dari Yang Terbesar Ke Terkecil Ataupun Sebaliknya.

#include <iostream>
using namespace std;

int main(){
    int nilai[] = {7, 2, 3, 10, 1, 5, 9, 4, 8, 6};
    int n = sizeof(nilai)/sizeof(*nilai);
    int temp;

    for (int a = 1; a < n; a++){               //! a menunjukan berapa kali akan menyortir sebaris kurang 1
        for(int b = 0; b < n - a; b++){         //! b menunjukan sortir pembandingan 
            if(nilai[b] > nilai [b + 1]){       //! angka sekarang dan angka didepannya
                temp = nilai[b];
                nilai[b] = nilai[b + 1];
                nilai [b + 1] = temp;
            }
        }
        
        for(int c = 0; c < n; c++){             //! Menampilkan Proses Menyortir sebanyak a Baris
            cout<<nilai[c]<<" | ";
        }

        cout<<endl;
    }

    cout<<endl<<"Hasil Sorting "<<endl;

    for(int i = 0; i < n; i++){
        cout<<nilai[i]<<"   ";
    }
}