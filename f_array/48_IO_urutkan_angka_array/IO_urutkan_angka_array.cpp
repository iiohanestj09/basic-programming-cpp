#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

char head[] = " MENYORTIR DERET MENJADI RAPI ";

void header(){
    cout<<setw(strlen(head))<<setfill('=')<<"="<<head
    <<setw(strlen(head))<<setfill('=')<<"="<<endl;
}

void footer(){
    cout<<setw(strlen(head) * 3)<<setfill('=')<<"="<<endl;
}

int main(){
    char ulang_loop;

    do{
        int n, temp;

        header();

        cout<<"Masukkan Jumlah Deret : ";
        cin>>n;

        int angka[n];

        for(int i = 0; i < n; i++){                          //! Memasukan Angka-angka Deret Sebanyak n Kali
            cout<<"Masukkan Angka Ke-"<<i + 1<<" : ";       
            cin>>angka[i];
        }

        cout<<endl<<"Maka, Deret Yang Anda Miliki Sekarang Sebagai Berikut : "<<endl;
        cout<<"{";
        for(int j = 0; j < n; j++){                         //! Menampilkan Deret Sebelum Disortir 
            cout<<angka[j];

            if(j < n - 1){
                cout<<", ";
            } else{
                cout<<"}"<<endl<<endl;
            }
        }

        cout<<"Proses Menyortir : "<<endl;

        for(int a = 1; a < n; a++){                      
            for(int b = 0; b < n - a; b++){                
                if(angka[b] > angka[b + 1]){
                    temp = angka[b];
                    angka[b] = angka[b + 1];
                    angka[b + 1] = temp;
                }
            }
            for(int c = 0; c < n; c++){
                cout<<angka[c]<<" | ";
            }
            cout<<endl;
        }

        cout<<endl<<"Hasil Deret Anda Setelah Disortir : "<<endl;     //! Menampilkan Deret Setelah Disortir
        cout<<"{";
        for(int k = 0; k < n; k++){ 
            cout<<angka[k];

            if(k < n - 1){
                cout<<", ";
            } else{
                cout<<"}"<<endl<<endl;
            }
        }

        cout<<"Ingin Menyortir Deret Yang Baru? (y Untuk Iya, Selain Itu Tidak) : ";
        cin>>ulang_loop;

    } while(ulang_loop == 'y' || ulang_loop == 'Y');

    cout<<endl<<"PROGRAM TELAH SELESAI!"<<endl;
    footer();

    return 0;
}