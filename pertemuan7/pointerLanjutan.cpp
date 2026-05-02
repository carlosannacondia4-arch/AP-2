#include <iostream>
using namespace std;
 
int main() {
    system("CLS");

    //1. Pointer dalam pointer
    cout << "=== Pointer dalam Pointer ===" << endl;
    int a = 64;
    int *p = &a;
    int **pp = &p;

    cout << "Nilai a : " << a << endl;
    cout << "Nilai *p : " << *p << endl;
    cout << "Nilai **pp : " << *pp << endl;

    //2. Pointer dalam Array
    cout << "=== Pointer dalam Array ===" << endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    cout << "Elemen 1 : " << ptr << endl;
    cout << "Elemen 2 : " << *(ptr + 1) << endl;
    cout << "Elemen 3 : " << *(ptr + 2) << endl;

    // 3. Pointer dalam String
    cout << "=== Pointer dalam String ===" << endl;

    char *organisasi = "Ilmu Komputer Laboratory Center";
    cout << "Awal : " << organisasi << endl;

    organisasi += 5; // geser pointer
    cout << "Geser : " << organisasi << endl;
    

}