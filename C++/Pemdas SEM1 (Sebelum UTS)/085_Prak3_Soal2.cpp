#include <bits/stdc++.h>
using namespace std;

int main() {
    /*int N;
    int AngkaTerbesar1 = -10^6;
    int AngkaTerbesar2 = 10^6;
    int Angka;
    
    cin >> N;
    while (N <= 1 && N >= 100);

    for (int i = 0; i < N; i++) {
        cin >> Angka;
        
         if (Angka > AngkaTerbesar1) {
            if (AngkaTerbesar1 >= -10^6 && AngkaTerbesar1 <= 10^6) { 
                AngkaTerbesar2 = AngkaTerbesar1;
                AngkaTerbesar1 = Angka;
            }
            else { 
                AngkaTerbesar2 = -10^6;
                AngkaTerbesar1 = 10^6;
            }
        }

        else if (Angka > AngkaTerbesar2) {
            if (AngkaTerbesar2 >= -10^6 && AngkaTerbesar2 <= 10^6) { 
                AngkaTerbesar2 = Angka;
            }
            else { 
                AngkaTerbesar2 = -10^6;
            }
        }
    } 

    cout << AngkaTerbesar1 << " " << AngkaTerbesar2 << endl;

    return 0;*/


int N;
int Angka;
int AngkaTerbesar1;
int AngkaTerbesar2;
cin >> N;

for (int i = 1; i <= N ; i++){
  cin >> Angka;

  if (Angka > AngkaTerbesar2){
    AngkaTerbesar2 = Angka;
  }
  
  if (Angka > AngkaTerbesar1){
    AngkaTerbesar2 = AngkaTerbesar1;
    AngkaTerbesar1 = Angka;
  }

}
cout << AngkaTerbesar1 << " " << AngkaTerbesar2;
}