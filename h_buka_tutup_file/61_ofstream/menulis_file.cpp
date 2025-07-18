#include <iostream>
#include <fstream>     //? Anaknya ada 3: ofstream, ifstream, fstream(gabungan)
using namespace std;

int main(){

    ofstream myFile;
    /*
    ada 3 Mode:
        1. ios::out   = Operasi Output, DEFAULT
        2. ios::app   = MENAMBAHKAN Penuliskan Pada Akhir Baris      //? append = menambahkan
        3. ios::trunc = Membuat File Jika Tidak Ada.
                        Jika ada, maka akan dihapus dan dibuat Baru, DEFAULT
    */
    
    myFile.open("data1.txt", ios::out);
    myFile << "Penulisan Di data1";
    myFile.close();

    myFile.open("data2.txt", ios::trunc);  //* ios::out dan ios::trunc SAMA, karena keduanya DEFAULT
    myFile << "Penulisan Di data2";
    myFile.close();

    int angka = 12345678;
    myFile.open("data3.txt", ios::app);    //* ios::app ini akan melanjutkan penulisannya
    myFile << "Penulisan Di data3\n";      
    myFile << angka << endl;
    myFile.close();
    return 0;
}