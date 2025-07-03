//^ 07. MENCETAK SEGITIGA PASCAL MENGGUNAKAN FUNGSI REKURSIF

#include <iostream>
#include <iomanip>

using namespace std;

int nilaiPascal(int a, int b){
    if(b == 0 || b == a){
        return 1;
    }
    return nilaiPascal(a - 1, b - 1) + nilaiPascal(a - 1, b);   
}

void segitigaPascal(int N){
    for(int a = 0; a < N; a++){
        cout << setw((N - a) * 3);

        for(int b = 0; b <= a; b++){
            cout << nilaiPascal(a, b) << setw(6);
        }
        cout << endl;
    }
}

int main(){
    char loop_ulang;
    do{
        int N;
        cout << "Masukkan Jumlah Baris Segitiga Pascal : ";
        cin >> N;

        //! Validasi Input
        if(N <= 0){         
            cout << "Masukkan Jumlah Baris Yang Lebih Besar Dari 0." << endl;
            continue;
        }
        segitigaPascal(N);
        cout << "Apakah Anda Ingin Mengulang Program (y Untuk Iya, Selain Itu Tidak) : ";
        cin >> loop_ulang;

        cout << setw(72) << setfill('=') << "=" << endl;
        cout << setfill(' ');   //! Mereset kembali Setfillnya
    } while(loop_ulang == 'y' || loop_ulang == 'Y');

    return 0;
}