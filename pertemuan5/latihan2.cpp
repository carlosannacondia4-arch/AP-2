#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> mahasiswa = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    cout << "Isi vector awal:" << endl;
    for (const string& nama : mahasiswa) {
        cout << nama << endl;
    }

    mahasiswa.push_back("Houra");
    mahasiswa.pop_back();
    mahasiswa.erase(mahasiswa.begin() + 1);

    cout << endl << "Isi vector setelah perubahan:" << endl;
    for (const string& nama : mahasiswa) {
        cout << nama << endl;
    }

    cout << endl << "Jumlah data tersisa: " << mahasiswa.size() << endl;

    return 0;
}
