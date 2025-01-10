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

    if (aritmatika == '+'){
        hasil = a + b;
        cout << "Hasil dari " << a << " + " << b << " = " << hasil << endl;
    }
    
    else if (aritmatika == '-'){
        hasil = a - b;
        cout << "Hasil dari " << a << " + " << b << " = " << hasil << endl;
    }

    else if (aritmatika == '*'){
        hasil = a * b;
        cout << "Hasil dari " << a << " * " << b << " = " << hasil << endl;
    }
    
    else if (aritmatika == '/'){
        hasil = a / b;
        cout << "Hasil dari " << a << " / " << b << " = " << hasil << endl;
    }

    /*else if (aritmatika == '%'){
        hasil = a % b;
        cout << "Hasil dari " << a << " % " << b << " = " << hasil << endl;
    }*/ 

    else {
        cout << "Operator salah" << endl;
    }
    return 0;
}

