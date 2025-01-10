#include <iostream>
using namespace std;

int main() {
    int counter = 1, sum = 0, N;
    cout << "Enter the number of positive integers : ";
    cin >> N;

    do {sum = sum + counter; counter++;
    } while (counter <= N);

    cout << "The Sum of the first " << N << " positive integers is " << sum << endl;
    return 0;
}