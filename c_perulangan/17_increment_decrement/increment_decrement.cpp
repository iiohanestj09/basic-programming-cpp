#include <iostream>
using namespace std;

int main(){
    int a, b;
    //Increment : Preincrement dan Postincrement

    /*Preincrement :
    a = 2;
    cout<<a<<endl;       Output = 2
    ++a;                 Output = 3
    cout<<a<<endl;       Output = 3

    //PostIncrement :
    b = 2
    cout<<b<<endl;      Output = 2
    b++;                Output = 3
    cout<<b<<endl;      Output = 3       KELIHATAN SAMA, TAPI KALAU ++a dan a++
                                                        DIJADIKAN OUTPUT....

    */
    a = 2;
    cout<<a<<endl;       //! Output = 2  ==> awal
    cout<<++a<<endl;     //! Output = 3  ==> ditambah 1 dulu
    cout<<a<<endl;       //! Output = 3  ==> hasil dari baris kedua 

    cout<<"========================================================"<<endl;

    b = 2;
    cout<<b<<endl;      //! Output = 2  ==> awal
    cout<<b++<<endl;    //! Output = 2  ==> Output nilai awalnya dulu, ditambah 1 nanti
    cout<<b<<endl;      //! Output = 3  ==> Hasil dari "ditambah 1 nanti" (seperti CLOUD)

    //* Decrement : Predrecement dan Postdecrement
    //* SAMA SAJA, KALAU INCREMENT ++A/A++ == A = A + 1
    //*           KALAU DECREMENT --A/A-- == A = A - A
    
}