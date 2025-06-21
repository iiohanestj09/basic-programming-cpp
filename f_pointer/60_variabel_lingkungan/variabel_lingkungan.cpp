//^ MEMPEROLEH VARIABEL LINGKUNGAN

#include <iostream>
using namespace std;

int main(int argc, char *argv[], char *env[]){
    while (*env){
        cout << *env << endl;
        env++;     // ke variabel lingkungan berikutnya
    }
}