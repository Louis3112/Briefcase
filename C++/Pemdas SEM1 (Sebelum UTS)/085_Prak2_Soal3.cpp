#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;

    cin >> N;
    cin >> M;

    double f[N];
    for (int i = 1; i <= N; ++i) {
        f[i] = (i % M) / M;
    }

    for (int i = 1; i <= N; ++i) {
        cout << f[i] << " ";
    }
    double OrangCobaAwal = 0;
    for (int i = 1; i <= N; ++i) {
        if (f[i] == 0) {
            OrangCobaAwal++;
        }
    }

    double PersentaseCicip = OrangCobaAwal/N;
    int SemuaOrangCoba = 0;
    for(int i = 1; i <= N; ++i){
        if(f[i] <= PersentaseCicip){
            SemuaOrangCoba++;
        }
    }

    if(SemuaOrangCoba == N){
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }

}