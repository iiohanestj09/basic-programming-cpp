#include <iostream>
using namespace std;

//^ Global Scope
int maman = 10; //? VARIABEL GLOBAL

int ambil_global() {
    return maman; //~ Memanggil Variabel Global di Scope Global
}

int x_local() {
    int maman = 8; //~ Memanggil Variabel Lokal di Scope Local x
    return maman;
}

//! Fungsi untuk menambah 9 ke variabel maman
void tambahSembilan() {
    maman += 9; 
}

//! Fungsi untuk mencetak nilai maman di Global Scope
void printbalabala() {
    cout << "Nilai maman dalam printbalabala = " << maman << endl;
}

int main() {
    //^ Local Scope
    cout << "1. Maman = " << maman << endl; // (1) Nilai maman = 10 (global)
    int maman = 6; //? VARIABEL LOCAL (local to main)
    cout << "2. Maman = " << maman << endl; // (2) Nilai maman = 6 (local)
    cout << "3. Maman = " << ambil_global() << endl; // (3) Nilai maman = 10 (global)
    cout << "4. Maman = " << x_local() << endl; // (4) Nilai maman = 8 (local to x_local)
    
    //~ Panggil fungsi untuk menambah 9 ke variabel maman global
    tambahSembilan();
    
    cout << "6. Maman = " << maman << endl; // (6) Nilai maman = 6 (local)
    cout << "7. Maman (global) = " << ambil_global() << endl; // (7) Nilai maman = 19 (global, telah ditambah 9)

    //~ Panggil fungsi printbalabala untuk mencetak nilai maman
    printbalabala(); // Ini akan mencetak nilai global maman yang telah diubah, yaitu 19

    {
        int maman = 4; //^ Block Scope
        cout << "5. Maman = " << maman << endl; // Nilai maman = 4 (block local)
    }
    cout << "8. Maman = " << maman << endl; // Nilai maman = 6 (local to main)
}

/*
Output
1. Maman = 10
2. Maman = 6
3. Maman = 10
4. Maman = 8
5. Maman = 4
6. Maman = 6
7. Maman (global) = 19
Nilai maman dalam printbalabala = 19
8. Maman = 6
*/