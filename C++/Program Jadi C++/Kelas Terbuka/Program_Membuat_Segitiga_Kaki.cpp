#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    cout << "Pola 5 (Segitiga sama kaki)" << endl;
    for (int i = 1; i <= N; i++){
        for (int j = N; j > i; j--){
            cout << " ";
        }

        for (int k = 0; k < (2*i - 1); k++){
            cout << "*";
        }

        cout << endl;
    }


    cout << "Pola 6 (Segitiga sama kaki tapi terbalik)" << endl;
    for (int i = 1;i <= N; i++){
        for (int j = 1; j < i; j++){
            cout << " ";
        }

        for (int k = N; k >= (2*i -N); k--){
            cout << "*";
        }

        cout << endl;
    }

    cout << "Pola 7 (Diamond)" << endl;
    for (int i = 1; i <= N; i++){
        for (int j = N; j > i; j--){
            cout << " ";
        }
        
        for(int k = 1; k <= (2*i -1); k++){
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 2; i <= N; i++){
        for (int j = 1; j < i; j++){
            cout << " ";
        }

        for (int k = N; k >= (2*i - N); k--){
            cout << "*";
        }

        cout << endl;
    }
}
