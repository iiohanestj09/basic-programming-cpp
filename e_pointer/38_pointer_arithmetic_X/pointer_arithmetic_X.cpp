#include <iostream>
using namespace std;

void strkiri(char *hasil, char *st, int n){
    for (int i = 0; i < n; i++)
    *(hasil + i) = *(st + i);
    *(hasil + n) = '\0';                //* tambahkan karakter NULL di akhir hasil
}

int main(){
    char st[] = "Pemrograman C++";      //* string asli
    char hasil[20];                     //* hasil string yang akan diisi
    int n = 5;                          //* jumlah karakter yang akan disalin
    strkiri(hasil, st, n);
    cout << "Hasil pemotongan string: " << hasil << endl;
}