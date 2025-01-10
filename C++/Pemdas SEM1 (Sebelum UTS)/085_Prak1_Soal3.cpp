#include <iostream>
using namespace std;

int main() {
    int Buku;
    cin >> Buku;

    int HargaPertama = 50000;
    int SelisihHarga = 10000;
    int TotalPengeluaran = Buku * HargaPertama + ((Buku - 1) * Buku / 2) * SelisihHarga;

    cout << TotalPengeluaran << endl;

    /*double Buku;
    cin >> Buku;
    int HargaAwal = 50000;
    int SelisihHarga = 10000;

    int TotalPengeluaran = (Buku / 2) * (2 * HargaAwal + (Buku - 1) * SelisihHarga);*/

}