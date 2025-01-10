#include <iostream>
using namespace std;

int Fibonacci (int a){
    if((a == 1)|| (a == 0)){
        cout << a;
        return a;
    }
    else {
        cout << a << "+";
    return Fibonacci(a-1) + Fibonacci(a-2);
    }

}
int main(){
    int N;
    cin >> N;
    int Hasil = Fibonacci(N);

    cout << Hasil;
}
