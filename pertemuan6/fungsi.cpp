#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan (void)
void tampilkanPesan() {
    cout << "======== Selamat Datang di AP 2 ! ========" << endl;
}

// Fungsi dengan nilai balikan (int, double, float dsb)
int tambah(int a, int b){
    return a + b;
}

// Fungsi overload, fungsi dengan nama yg sama, tapi parameter nya beda, tipe nya beda
int kali(int a, int b){
    return a * b;
}

double kali (double a, double b){
    return a * b;
}

// Fungsi Rekursif, fungsi yang memanggil dirinya sendiri
int faktorial (int n){
    if (n == 0 || n == 1) { // base case
        return 1;
    } else {
        return n * faktorial(n-1); // recursive case
    }
}

int main() {
    system("CLS");

    // memanggil fungsi tanpa nilai balikan
    tampilkanPesan();

    // memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasilTambah = tambah(x, y); // 8
    cout << "Hasil Penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);

    double n = 3, m = 5;
    double hasilKaliDouble = kali(n, m);

    cout << "Hasil Perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil Perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
}