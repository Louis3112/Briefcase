#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    cin >> M;
    
    int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

    int B[M];
        for (int i = 0; i <  M; i++) {
            cin >> B[i];
        }

    bool Array;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i] == B[j]) {
                    cout << A[i] << " ";
                    Array = true; 
                    }
                }
            }
        
    if (Array == false) {
    cout << "Tidak ada elemen yang sama."; 
    }
    return 0;
}
