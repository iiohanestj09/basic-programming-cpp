/* Selanjutnya kita mendesain agar :
    1. Bisa mengisi CIN-nya dengan 2 kata. Karena, yg diatas cuma bisa mengisi
        1 kata saja.
        Dari cin>>kegiatan; ==> getline(cin, aktivitas);
        Dari cin>>tempat; ==> getline (cin, tempat);

    2. Titik Dua dari pertanyaan CIN-nya sama atau segaris
        Dari " : " ==> " \t: "
*/

#include <iostream>
using namespace std;

int main (){
    string kegiatan;
    string tempat;
    int lantai;           //tambahan

    cout<<"Apa kegiatan Anda hari ini \t: ";
    getline(cin, kegiatan);

    cout<<"Dimana Anda "<<kegiatan<< " \t: ";
    getline(cin, tempat);

    cout<<"Lantai berapa Anda "<<kegiatan<<" di "<<tempat<<" \t: ";
    cin>>lantai;

    cout<<" Saya sedang "<<kegiatan<<" di "<<tempat<<" tepatnya di lantai "<<lantai;
} 