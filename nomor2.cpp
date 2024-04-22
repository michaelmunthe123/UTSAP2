#include <iostream>
using namespace std;

int main() {
    system("cls");
    bool pilihan_valid = false;
    int pilihan;

    cout << "Daftar Calon Presiden:" << endl;
    cout << "1. Jokowi (3 Periode)" << endl;
    cout << "2. Prabowo" << endl;
    cout << "3. Ganjar" << endl;
    cout << "4. Anies" << endl;

    do {
        cout << "masukkan pilihan Presiden anda: "; cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "pilihan anda telah disimpan, pilihan anda adalah 1. Jokowi (3 Periode)" << endl;
                pilihan_valid = true;
                break;
            case 2:
                cout << "pilihan anda telah disimpan, pilihan anda adalah 2. Prabowo" << endl;
                pilihan_valid = true;
                break;
            case 3:
                cout << "pilihan anda telah disimpan, pilihan anda adalah 3. Ganjar" << endl;
                pilihan_valid = true;
                break;
            case 4:
                cout << "pilihan anda telah disimpan, pilihan anda adalah 4. Anies" << endl;
                pilihan_valid = true;
                break;
            default:
                cout << "pilihan tidak valid. Silakan pilih nomor dari daftar calon presiden." << endl;
                break;
        }
    } while (!pilihan_valid);

    return 0;
}
