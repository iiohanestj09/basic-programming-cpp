#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int angka[12] = {8, 3, 10, 1, 7, 11, 4, 2, 12, 9, 6, 5}, temp, indexSwap, pivot, minValue;

    cout << "Data Sebelum Disort:\n{";
    for(int a = 0; a < 12; a++){
        cout << angka[a];
        if(a == 11){
            cout << "}" << endl << endl;
        } else{
            cout << ", ";
        }
    }
    
    cout << "Proses Selection Sort: " << endl;
    for(int i = 0; i < 11; i++){
        minValue = angka[i];
        for(int j = i; j < 12; j++){
            if(angka[j] <= minValue){
                minValue = angka[j];
                indexSwap = j;
            }
        }
        temp = angka[i];
        angka[i] = minValue;
        angka[indexSwap] = temp;

        cout << left << setw(2) << i + 1 << ": |";
        for(int k = 0; k < 12; k++){
            if(k == 11){
                cout << left << setw(2) << angka[k] << "|" << endl;
            } else{
                cout << left << setw(4) << angka[k];           
            }
        }
    }

    cout << "\nHasil Sorting:\n{";
    for(int b = 0; b < 12; b++){
        cout << angka[b];
        if(b == 11){
            cout << "}" << endl;
        } else{
            cout << ", ";
        }
    }

    return 0;
}