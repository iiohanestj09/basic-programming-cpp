#include <iostream>
#include <fstream>
#include <string>   //! biar secara eksplisit membaca file
using namespace std;

int main(){

    ifstream myFile;
    /*
    Ada 3 Mode:
        1. ios::in = DEFAULT
        2. ios::ate = Mulai Dari Akhir File  //? ate = "at end"
        3. ios::binary = ...    //!Di Materi Selanjutnya
    */

    string baca1, baca2, baca3, baca4, baca5, buffer3, buffer4, nama;
    bool isData = false;
    int nomor;

    myFile.open("data4.txt", ios::in);
    if(!myFile){
        cerr << "File tidak dapat dibuka!" << endl; 
        return 1;
    }

    cout << "Bagian 1: " << endl;
    myFile >> baca1;     //! Kata Pertama
    myFile >> baca1;     //! Mengambil Kata Kedua (Dipisah oleh Spasi)
    cout << baca1 << endl;

    cout << endl << "Bagian 2: " << endl;
    getline(myFile, baca2);
    getline(myFile, baca2);  //! Mengambil Baris Kedua (Dipisah Oleh Baris)
    cout << baca2 << endl;

    cout << endl << "Bagian 3: " << endl;
    myFile.seekg(0, ios::beg);
    getline(myFile, buffer3);
    baca3.append(buffer3);      //? append = Menambahkan
    getline(myFile, buffer3);
    baca3.append("\n" + buffer3);
    cout << baca3 << endl;

    cout << endl << "Bagian 4: " << endl; 
    myFile.seekg(0, ios::beg);
    while(!isData){ 
        getline(myFile, buffer4); 
        baca4.append(buffer4 + "\n"); 
        if(buffer4 == "Data"){ 
            isData = true; 
        } 
    } 
    cout << baca4;
    getline(myFile, baca4); 
    cout << baca4 << endl; 
    
    while(!myFile.eof()){ //? eof = end of file 
        myFile >> nomor; 
        myFile >> nama; 
        cout << nomor << "     " << nama << endl; 
    }
    
    myFile.clear(); // Reset flags 
    myFile.seekg(0, ios::beg); // Pindahkan pointer file ke awal
    
    cout << endl << "Bagian 5: " << endl; 
    while(!myFile.eof()){ 
        getline(myFile, baca5); 
        cout << baca5 << endl; 
    }
    myFile.close();

    return 0;
}
