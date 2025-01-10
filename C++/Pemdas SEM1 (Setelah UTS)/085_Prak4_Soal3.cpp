#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1;
    string S2;

    getline(cin, S1);
    getline(cin, S2);

    sort(S1.begin(), S1.end());
    sort(S2.begin(), S2.end());

    if (S1 == S2) {
        cout << "YA" << endl;}
    else {
        cout << "BUKAN" << endl;
    }

    return 0;
}

