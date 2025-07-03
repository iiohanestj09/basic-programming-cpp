//^ 01. Pengelolaan Data Nilai Mahasiswa

#include <iostream>
#include <iomanip>
using namespace std;

int sumNilai(int *dataSiswa, int siswa){
    if(siswa <= 0){
        return 0;
    }
    return dataSiswa[siswa - 1] + sumNilai(dataSiswa, siswa - 1);
}
float hitungRataan(int *dataSiswa, int maxSiswa){
    return static_cast<float>(sumNilai(dataSiswa, maxSiswa)) / maxSiswa;   //! float / int = Otomatis float
}

int main(){
    int maxSiswa, maxNilai = 0, minNilai = 101;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> maxSiswa;
    int *dataSiswa =  new int[maxSiswa];

    cout << "Masukkan Nilai Mahasiswa : " << endl;
    for(int i = 0; i < maxSiswa; i++){
        cout << "Mahasiswa " << i + 1 << " : ";
        cin >> dataSiswa[i];

        if(dataSiswa[i] == 0){
            cout << "Nilai Mahasiswa Tidak Bisa 0!" << endl;
            i--;
            continue;
        }

        if(dataSiswa[i] > maxNilai){
            maxNilai = dataSiswa[i];
        }
        if(dataSiswa[i] < minNilai){
            minNilai = dataSiswa[i];
        }
    }

    cout << "Nilai terbesar: " << maxNilai << endl;
    cout << "Nilai terkecil: " << minNilai << endl;
    cout << "Rata-rata nilai: " << fixed << setprecision(2) << hitungRataan(dataSiswa, maxSiswa) << endl;
    cout << setw(50) << setfill('=') << "=" << endl;
    delete[] dataSiswa;
    return 0;
}