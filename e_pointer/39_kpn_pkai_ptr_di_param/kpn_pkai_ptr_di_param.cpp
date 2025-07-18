#include <iostream>
using namespace std;

// Fungsi menggunakan pointer untuk mengubah nilai asli
void ubahNilai(int *x) {
    *x = 100;               // Mengubah nilai asli dari x
}

// Fungsi tanpa pointer, hanya membaca nilai
void cetakNilai(int x) {
    cout << "Nilai: " << x << endl;
}

// Fungsi menggunakan pointer untuk array
void cetakArray(int *arr, int ukuran) {
    for (int i = 0; i < ukuran; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int angka = 42;
    cetakNilai(angka);    //! Mencetak nilai asli
    ubahNilai(&angka);    //! Mengubah nilai asli
    cetakNilai(angka);    //! Mencetak nilai setelah perubahan

    int arr[] = {1, 2, 3, 4, 5};
    cetakArray(arr, 5);          //! Mencetak array

    return 0;
}
