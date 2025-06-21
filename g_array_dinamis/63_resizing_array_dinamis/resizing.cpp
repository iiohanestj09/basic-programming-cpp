#include <iostream>
using namespace std;

void tambahElemen(int*& array, int& n, int elemenBaru) {
    
    // Alokasi array baru dengan ukuran lebih besar
    int* temp = new int[n + 1];
    
    // Salin elemen dari array lama ke array baru
    for (int i = 0; i < n; i++) {
    temp[i] = array[i];
    }
    
    // Tambahkan elemen baru
    temp[n] = elemenBaru;
    
    // Hapus array lama dan ganti dengan array baru
    delete[] array;
    array = temp;
    
    // Tambahkan ukuran array
    n++;
}

int main(){
    int n = 3;
    int* array = new int[n]{1, 2, 3}; // Inisialisasi array dengan nilai awal
    cout << "Array sebelum penambahan: ";
    
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // Tambahkan elemen ke array
    tambahElemen(array, n, 4);
    
    cout << "Array setelah penambahan: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    
    delete[] array; // Hapus memori

    return 0;
}