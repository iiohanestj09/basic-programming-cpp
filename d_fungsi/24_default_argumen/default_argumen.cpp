#include <iostream>
using namespace std;
    
int v_balok(int p = 3, int l = 5, int t = 4);      //! Default Statement/Argumen = nilai fungsinya DIISI!!!
                                                    //? Prototype

int main(){
    cout<<"1. Volume Kubus = "<<v_balok(1,2,3)<<endl;       //? 1 * 2 * 3
    cout<<"2. Volume Kubus = "<<v_balok(1,2)<<endl;         //? 1 * 2 * [4]    "Defaultnya t = 4" dst.
    cout<<"3. Volume Kubus = "<<v_balok(1)<<endl;           //? 1 * [5] * [4]
    cout<<"4. Volume Kubus = "<<v_balok()<<endl;            //? [3] * [5] * [4]
}

int v_balok(int p, int l, int t){
    return p * l * t;
}
