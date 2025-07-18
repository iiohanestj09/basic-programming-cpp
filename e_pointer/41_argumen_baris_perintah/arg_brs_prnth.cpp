#include <iostream>
using namespace std;

//! Argumen Count & Argumen Vector
int main(int argc, char *argv[]){
    for (int i = 0; i < argc; i++)
    cout << "argv[" << i << "] = " << argv[i] << endl;
    
    return 0;
} 

//^ Cara menampilkan di Outputnya Saat Mau RUN
//^ "./programName arg1 arg2 arg3"
