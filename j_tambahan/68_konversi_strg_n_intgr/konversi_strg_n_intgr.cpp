#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string strJam1 = "25";
    int itgrJam1 ;
    
    cout << "STRING = " << strJam1 << ", ==> 25 + 25 : " << strJam1 + strJam1 << endl;
    stringstream(strJam1) >> itgrJam1;

    cout << "INT (hasil konversi)    = " << itgrJam1 << ", ==> 25 + 25 : "<< itgrJam1 + itgrJam1 << endl << endl;

//^=====================================================================================

    string strJam2;
    int itgrJam2 = 50;
    
    cout << "INT = " << itgrJam2 <<  ", ==> 50 + 50 : " << itgrJam2 + itgrJam2 << endl;
    stringstream temp1;
    temp1 << itgrJam2;
    temp1 >> strJam2;

    cout << "STRING (hasil konversi) = " << strJam2 << ", ==> 50 + 50 : " << strJam2 + strJam2 << endl << endl;
//~==================================ATAUUUUUUUU=======================================
    int itgrJam3 = 75;

    cout << "INT = " << itgrJam3 <<  ", ==> 75 + 75 : " << itgrJam3 + itgrJam3 << endl;
    stringstream temp2;
    temp2 << itgrJam3;
    
    string strJam3 = temp2.str();

    cout << "STRING (hasil konversi) = " << strJam3 << ", ==> 75 + 75 : " << strJam3 + strJam3 << endl << endl;
}