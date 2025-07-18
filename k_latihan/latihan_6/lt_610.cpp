//^ 10. PERMUTASI DAN KOMBINASI

#include <iostream>
using namespace std;

const int maxEl = 10;
char element[maxEl]; 

//! Fungsi untuk menghitung KOMBINASI
void kombinasi(char element[], int N, int K, char sekarang[], int index, int start) {
    static int hitungKomb = 0; 
    if (index == K) {
        for (int i = 0; i < K; ++i)
            cout << sekarang[i];
        cout << "    "; 
        hitungKomb++;
        if (hitungKomb % 10 == 0)        //* Biar outputnya 10 kolom, terus endl;
            cout << endl;
        return;
    }
    for (int i = start; i < N; ++i) {
        sekarang[index] = element[i];
        kombinasi(element, N, K, sekarang, index + 1, i + 1);
    }
}

//* Fungsi untuk menukar dua karakter
void tukar(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

//! Fungsi untuk menghitung permutasi dengan output menyamping 10 kali
void permutasi(char strng[], int l, int r) {
    static int hitungPerm = 0; 
    if (l == r) {
        for (int i = 0; i <= r; ++i)
            cout << strng[i];
        cout << "    "; 
        hitungPerm++;
        if (hitungPerm % 10 == 0)           //* Biar outputnya 10 kolom, terus endl;
            cout << endl;
    } else {
        for (int i = l; i <= r; i++) {
            tukar((strng + l), (strng + i));
            permutasi(strng, l + 1, r);
            tukar((strng + l), (strng + i));    //? mengembalikan posisi semula (backtrack)
        }
    }
}

//* Fungsi untuk memeriksa apakah ada karakter unik
bool cekUnik(string strng) {
    for (int i = 0; i < strng.size(); ++i) {
        for (int j = i + 1; j < strng.size(); ++j) {
            if (strng[i] == strng[j])
                return true;
        }
    }
    return false;
}

int main() {
    char loopUlang;
    do {
        string strngMasuk;
        int N, K;
        cout << "Masukkan N karakter : ";
        cin >> strngMasuk;
        if (cekUnik(strngMasuk)) {
            cout << "KARAKTER HARUS UNIK!" << endl;
            continue;
        }
        N = strngMasuk.size();
        for (int i = 0; i < N; ++i) {
            element[i] = strngMasuk[i];
        }
        cout << "Masukkan nilai K : ";
        cin >> K;
        if (K > N) {
            cout << "K TIDAK BOLEH LEBIH BESAR DARI N!" << endl;
            continue;
        }
        char kombSkrg[maxEl];
        cout << "#KOMBINASI :" << endl;
        kombinasi(element, N, K, kombSkrg, 0, 0);
        cout << endl << endl; 
        cout << "#PERMUTASI :" << endl;
        permutasi(element, 0, N - 1);
        cout << endl; 
        cout << "Ingin Menjalankan Program Lagi? (y untuk Iya, Selain Itu Tidak): ";
        cin >> loopUlang;
    } while (loopUlang == 'y' || loopUlang == 'Y');

    return 0;
}
