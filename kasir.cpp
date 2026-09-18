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
    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;

    int belanja;
    int diskon;
    cout << "Masukkan total belanja (Rp): ";
    cin >> belanja;

    cout << endl << "--- Ringkasan Pembayaran ---" << endl;
    if (belanja >= 300000) {
        diskon = belanja * 0.2;
        cout << "Diskon (20%)\t: " << "Rp" << diskon;
    } else if (belanja >= 100000) {
        diskon = belanja * 0.1;
        cout << "Diskon (10%)\t: " << "Rp" << diskon;
    } else {
        diskon = belanja * 0;
        cout << "Diskon (0%)\t: " << "Rp" << diskon;
    }

    cout << endl << "Total Bayar\t: " << "Rp" << belanja - diskon;
    return 0;
}