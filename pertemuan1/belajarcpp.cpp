#include <iostream>//Header standar C++, header sendiri ditulis dalam tanda kutip ganda " "
#include <conio.h>//header untuk getche() dan getch()
using namespace std;

int main(){
    string nama;
    char kom, jk;
    int nim;
    float ip;

    cout << "Hello World!!" << endl;

    cout << "Masukkan nama: ";
    // cin >> nama;
    getline(cin, nama);//agar spasi terbaca

    cout << "Masukkan kom: ";
    cin >> kom;

    cout << "Masukkan nim: ";
    cin >> nim;

    cout << "Masukkan ip: ";
    cin >> ip;

    cout << "Masukkan jenis kelamin(L/P): ";//getche:get char and echo
    jk = getche();//agar karakter langsg tampil

    /*Ini untuk output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jk << endl;
    putchar(jk);//untk menampilkan char trekhusus jk

    getch();//ini agar yg kita ketik tdk ditampilkan di layar
    
}