#include <iostream>
using namespace std;

string variabelGlobal = "Ilmu"; // contoh variabel Global

void namaVariabel() {
    string variabelLokal = "Komputer"; // contoh variabel lokal

    // coba akses 1
    cout << variabelLokal << endl;

    // coba akses 3
    cout << variabelGlobal << endl;
}

int main() {
    namaVariabel();

    // coba akses 2
    // cout << variabelLokal << endl; // ga bisa

    // coba akses 4
    cout << variabelGlobal << endl;
}