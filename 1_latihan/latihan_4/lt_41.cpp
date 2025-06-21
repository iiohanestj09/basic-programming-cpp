//^ 02. Perkalian Matriks

#include <iostream>
using namespace std;

int **alokasiMatriks(int rows, int cols){
    int **matriksX = new int*[rows];
    for(int i = 0; i < rows; i ++){
        matriksX[i] = new int[cols];
    }
    return matriksX;
}

void masukValue(int **matriksX, int rows, int cols, string x){
    cout << "Matriks " << x << " : " << endl;
    for(int a = 0; a < rows; a++){
        for(int b = 0; b < cols; b++){
            cout << "Matriks" << x << "[" << a << "][" << b << "] = ";
            cin >> matriksX[a][b];
        }
    }
}

void tampilMatriks(int **matriksX, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matriksX[i][j] << " ";
        }
        cout << endl;
    }
}

int **kaliMatriks(int **matriksA, int **matriksB, int rowsA, int colsA, int rowsB, int colsB){
    int **matriksZ = alokasiMatriks(rowsA, colsB);
    for(int i = 0; i < rowsA; i++){
        for(int j = 0; j < colsB; j++){
            matriksZ[i][j] = 0;     //! Inisialisasi dulu, karena nanti di SUM

            for(int k = 0; k < colsA; k++){
                matriksZ[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
    return matriksZ;
}

void deleteMatriks(int **matriksX, int rows){
    for(int i = 0; i < rows; i++){
        delete[] matriksX[i];
    }
    delete[] matriksX;
}

int main(){
    int rowsA, colsA, rowsB, colsB;
    char sep;

    cout << "TAHAP 1: Pengisian Baris x kolom Pada Kedua Matriks" << endl;
    cout << "Masukkan Baris x Kolom Matriks A (BxM) : ";
    cin >> rowsA >> sep >> colsA;
    if(sep != 'x'){
        cout << "Format Salah! Gunakan Format BxM, contoh '2x3'" << endl;
        return 1;
    }
    cout << "Masukkan Baris x Kolom Matriks B (BxM) : ";
    cin >> rowsB >> sep >> colsB;
    if(sep != 'x'){
        cout << "Format Salah! Gunakan Format BxM, contoh '2x3'" << endl;
        return 1;
    }
    if(colsA != rowsB){
        cout << "2 Matriks Ini Tidak Dapat Dikalikan!\n"
                "Alasan: Karena Kolom Matriks A Tidak Sama Dengan Baris Matriks B" << endl;
        return 1;
    }

    int **matriksA = alokasiMatriks(rowsA, colsA);
    int **matriksB = alokasiMatriks(rowsB, colsB);
    
    cout << "TAHAP 2: Mengisi Value Dari Kedua Matriks" << endl;
    masukValue(matriksA, rowsA, colsA, "A");
    cout << endl;
    masukValue(matriksB, rowsB, colsB, "B");
    cout << endl;

    cout << "TAHAP 3: Menampilkan Matriks" << endl;
    cout << "Matriks A (" << rowsA << "x" << colsA << ") :" << endl;
    tampilMatriks(matriksA, rowsA, colsA);
    cout << endl;
    cout << "Matriks B (" << rowsB << "x" << colsB << ") :" << endl;
    tampilMatriks(matriksB, rowsB, colsB);

    cout << endl << "TAHAP 4: Matriks Hasil Perkalian" << endl;
    int **matriksHasil = kaliMatriks(matriksA, matriksB, rowsA, colsA, rowsB, colsB);
    cout << "Hasil Perkalian Matriks A dan B: " << endl;
    tampilMatriks(matriksHasil, rowsA, colsB);
    cout << endl;

    deleteMatriks(matriksA, rowsA);
    deleteMatriks(matriksB, rowsB);
    deleteMatriks(matriksHasil, rowsA);

    return 0;
}