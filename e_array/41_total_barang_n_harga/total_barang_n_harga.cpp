#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(){
    char header[] = "MENGHITUNG JUMLAH DAN TOTAL HARGA BARANG"; 
    int jmlh_barang, sum_harga = 0, min_harga = 0, max_harga = 0;
    int barang_max, barang_min;

    cout<<header<<endl;
    cout<<setw(strlen(header))<<setfill('=')<<"="<<endl;

    cout<<"Masukkan Jumlah Barang : ";
    cin>>jmlh_barang;

    int harga[jmlh_barang];

    for(int i = 0; i < jmlh_barang; i++){
        cout<<"Masukkan Harga Barang Ke-"<<i + 1<<" : ";
        cin>>harga[i];

        sum_harga += harga[i];

        if(harga[i] >= max_harga){
            max_harga = harga [i];
            barang_max = i + 1;
        }

        if(harga[i] <= harga[0]){
            min_harga = harga[i];
            barang_min = i + 1;
        }
    }

    cout<<endl<<"Maka, Total Harga Belanjaan Anda Adalah Rp "<<sum_harga<<endl;
    cout<<"Tambahan : "<<endl;
    cout<<"Barang Belanjaan Termahal, Barang Ke-"<<barang_max
        <<". Dengan Harga = "<<max_harga<<endl;
    cout<<"Barang Belanjaan Termurah, Barang Ke-"<<barang_min
        <<". Dengan Harga = "<<min_harga<<endl;
    cout<<setw(strlen(header) + 25)<<setfill('=')<<"="<<endl;
}

