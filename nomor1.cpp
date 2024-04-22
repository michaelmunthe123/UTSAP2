#include <iostream>
using namespace std;

char hitung_nilai_akhir(float nilai_tugas, float nilai_kuis, float nilai_uts, float nilai_uas) {
    float nilai_akhir = (nilai_tugas + nilai_kuis + nilai_uts + nilai_uas) / 4;
    if (nilai_akhir >= 80) {
        return 'A';
    } else if (nilai_akhir >= 65) {
        return 'B';
    } else if (nilai_akhir >= 50) {
        return 'C';
    } else if (nilai_akhir >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    system("CLS");
    string nama, nim, kom, mata_kuliah, dosen_pa;
    float nilai_tugas, nilai_kuis, nilai_uts, nilai_uas;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan kom: ";
    getline(cin, kom);
    cout << "Masukkan Mata Kuliah: ";
    getline(cin, mata_kuliah);
    cout << "Masukkan Nilai Tugas: "; cin >> nilai_tugas;
    cout << "Masukkan Nilai Kuis: "; cin >> nilai_kuis;
    cout << "Masukkan Nilai UTS: "; cin >> nilai_uts;
    cout << "Masukkan Nilai UAS: "; cin >> nilai_uas;
    cin.ignore(); // untuk membersihkan buffer
    
    cout << "Masukkan Nama Dosen PA: ";
    getline(cin, dosen_pa);

    char nilai_akhir = hitung_nilai_akhir(nilai_tugas, nilai_kuis, nilai_uts, nilai_uas);

    cout << "\nData Mahasiswa:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "KOM: " << kom << endl;
    cout << "Mata Kuliah: " << mata_kuliah << endl;
    cout << "Nilai : " << nilai_akhir << endl;
    cout << "Nama Dosen PA: " << dosen_pa << endl;

    return 0;
}
