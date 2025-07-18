#include <iostream>
using namespace std;

//! NEW DAN DELETE

int main() {
    int n; // Deklarasi variabel untuk ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> n;
    
    // Alokasi memori untuk array dinamis
    int* array = new int[n];
    for (int i = 0; i < n; i++) {
    array[i] = i + 1; // Nilai diisi dengan angka 1 hingga n
    }
    
    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
    }

    // Menghapus alokasi memori
    delete[] array;

    return 0;
}