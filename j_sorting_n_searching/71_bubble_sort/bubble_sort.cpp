#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int angka[12] = {8, 3, 10, 1, 7, 11, 4, 2, 12, 9, 6, 5}, temp;

    cout << "Data Sebelum Disortir:\n{";
    for(int a = 0; a < 12; a++){
        cout << angka[a];
        if(a == 11){
            cout << "}" << endl << endl;
        } else{
            cout << ", ";
        }
    } 

    cout << "Proses Bubble Sort: " << endl;
    for(int i = 1; i < 12; i++){
        cout << left << setw(2) << i << ": |";
        for(int j = 0; j < 12 - i; j++){
            if(angka[j] > angka[j + 1]){
                temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
        for(int k = 0; k < 12; k++){
            if(k == 11){
                cout << angka[k] << "|" << endl;
            } else{
                cout << left << setw(3) << angka[k];
            }
        }
    }

    cout << "\nHasil Sorting:\n{";
    for(int b = 0; b < 12; b++){
        if(b == 11){
            cout << angka[b] << "}" << endl;
        }else{
            cout << angka[b] << ", ";
        }
    }


}