// 10. Menghitung Rata-rata Dan Standar Deviasi
//! VARIANS SAMPLER

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double n1, n2, n3, n4, n5, rata2, varians_sampler, stand_devi;
    string variasi;

    cout<<"Masukkan Nilai 1 : ";
    cin>>n1;
    cout<<"Masukkan Nilai 2 : ";
    cin>>n2;
    cout<<"Masukkan Nilai 3 : ";
    cin>>n3;
    cout<<"Masukkan Nilai 4 : ";
    cin>>n4;
    cout<<"Masukkan Nilai 5 : ";
    cin>>n5;

    rata2 = (n1 + n2 + n3 + n4 + n5) / 5; 
    varians_sampler = (pow((n1 - rata2), 2) + pow((n2 - rata2), 2) 
                    + pow((n3 - rata2), 2) + pow((n4 - rata2), 2) 
                    + pow((n5 - rata2), 2)) / (5-1);                    //! /(5-1) Karena sebagian Data (Sampel)

    stand_devi = sqrt(varians_sampler);

    if(stand_devi < 2){
        variasi = "Variasi Rendah";
    } else{
        variasi = "Variasi Tinggi";
    }

    cout<<"------------------------------------------------------"<<endl;
    cout<<"Maka, "<<endl;
    cout<<"Rata-rata = "<<fixed<<setprecision(2)<<rata2<<endl;
    cout<<"Standar Deviasi = "<<fixed<<setprecision(2)<<stand_devi<<endl;
    cout<<"Berdasarkan Perhitungan Standar Deviasi Sebelumnya, Didapatkan Bahwa "
        "Standar Deviasi Tersebut Termasuk "<<variasi<<endl;
}
