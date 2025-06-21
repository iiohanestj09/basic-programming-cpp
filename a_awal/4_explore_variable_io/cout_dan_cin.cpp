// Ini adalah explore variable yang lumayan kompleks menggunakan cin dan cout

#include <iostream>
using namespace std;

int main (){
    string kegiatan;
    string tempat;

    cout<<"Apa aktivitas Anda hari ini : ";
    cin>>kegiatan;

    cout<<"Dimana anda "<<kegiatan<< " : ";
    cin>>tempat;

    cout<<" Saya sedang "<<kegiatan<<" di "<<tempat;
} 