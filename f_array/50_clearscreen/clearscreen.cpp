#include <iostream>
#include <stdlib.h> 
using namespace std;

int main(){
    string nama, kelas, hobi, matkul_fav;       //!!!!! Penggunaan cin.ignore() 
    int nim, umur;                                  //! Setelah cin dan Sebelum getline(cin, x)
    char ulang_loop;

    cout << "Masukkan Nama Anda : ";
    getline(cin, nama);
    cout << "Masukkan NIM Anda : ";
    cin >> nim;
    
    cin.ignore();               //! Membersihkan karakter newline setelah CIN nim
    
    cout << "Masukkan Kelas Anda : ";
    getline(cin, kelas);
    
    system("cls");
    
    cout << "Nama Saya Adalah " << nama << ". NIM Saya Adalah : " 
    << nim << ". Dan Kelas Saya Adalah " << kelas << endl; 
    
    do{
        cout << "Masukkan Umur Anda Sekarang : ";
        cin >> umur;
        
        cin.ignore();           //! Membersihkan karakter newline setelah CIN umur
        
        cout << "Masukkan Hobi Anda \t: ";
        getline(cin, hobi);
        cout << "Masukkan Mata kuliah Favorit Anda : ";
        getline(cin, matkul_fav);
        
        system("cls");
        
        cout << "Nama Saya Adalah " << nama << ". NIM Saya Adalah : " 
            << nim << ". Dan Kelas Saya Adalah " << kelas << endl; 
        
        cout << "Umur Saya : " << umur << endl << "Hobi Saya : " << hobi 
        << endl << "Matkul Fav : " << matkul_fav << endl << endl;
        
        cout << "Ingin Mengedit Biodata Anda? (y Untuk Iya, Selain itu Tidak) : ";
        cin >> ulang_loop;
        
        cin.ignore();           //! Membersihkan karakter newline setelah CIN ulang_loop
        
        system("cls");          //! Clearscreen di Terminal

    } while(ulang_loop == 'y' || ulang_loop == 'Y');

    cout << "PROGRAM TELAH SELESAI!" << endl;
    return 0;
}
