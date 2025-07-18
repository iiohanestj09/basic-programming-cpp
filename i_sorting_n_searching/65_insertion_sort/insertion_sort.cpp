#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int angka[12] = {8, 3, 10, 1, 7, 11, 4, 2, 12, 9, 6, 5}, pivot;
    cout << "Data Sebelum Disorting:\n{";
    for(int a = 0; a < 12; a++){
        cout << angka[a];
        if(a == 11){
            cout << "}" << endl << endl;
        } else{
            cout << ", ";
        }
    }

    cout << "Proses Insertion Sorting: " << endl;
    for(int i = 1; i < 12; i++){
        pivot = angka[i];
        int j = i - 1;
        while(j >= 0 && pivot < angka[j]){
            angka[j + 1] = angka[j];
            j--; 
        }
        angka[j + 1] = pivot;
        
        cout << left << setw(2) << i << ": |";
        for(int k = 0; k < 12; k++){
            if(k == 11){
                cout << left << setw(2) << angka[k] << "|" << endl;
            } else{
                cout << left << setw(3) << angka[k];
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