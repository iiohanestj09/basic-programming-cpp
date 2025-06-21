#include <iostream>
using namespace std;

int main(){
    //! char xxx[]       ==> STRING LITERAL  --> Array of Char
    //! CONST char *yyy  ==> STRING LITERAL  --> Pointer to Char
    

    char jagoan[] = "SUPERMAN";
    const char *pjagoan = "SUPERMAN";

    cout << "jagoan = " << jagoan << endl;
    cout << "pjagoan = " << pjagoan << endl;

    // jagoan++; // ilegal
    pjagoan++; // legal

    cout << "pjagoan = " << pjagoan << endl;
    cout << "*pjagoan = " << *pjagoan;
}

    //& ADA JUGA Pointer to Pointer to Char 
        //& **ptr ATAU *ptr[], Keduanya Sama saja.