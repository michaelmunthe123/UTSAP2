#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int n;
    cout << "Masukkan nilai n: "; cin >> n;   
    int total = 0;
    for (int i = 1; i <= n; i += 2) {
        total += i * i;
    }

    cout << "n : " << n << " = " << total << endl;

    return 0;
}
