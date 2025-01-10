#include <iostream>
using namespace std;

void PerhitunganSegitigaPascal(int segitiga[][100], int angka[], int N) ;
void OutputSegitigaPascal(int segitiga[][100], int N);

int main() {
    int N;
    cin >> N;

    int angka[N];
    int segitiga[N][100];

    for (int i = 0; i < N; ++i) {
        cin >> angka[i];
    }
    
    PerhitunganSegitigaPascal(segitiga, angka, N);
    OutputSegitigaPascal(segitiga, N);

return 0;
}

void PerhitunganSegitigaPascal(int segitiga[][100], int angka[], int N) {
    for (int i = 0; i < N; i++) {
        segitiga[N - 1][i] = angka[i];
    }

    for (int i = N - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            segitiga[i][j] = angka[j] + angka[j + 1];
            }
            for (int k = 0; k <= i; k++) {
                angka[k] = segitiga[i][k];
                }
        }
}


void OutputSegitigaPascal(int segitiga[][100], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << segitiga[i][j] << " ";
        }
        cout << endl;
    }
}

/*
void PerhitunganSegitigaPascal (int, int, int,int);

int main(){
    int N;
    cin >> N;

    int angka[N];
    int segitiga[N][100];

    for(int i = 0; i < N; i++){
        cin >> angka [i];
    }

    PerhitunganSegitigaPascal(segitiga,angka,N);

    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i;j++){
            cout << segitiga[i][j] << " ";
        }
        cout << endl;
    }
    return 0; 
}
void PerhitunganSegitigaPascal(int segitiga[][100], int angka[N], int N, int row){
    if (row == N){
        return; //base case
    }

    segitiga[row][0] = angka [0];
    for (int i = 1; i < row; i++){
        segitiga[row][i] = angka[i-1] + angka[i];
    }
    segitiga[row][row] = angka[row-1];
    
    PerhitunganSegitigaPascal (segitiga,angka,N,row-1)
    }
*/