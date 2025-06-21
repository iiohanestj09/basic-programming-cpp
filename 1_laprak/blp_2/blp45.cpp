//^ 05. MENAMPILKAN DERET KUADRAT DENGAN FUNGSI REKURSIF

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void tampilan(int basis, int N){
    if(basis > N){
        return;
    }
    cout << basis << "^2";
    if(basis >= N){
        cout << "." << endl;
    } else{
        cout << ", ";
    }

    tampilan(basis + 1, N);
}
void kuadrat(int basis, int N){
    if(basis > N){
        return;
    }
    if(basis == 0){
        cout << "==> ";
    }
    cout << pow(basis, 2);
    if(basis >= N){
        cout << ". " << endl;
    } else{
        cout << ", ";
    }
    kuadrat(basis + 1, N);
}

int main(){
    int N;
    char pilihan;
    do{
        cout << "Masukkan Batas Deret Kuadrat : ";
        cin >> N;
        tampilan(0, N);
        kuadrat(0, N);
        cout << "Ingin Menghitung Deret Kuadrat Lagi? (y untuk Iya, Selain itu Tidak) : ";
        cin >> pilihan;
        cout << string(75, '-') << endl;
    } while(pilihan == 'y' || pilihan == 'Y');

    return 0;
}