#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {
    // Array declaration & initialization
    // 2 Cara membuat array

    // cara 1 : array kosong
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Hana";
    // nama[3] = "Dewi";
    // nama[4] = "Padhil";

    // cara 2 : array Langsung diisi
    // string nama[5] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};
    // string nama[] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};

    // Menampilkan data dalam array
    // cout << nama[0] << endl;
    // cout << nama[3] << endl;

    // Menggunakan looping
    // for(int i = 0; i < 5; i++){
    //     cout << nama[i] << endl;
    // }
    
    // descending
    // for(int i = 4; i >= 0; i--){
    //     cout << nama[i] << endl;
    // }

    // Multidimensional Array
    // 1 2 3
    // 4 5 6

    // int matrix[2][3] = {{1, 2 , 3}, {4, 5, 6}};
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // String (Array of char)
    // string nama = "Alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.Length(); //untuk menghitung jumlah karakter

    // string s1 = "Hello";
    // string s2 = "World";

    // 1. s1 = s2
    // s1 = s2;
    // cout <<"s1 sekarang = " << s1 << endl;

    // // 2. s1 = s1 + s2
    // s1 = "Hello"; // reset nilai
    // cout << "Hasil gabungan = " << s1 + s2 << endl;

    // // 3. s1.Length()
    // cout << s1.Length() << endl; //5
    // cout << (s1 + s2).Length <<endl; //10
    
    // // 4. s1.substr(n,m) n itu mulai dari brp, m itu panjang brp
    // cout << s1.substr(2, 3) << endl;

    // Operator sizeof
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai); 

    // Array library
    // Misal Array biasa : float nilai[5]
    
    array <float,5> nilai = {37.5, 90, 100, 95.7, 78.3};
    cout << "Nilai : ";

    for (int i = 0; i < nilai.size(); i++){
        cout << nilai[i] << " ";
    }

}
