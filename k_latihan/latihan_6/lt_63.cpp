//^ 03. KALKULATOR MATRIKS

#include <iostream>
#include <iomanip>
using namespace std;

const int maxEl = 10;

void barisNkolom(int &barisA, int &kolomA, int &barisB, int &kolomB){
    cout << "Masukkan Jumlah Baris Matriks A : ";  
    cin >> barisA;
    cout << "Masukkan Jumlah Kolom Matriks A : "; 
    cin >> kolomA;
    cout << "Masukkan Jumlah Baris Matriks B : "; 
    cin >> barisB;
    cout << "Masukkan Jumlah Kolom Matriks B : "; 
    cin >> kolomB;
}

void pengisian(int barisA, int kolomA, int matA[maxEl][maxEl], int matB[maxEl][maxEl]){
    cout << "Memasukkan Elemen-Elemen Di Matriks A" << endl;
    for(int i = 0; i < barisA; i++){
        for(int j = 0; j < kolomA; j++){
            cout << "matA[" << i << "]" << "[" << j << "] = ";
            cin >> matA[i][j];
        }
    }
    cout << endl << "Memasukkan Elemen-Elemen Di Matriks B" << endl;
    for(int a = 0; a < barisA; a++){
        for(int b = 0; b < kolomA; b++){
            cout << "matB[" << a << "]" << "[" << b << "] = ";
            cin >> matB[a][b];
        }
    }
    cout << endl;
}

void tampilProses(int barisA, int kolomA, int matA[maxEl][maxEl], int matB[maxEl][maxEl], int pil){
    char operatorMtk;
    if(pil == 1){
        operatorMtk = '+';
    } else if(pil == 2){
        operatorMtk = '-';
    } else if(pil == 3){
        operatorMtk = '*';
    }
    for(int i = 0; i < barisA; i++){
        cout << "| ";
        for(int j = 0; j < kolomA; j++){
            cout << setw(2) << left << matA[i][j] << " ";
        }
        cout << "|" << setw(4) << " ";
        if(i == barisA - (barisA/2) - (barisA/barisA)){
            cout << operatorMtk << setw(4) << " ";
        } else{
            cout << setw(5) << " ";
        }
        cout << "| ";
        for(int k = 0; k < kolomA; k++){
            cout << setw(2) << left << matB[i][k] << " ";
        }
        cout << "|" << endl;
    }
}

void hasil(int barisA, int kolomA, int matA[maxEl][maxEl], int matB[maxEl][maxEl], int pil){
    if(pil == 1){
        cout << endl << "HASIL :" << endl;
        for(int i = 0; i < barisA; i++){
            cout << "| ";
            for(int j = 0; j < kolomA; j++){
                cout << setw(2) << left << matA[i][j] + matB[i][j] << " ";
            }
            cout << "|" << endl;
        }
    } else if(pil == 2){
        cout << endl << "HASIL :" << endl;
        for(int i = 0; i < barisA; i++){
            cout << "| ";
            for(int j = 0; j < kolomA; j++){
                cout << setw(2) << left << matA[i][j] - matB[i][j] << " ";
            }
            cout << "|" << endl;
        }
    }
}

void hasil(int barisA, int kolomA, int barisB, int kolomB, int matA[maxEl][maxEl], int matB[maxEl][maxEl], int pil){
    if(pil == 3){
        if (kolomA != barisB) {
            cout << "Matriks tidak dapat dikalikan!" << endl;
            return;
        }
        int hasilKali[maxEl][maxEl] = {0};
        for (int i = 0; i < barisA; i++) {
            for (int j = 0; j < kolomB; j++) {
                for (int k = 0; k < kolomA; k++) {
                    hasilKali[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }
        tampilProses(barisA, kolomA, matA, matB, pil);
        cout << endl << "HASIL PERKALIAN:" << endl;
        for (int a = 0; a < barisA; a++) {
            cout << "| ";
            for (int b = 0; b < kolomB; b++) {
                cout << setw(2) << left << hasilKali[a][b] << " ";
            }
            cout << "|" << endl;
        }
    }
}

int main(){
    int barisA, kolomA, barisB, kolomB;
    int matA[maxEl][maxEl];
    int matB[maxEl][maxEl];
    int pil;
    do{
        cout << endl << "#Menu" << endl;
        cout << "1. Penjumlahan 2 Matriks\n2. Pengurangan 2 Matriks\n3. Perkalian 2 Matriks\n4.Keluar\n";
        cout << "Pilihan (1 - 4) : ";
        cin >> pil;
        switch(pil){
            case 1:
            case 2:
            case 3:
                barisNkolom(barisA, kolomA, barisB, kolomB);
                pengisian(barisA, kolomA, matA, matB);
                if (pil == 1 || pil == 2) {
                    tampilProses(barisA, kolomA, matA, matB, pil);
                    hasil(barisA, kolomA, matA, matB, pil);
                } else if (pil == 3) {
                    hasil(barisA, kolomA, barisB, kolomB, matA, matB, pil);
                }
                break;
            case 4:
                cout << "PROGRAM TELAH SELESAI!" << endl;
                break;
            default: cout << "Pilihan Tidak Valid. Coba Lagi!" << endl; break;
        }
    } while(pil != 4);
    
    return 0;
}