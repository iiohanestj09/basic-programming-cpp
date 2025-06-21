#include <iostream>
#include <cstdlib> // Untuk fungsi atof (konversi string ke float)
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 4) {
        cout << "Penggunaan: " << argv[0] << " <operand1> <operator> <operand2>" << endl;
        return 1;
    }

    float operand1 = atof(argv[1]);
    char op = argv[2][0];  // Mengambil karakter pertama dari argumen operator
    float operand2 = atof(argv[3]);
    float result;

    switch (op) {
        case '+':
            result = operand1 + operand2; break;
        case '-':
            result = operand1 - operand2; break;
        case 'x':
            result = operand1 * operand2; break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                cout << "Error: Pembagian dengan nol!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Operator tidak dikenal: " << op << endl;
            return 1;
    }
    cout << "Hasil: " << result << endl;

    return 0;
}
