#include <iostream>
using namespace std;

int Faktorial(int a){
    if (a <= 1){
        return a;
    } else{
        return a * Faktorial(a-1) ;
    }
}

int BuktiFaktorial(int a){
    if (a <= 1){
        cout << a;
        return a;
    } else{
        cout << a << "*";
        return a * BuktiFaktorial(a-1) ;
    }
}

int main (){
    int angka;
    cout << "Mau hitung faktorial ke berapa?";
    cin >> angka;

    int HasilFaktorial = Faktorial(angka);
    cout << "Dari perhitungan: ";
    BuktiFaktorial(angka) ;
    cout << endl;

    cout << "Maka, hasil dari " << angka << "!" << " adalah " << HasilFaktorial << endl;
    return 0; 
}

/*#include <iostream>
using namespace std;

int Faktorial(int a){
    if (a <= 1){
        cout << a;
        return a;
    }

    else{
        cout << a << "*";
    return a * Faktorial(a-1);
    }
}
int main()
{
    int N;
    
    cout << "Menghitung Faktorial yang ke berapa : ";
    cin >> N;
    int Hasil = Faktorial(N);
    cout << endl;
    
    cout << "Hasil dari faktorial " << N << "! adalah " << Hasil;
  return 0;
}*/