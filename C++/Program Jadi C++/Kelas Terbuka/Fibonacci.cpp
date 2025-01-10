#include <iostream>
using namespace std;

int Fibonacci (int a){
    cout << "Fungsi Fibonacci " << a << endl; //tidak direkomendasikan, karena akan memakan banyak memori 
    if (a == 0 || a == 1){
        return a;
   } else{
    return Fibonacci(a-1) + Fibonacci(a-2);
   }
}

int main(){
    int angka;
    cout << "Mau hitung n yang keberapa?\n";
    cin >> angka;

    int HasilFibonacci = Fibonacci(angka);
    cout << "Maka, Fibonacci ke - " << angka << " adalah " << HasilFibonacci << endl;
return 0;
}