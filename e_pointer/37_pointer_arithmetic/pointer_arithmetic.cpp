#include <iostream>
using namespace std;

int main() {
    char huruf[] = "abcde";
    char plusHuruf[6];

    *(plusHuruf + 0) = *(huruf + 0); // Mengisi plusHuruf[0] dengan huruf[0]
    *(plusHuruf + 1) = *(huruf + 4); // Mengisi plusHuruf[1] dengan huruf[4]
    *(plusHuruf + 2) = *(huruf + 2); // Mengisi plusHuruf[2] dengan huruf[2]
    *(plusHuruf + 3) = *(huruf + 1); // Mengisi plusHuruf[3] dengan huruf[3]
    *(plusHuruf + 4) = *(huruf + 1); // Mengisi plusHuruf[4] dengan huruf[1]
    *(plusHuruf + 5) = '\0';         //! Menambahkan karakter null di akhir string

    cout << plusHuruf << endl; // Menampilkan hasil
    return 0;
}
/*
& PENDEKATAN AKSES INDEKS ARRAY ADA 2 :
&       1. Menggunakan Indeks Array         ==> plusHuruf[1] = huruf[4];
^       2. Menggunakan Pointer Arithmetic   ==> *(plusHuruf + 1) = *(huruf + 4);
*/