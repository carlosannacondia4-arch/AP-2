#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;

    protected:
        int protectedVar;
    
    public:
        int publicVar;

    // Constractor
ContohAkses() {
    privateVar = 1;
    protectedVar = 2;
    publicVar = 3;
}

    void tampilkanSemua(){
        cout << "Akses dari dalam Class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// Inheritance (pewarisan), class turunan
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
    // cout << privateVar << endl;
    cout << protectedVar << endl;
    cout << publicVar << endl;
    }
};
int main(){
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\n Akses dari luar class : " << endl;
    //cout << privateVar << endl; // error
    //cout << protectedVar << endl; // error
    cout << obj.publicVar << endl;
   
    cout << "\n Akses dari kelas Turunan : " << endl;
    Turunan tur;
    tur.aksesProtected();



}