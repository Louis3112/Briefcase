#include <iostream>
#include <cmath>
using namespace std;

void CoutKeliling (int x, int y){
    cout << "Maka, keliling persegi panjang adalah " << 2 * (x + y) << endl;
}

void CoutLuas (int x, int y){
    cout << "Maka, luas persegi panjang adalah " << x * y << endl;
}

int main(){
    int a, b;

    cout << "Silahkan masukkan 2 sisi persegi panjang yang akan dihitung" << endl;
    cout << "Panjang : ";
    cin >> a;

    cout << "Lebar : ";
    cin >> b;

    CoutKeliling (a,b);
    CoutLuas (a,b);
}

