#include <iostream>
using namespace std;

int main(){
    int n,f_n, f_n1, f_n2;
    cout << "Masukkan nilai n : ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;

    for (int i = 0; i < n; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
    }

    cout << "fibonacci dari " << n << "adalah " << f_n;
    return 0;
}