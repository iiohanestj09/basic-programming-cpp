#include <iostream>
using namespace std;

int main(){
    int a = 5;
    float b = 6.67f;
    char c = 'x';

    cout << "a + b = " << a + b << endl;
    cout << "a + (int)b = " << a + (int)b << endl;
    cout << "(float)a + b = " << (float)a + b << endl << endl;
    cout << "c = " << c << endl;
    cout << "(int)c = " << (int)c << endl;
    cout << "c + a = " << c + a << endl;
    cout << "(char)(c + a) = " << (char)(c + a) << endl;
    cout << "c + b = " << c + b << endl;
    cout << "(char)(c + b) = " << (char)(c + b) << endl;

    return 0;
}