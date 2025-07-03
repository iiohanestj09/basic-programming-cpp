#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int baris, kolom;
    int content = 1;

    cout<<"Masukkan Banyaknya Baris : ";
    cin>>baris;
    cout<<"Masukkan Banyaknya Kolom : ";
    cin>>kolom;

    for(int i = 1; i <= baris; i++){
        for(int j = 1; j < kolom; j++){
            cout << left << setw(3) << content;
            content++;
        }
    
        cout<<endl;
    }
}