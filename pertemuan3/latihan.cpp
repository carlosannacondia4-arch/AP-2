
#include <iostream>
using namespace std;

int main() {
    float bb,t,bmi;
    cout << "Masukkan berat badan anda (kg): " << endl;
    cin >> bb;
    cout << "Masukkan tinggi badan anda (m): " << endl;
    cin >> t;
    
    bmi = bb / (t*t);
    cout << "BMI anda: " << bmi << endl;

    if (bmi < 18.5){
        cout << "Kategori berat badan: berat badan kurang" << endl;
    } else if (bmi < 25 && bmi >= 18.5) {
        cout << "Kategori berat badan: berat badan normal" << endl;
    } else if (bmi >= 25 && bmi < 30){
        cout << "Kategori berat badan: berat badan berlebih" << endl;
    } else if (bmi >= 30){
        cout << "Kategori berat badan: berat badan obesitas" << endl;
    } else {
        cout << "Input anda salah" << endl;
    }
}