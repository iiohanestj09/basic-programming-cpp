#include <iostream>
using namespace std;

void printStars(int n) {
    if (n <= 0) return;
    
    printStars(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "* "; 
    }
    cout << endl; 
}

int main() {
    int rows = 5;
    printStars(rows); 
    return 0;
}



/*
f(5){
    f(4){
        f(3){                               
            f(2){                                
                f(1){                           
                    f(0){
                        return
                    }
                    for(1)                  
                }                           
                for(2)
            }
            for(3)
        }
        for(4)
    }
    for(5)
}

f(n) {
    for (int i = 0; i < n; i++) {
        cout << "* "; 
    }
    cout << endl; 
}

*
* *
* * *
* * * *
* * * * *
*/