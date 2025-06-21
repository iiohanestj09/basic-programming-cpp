/* Operator Logika
    NOT (Kebalikan)
    AND (Seperti Perkalian)
    OR (Seperti Pertambahan)
*/

#include <iostream>
using namespace std;

int main(){
    bool output;

    output = 2 < 4; //true (1)
    output = 2 == 4; //false (0)

    // NOT
    output = !(2 == 4); // !(false) = true 

    // AND 
    output = (2 < 4) && (1 < 2); // 1 * 1 = 1, true AND true = true
    output = (2 < 4) && (1 == 2); // 1 * 0 = 0, true AND false = false 
    output = (2 > 4) && (1 < 2); // 0 * 1 = 0, false AND true = false
    output = (2 > 4) && (1 == 2); // 0 * 0 = 0, false AND false = 0

    // OR
    output = (3 < 5) || (6 > 3); // 1 + 1 = 1(sbnrnya 2,cm prmpamaan), true OR true = true
    output = (3 < 5) || (6 >= 3); // 1 + 0 = 1, true OR false = true
    output = (3 == 5) || (6 > 3); // 0 + 1 = 1, false OR true = true
    output = (3 == 5) || (6 >= 3); // 0 + 0 = 0, false OR false = false
    
    cout<<output;
    
}