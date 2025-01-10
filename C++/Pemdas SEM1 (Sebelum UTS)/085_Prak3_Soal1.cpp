#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N; 
    cin >> K;
    

    for (int i = 1; i <= N; i++) {
        if (i % K == 0) {
            cout << "* ";
        }
        
        else if (i % K != 0) {
            cout << i << " ";
        }
    }

    return 0;
}

/*int n,k;

cin >> n >> k;

for (int i = 1; i <= n; i++){
  if (i % k != 0){
    cout << i << " ";
  }
  else{
    cout << " * ";
  }
}*/