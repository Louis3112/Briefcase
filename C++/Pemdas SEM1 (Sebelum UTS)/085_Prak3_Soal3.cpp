#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));

    int AngkaKakKobok = rand() % 101; 
    int TebakAngka; 
    int M = 0;
    
    do {
        cin >> TebakAngka;
        M++;
        
        if (TebakAngka < AngkaKakKobok) {
            cout << "terlalu kecil" << endl; 
        } 
        
        else if (TebakAngka > AngkaKakKobok) {
            cout << "terlalu besar" << endl; 
        } 
        
        if (M == 15) {
            return 0;
        }
    } while (TebakAngka != AngkaKakKobok);
    
    cout << "nah bener lu gw maapin";
    
    return 0;
}

/*srand(time(0));

int A = rand() % 101;
int B;
int M = 15;

for (int i = 0; i <= M; i++){
  cin >> B;

  if (B < A){
    cout << "terlalu kecil" << endl;
  }

  if (B > A){
    cout << "terlalu besar" << endl;
  }

  if (B == A){
    cout << "nah bener lu gw maapin" << endl;
  }
}
*/