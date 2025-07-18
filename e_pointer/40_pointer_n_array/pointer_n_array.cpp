#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr + 4;         //! ptr adalah pointer yang menunjuk ke alamat arr[4]
    
    int val = *(arr + 4);       //! val adalah nilai dari arr[4] (VARIABEL BIASAAAA)

    cout << "Pointer ptr menunjuk ke nilai: " << *ptr << endl; //^ Output: 5 ==> 1 + 4
    cout << "Nilai val adalah: " << val << endl;               //^ Output: 5 

    return 0;
}

/*
    ^  arr + 4     === &arr[4] 
    ^  *(arr + 4)  === arr[4] 

    TODO: TAMBAHAN

    &  void xxx(int arr[], int size) === void yyy(int *arr[], int size)
    &  ==> *arr === arr[] --> MENGAKSES ELEMEN PERTAMA

    TODO: KELUPAAN
    * Saat memanggil sebuah array sebagai parameter di fungsi di main tidak usah []
    * 
    * ==> void x(int *arr);
    *   int main(){
    *       int arr[] = {....}
    *       
    *       x(arr);
    * }  
*/

