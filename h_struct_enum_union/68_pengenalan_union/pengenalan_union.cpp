#include <iostream>
using namespace std;

union dataX{
    int a;
    char b[4];
};

int main(){
    dataX dataUnion;
    dataUnion.a = 1357;

    cout << "Sebelum : "<< endl;
    cout << "Data a = " << dataUnion.a << endl;
    cout << "Data b = " << dataUnion.b << endl << endl;

    dataUnion.b[0] = 'a';
    dataUnion.b[1] = 'c';
    dataUnion.b[2] = 'e';
    dataUnion.b[3] = 'g';

    cout << "Sesudah : "<< endl;
    cout << "Data a = " << dataUnion.a << endl;
    cout << "Data b = " << dataUnion.b << endl;
    
    return 0;
}