#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    cout << "Pola 1 (Segitiga siku-siku dengan siku-siku di kiri bawah)" << endl;
    for (int i = 1; i <= N; i++){ //outer loop
        for (int j = 1; j <= i; j++){ //inner loop
            cout << "*";
        }
        cout << endl;
    }
    /*

    *
    **
    ***
    ****
    *****
    
    */
    
    cout << "Pola 2 (Segitiga siku-siku dengan siku-siku di kiri atas)" << endl;
    for (int i = 1;i <= N ;i++){
        for (int j = N;j >= i;j--){
            cout << "*";
        }
        cout << endl;
    }
    /*

    ***** 
    **** 
    ***
    **
    *
    
    */

   cout << "Pola 3 (Segitiga siku-siku dengan siku-siku di kanan atas)" << endl;
   for (int i = 1;i <= N; i++){
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        for (int k = N; k >= i;k--){
        cout << "*";
        }

        cout << endl;
   }
    
    /*

    *****
     ****
      ***
       **
        *
        
    */
   cout << "Pola 4 (Segitiga siku-siku dengan siku-siku di kanan bawah)" << endl;
   for (int i = 1; i <= N; i++){
        for (int j = N; j > i; j--){
            cout << " ";
        }

        for (int k = 1;k <= i;k++){
        cout << "*";
        }

        cout << endl;
   }
    /*

        *
       **
      ***
     ****
    *****

    */

}
