#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int baris;

    cout << "Masukkan Jumlah Baris Segitiga: ";
    cin >> baris;

    int kolom = baris;

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            cout << i;
        }

        kolom--;
        cout << endl;
    }
}