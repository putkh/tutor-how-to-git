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
    cout << "=== Vending Machine Automat ===" << endl;
    cout << "Pilihan Minuman: " << endl;
    cout << "1. Air Mineral (Rp4000)\n";
    cout << "2. Teh Botol (Rp6000)\n";
    cout << "3. Kopi Susu (Rp10000)\n";

    int kode;
    cout << "Pilih kode minuman (1-3): ";
    cin >> kode;

    int harga;

    switch (kode) {
    case 1:
        harga = 4000;
        break;
    case 2:
        harga = 6000;
        break;
    case 3:
        harga = 10000;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    
    // aneh
    int uang;
    cout << "Masukkan uang Anda (Rp)\t: ";
    cin >> uang;

    cout << endl << "--- Detail Transaksi ---" << endl;
    if (uang >= harga) {
        cout << "Transaksi Berhasil! Uang kembalian Anda " << uang - harga;
    } else {
        cout << "Transaksi Gagal! Uang Anda kurang " << harga - uang;
    }
    return 0;
}
