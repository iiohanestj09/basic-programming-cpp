//* Segitiga PIRAMIDA (*)

#include <iostream>
using namespace std;

int main(){
    for(int a = 1; a <= 5; a++){
        for(int b = 5 - a; b > 0; b--){
            cout<<" ";
        }
        for(int c = 1; c <= a; c++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

/*
    1            *
   1 2          * *
  1 2 3   ==>  * * *
 1 2 3 4      * * * *
1 2 3 4 5    * * * * *
*/