#include <bits/stdc++.h>
using namespace std;

string Kalimat_Terbalik(string S);

int main() {
    int T;
    cin >> T; 
    cin.ignore();  // untuk membersihkan buffer setelah menginput int, karena buffer input dapat menyisipkan \n

    for (int i = 1; i <= T; i++) {
        string S;
        getline(cin, S);

        string KalimatTerbalik = Kalimat_Terbalik(S);
        cout << "Case #" << i << ": " << KalimatTerbalik << endl;

    }

    return 0;
}

string Kalimat_Terbalik(string S) {
    reverse(S.begin(), S.end());
    return S;
}

/*string ReversedString(string S, int index){
    if (index == S. length()){
        return ""; //base case, apabila sudah mencapai akhir string, return string kosong
    }

    char currentChar = S[index];
    string Reversed = ReversedString(S, index + 1);

    return Reversed + currentChar;
    }

int main(){
    int N;
    cin >> N;
    cin.ignore();

    string S[N];
    for (int i = 0; i < N; i++){
        getline(cin,S[i]);
    }

    string ResultS[N];
    for (int i = 0; i < N; i++){
        ResultS[i] = ReversedString(S[i],0);
    }

    for (int i = 0; i < N; i++){
        cout << "Case #" << i << ": " << ResultS[i] << endl;
    }
    
}
*/
