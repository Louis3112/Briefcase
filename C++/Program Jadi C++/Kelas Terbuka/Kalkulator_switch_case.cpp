#include <iostream>
using namespace std;

int main(){
    float a, b, hasil;
    char aritmatika;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Pilih operator (+,-,*,/,%) : ";
    cin >> aritmatika;

    switch (aritmatika){
        case '+':
            hasil = a + b;
            cout << "Hasil dari " << a << " + " << b << " = " << hasil << endl;
            break;

        case '-':
            hasil = a - b;
            cout << "Hasil dari " << a << " - " << b << " = " << hasil << endl;
            break;

        case '*':
            hasil = a * b;
            cout << "Hasil dari " << a << " * " << b << " = " << hasil << endl;
            break;

        case '/':
            hasil = a / b;
            cout << "Hasil dari " << a << " / " << b << " = " << hasil << endl;      
            break;

        default : 
            cout << "operator salah" << endl;
    }

    return 0;
}

