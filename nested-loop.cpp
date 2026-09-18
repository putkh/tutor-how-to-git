/*
Nama Program    :
Nama            : Putty Deniera Khairunnisa
NPM             : 140810260040
Tanggal Buat    : 16/09/2026
Deskripsi       : 
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
         for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}