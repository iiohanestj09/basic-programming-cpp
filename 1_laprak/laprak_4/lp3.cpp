//^ 03. Transpose Matriks

#include <iostream>
using namespace std;

// Fungsi untuk menampilkan matriks secara rekursif
void tampilMatriksRekursif(int** matriksX, int rows, int cols, int i = 0) {
    if (i == rows) {
        return; // Basis kasus, jika sudah sampai akhir Baris
    }

    for (int j = 0; j < cols; j++) {
        cout << matriksX[i][j] << " ";
    }
    cout << endl;

    // Rekursi ke Baris berikutnya
    tampilMatriksRekursif(matriksX, rows, cols, i + 1);
}

// Fungsi untuk mentranspose matriks
int** transposeMatriks(int** matriksX, int rows, int cols) {
    // Alokasikan memori untuk matriks hasil transpose
    int** transpose = new int*[cols];
    for (int i = 0; i < cols; i++) {
        transpose[i] = new int[rows];
    }

    // Isi matriks transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matriksX[i][j];
        }
    }
    return transpose;
}

int main() {
    int rows, cols;

    // Input ukuran matriks
    cout << "Masukkan jumlah Baris: ";
    cin >> rows;
    cout << "Masukkan jumlah Kolom: ";
    cin >> cols;

    // Alokasikan memori untuk matriks asli
    int** matriks = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matriks[i] = new int[cols];
    }

    // Input elemen matriks asli dengan keterangan
    cout << "Masukkan elemen matriks (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matriks[" << i << "][" << j << "] : ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan matriks asli
    cout << "\nMatriks Asli:\n";
    tampilMatriksRekursif(matriks, rows, cols);

    // Menghitung matriks transpose
    int** transpose = transposeMatriks(matriks, rows, cols);

    // Menampilkan matriks transpose
    cout << "\nMatriks Transpose:\n";
    tampilMatriksRekursif(transpose, cols, rows);

    // Membebaskan memori matriks asli
    for (int i = 0; i < rows; i++) {
        delete[] matriks[i];
    }
    delete[] matriks;

    // Membebaskan memori matriks transpose
    for (int i = 0; i < cols; i++) {
        delete[] transpose[i];
    }
    delete[] transpose;

    return 0;
}
