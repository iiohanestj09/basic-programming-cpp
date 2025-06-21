#include <iostream>
using namespace std;

int main(){
    //! Literal String ==> Gabungan AoC dan PtC

    const char *namahari[] = {"Senin", "Selasa", "Rabu", "Kamis", 
                                "Jumat", "Sabtu", "Minggu"};

    for (int i=0; i<7; i++){
        cout << namahari[i] << endl;
    }
}
