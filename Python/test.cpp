#include <iostream>
using namespace std;

int fibonacci (int n){
    if (n == 0){
        return 0;
    }

    else if (n == 1){
        return 1;
    }

    else if (n > 1){
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
int n = 8;
int resultFibonacci = fibonacci(n);
cout << resultFibonacci;    

return 0;
}
int angka = [1,2,3,4]