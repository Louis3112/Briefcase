#include <bits/stdc++.h>
using namespace std;

string Fibonastring (int , char , char);

int main() {
    int T, n;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        char Pertama, Kedua;
        cin >> n >> Pertama >> Kedua;

        string HasilFibonastring = Fibonastring(n, Pertama, Kedua);

        cout << "Case #" << i << ": " << HasilFibonastring << endl;
    }   

    return 0;
}

string Fibonastring(int n, char Pertama, char Kedua) {
    if (n == 0) {
        return string(1, Pertama);
    }
    if (n == 1) {
        return string(1, Kedua);
    }

    string Rumus = Fibonastring(n-1, Pertama, Kedua) + Fibonastring(n-2, Pertama, Kedua);
    return Rumus;
}


/*string fibonastring(int N, char a, char b){
    if(N == 0){
        return string (1,a);
    }

    if (N == 1){
        return string(1,b);
    }

    return fibonastring(N - 1,a,b) + fibonastring(N - 2,a,b);
}


int main(){
    int T;
    cin >> T;

    int N[T];
    char a[T];
    char b[T];

    for (int i = 0; i < T; i++){
        cin >> N[i] >> a[i] >> b[i];
    }

    string ResultFib[T];

    for (int i = 0; i < T; i++){
        ResultFib[i] = fibonastring(N[i], a[i], b[i]);
        cout << "Case #" << i + 1 << ": " << ResultFib[i];
    }
}
*/