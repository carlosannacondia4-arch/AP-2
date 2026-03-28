#include <iostream>
using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        char c = kalimat[i];

        // cek huruf vokal
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            kalimat[i] = toupper(c);
        }
    }

    cout << "Hasil: " << kalimat << endl;

    return 0;
}