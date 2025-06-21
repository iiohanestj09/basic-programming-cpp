#include <iostream>
#include <string>
using namespace std;

string **tambahData(int jmlProyek) {
    string **dataProyek = new string *[jmlProyek];
    for (int i = 0; i < jmlProyek; i++) {
        dataProyek[i] = new string[3];
    }
    return dataProyek;
}

void hapusSemuaData(string **&dataProyek, int jmlProyek) {
    for (int i = 0; i < jmlProyek; i++) {
        delete[] dataProyek[i];
    }
    delete[] dataProyek;
    dataProyek = nullptr;
}

int main() {
    int jmlProyek, pilihan;
    cout << "Masukkan Jumlah Proyek : ";
    cin >> jmlProyek;
    cin.ignore();

    string **dataProyek = tambahData(jmlProyek);
    cout << "Masukkan Data Proyek: " << endl;
    for (int i = 0; i < jmlProyek; i++) {
        cout << "Proyek " << i + 1 << ": ";
        getline(cin, dataProyek[i][0]);
        cout << "Anggaran: ";
        cin >> dataProyek[i][1];
        cout << "Pekerja: ";
        cin >> dataProyek[i][2];
        cin.ignore();
    }
    cout << endl << "Data Berhasil Ditambahkan" << endl << endl;

    do {
        int sumAnggaran = 0;
        int sumPekerja = 0;
        int maxAnggaran = 0;
        string kategori;
        cout << "#MENU:\n1. Menambah Data Proyek\n2. Menghapus Data Proyek\n3. Menampilkan Data Proyek\n4. Keluar" << endl;
        cout << "Pilihan (1 - 4) : ";
        cin >> pilihan;
        cin.ignore();

        string **temp = nullptr;

        switch (pilihan) {
            case 1:
                jmlProyek++;
                temp = new string *[jmlProyek];
                for (int i = 0; i < jmlProyek; i++) {
                    temp[i] = new string[3];
                }
                for (int i = 0; i < jmlProyek - 1; i++) {
                    temp[i][0] = dataProyek[i][0];
                    temp[i][1] = dataProyek[i][1];
                    temp[i][2] = dataProyek[i][2];
                }
                cout << "Proyek " << jmlProyek << ": ";
                getline(cin, temp[jmlProyek - 1][0]);
                cout << "Anggaran: ";
                cin >> temp[jmlProyek - 1][1];
                cout << "Pekerja: ";
                cin >> temp[jmlProyek - 1][2];
                cin.ignore();

                for (int i = 0; i < jmlProyek - 1; i++) {
                    delete[] dataProyek[i];
                }
                delete[] dataProyek;

                dataProyek = temp;

                cout << "Data Berhasil Ditambahkan" << endl;
                break;

            case 2:
                if (jmlProyek > 0) {
                    int proyekHapus;
                    cout << "Masukkan nomor proyek yang ingin dihapus: ";
                    cin >> proyekHapus;

                    if (proyekHapus > 0 && proyekHapus <= jmlProyek) {
                        temp = new string *[jmlProyek - 1];
                        for (int i = 0, k = 0; i < jmlProyek; i++) {
                            if (i == proyekHapus - 1) {
                                delete[] dataProyek[i];
                            } else {
                                temp[k] = dataProyek[i];
                                k++;
                            }
                        }
                        delete[] dataProyek;
                        dataProyek = temp;
                        jmlProyek--;

                        cout << "Proyek berhasil dihapus" << endl;
                    } else {
                        cout << "Nomor proyek tidak valid" << endl;
                    }
                } else {
                    cout << "Tidak ada proyek yang dapat dihapus" << endl;
                }
                break;

            case 3:
                if (jmlProyek > 0) {
                    cout << "Data Proyek:" << endl;
                    for (int i = 0; i < jmlProyek; i++) {
                        cout << "Proyek " << i + 1 << ": " << dataProyek[i][0];
                        cout << ", Anggaran: Rp " << dataProyek[i][1] << ", ";
                        cout << "Pekerja: " << dataProyek[i][2] << "." << endl;
                        sumAnggaran += stoi(dataProyek[i][1]);
                        sumPekerja += stoi(dataProyek[i][2]);
                        if (stoi(dataProyek[i][1]) > maxAnggaran) {
                            maxAnggaran = stoi(dataProyek[i][1]);
                            kategori = dataProyek[i][0];
                        }
                    }
                } else {
                    cout << "Tidak ada data proyek untuk ditampilkan" << endl;
                }
                cout << endl << "Total Anggaran Seluruh Proyek: Rp" 
                    << sumAnggaran << endl;
                cout << "Rata-rata jumlah pekerja per proyek: " 
                    << sumPekerja / jmlProyek << endl;
                cout << "Proyek Dengan Anggaran Terbesar: " << "'" << kategori
                    << "'" << maxAnggaran << endl;
                break;

            case 4:
                hapusSemuaData(dataProyek, jmlProyek);
                cout << "Program telah selesai!" << endl;
                break;

            default:
                cout << "Pilihan Tidak Valid. Coba Lagi!" << endl;
                break;
        }
    } while (pilihan != 4);

    return 0;
}
