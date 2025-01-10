#include <bits/stdc++.h>
using namespace std;

void Tukar(int *x, int *y);

int main() {
    int x, y;
    
    // Memasukkan nilai x dan y
    cin >> x;
    cin >> y;

    // Memanggil fungsi untuk menukar nilai menggunakan pointer
    Tukar(&x, &y);

    // Output dari pertukaran nilai
    cout << x << endl;
    cout << y;

    return 0;
}

// Fungsi untuk menukar nilai x dan y menggunakan pointer
void Tukar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
