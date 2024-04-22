#include <iostream>
using namespace std; // tambahin namespace
int main () {
    system("CLS");
    int umur; // tambahin tipe data int 
    label_umur: // tambahin var ini untuk goto

    cout << "Tebak Umur Saya : "; // tambahkan titik koma
    cin >> umur; // ubah arah << menjadi >>

    if (umur == 20){ // tambahkan = untuk perbandingan
        cout << "Jawaban Anda Benar" << endl;
    } else { // Menghapus else if karena hanya 1 pernyataan
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        goto label_umur; // mengganti nama var nya saja
    }
    
    cout << "Program Selesai";

    return 0;
}
