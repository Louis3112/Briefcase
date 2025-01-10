#include <bits/stdc++.h>
using namespace std;

// Definisi struktur untuk biodata hiu
struct BiodataHiu {
    string NamaHiu;
    string BuahKesukaan;
};

int main() {
    // Banyak Hiu yang mau didata
    int N;
    cin >> N;

    // Menginput biodata hiu dan buah kesukaannya
    vector<BiodataHiu> BiodataHiuList;
    for (int i = 0; i < N; ++i) {
            BiodataHiu hiu;
            cin >> hiu.NamaHiu; 
            cin >> hiu.BuahKesukaan;
            BiodataHiuList.push_back(hiu);
    }

    // Menampilkan nama hiu yang suka makan tomat 
    for (BiodataHiu hiu : BiodataHiuList) {
        if (hiu.BuahKesukaan == "tomat") {
            cout << hiu.NamaHiu << endl;
        }
    }

    return 0;
}

/*
struct BiodataHiu {
    string NamaHiu;
    string BuahHiu;
};

int main(){
    int N;
    cin >> N;

BiodataHiu Hiu[N];

    for (int i = 0; i < N; i++){
        cin >> Hiu[i].NamaHiu;
        cin >> Hiu[i].BuahHiu;
    }

    for (int i = 0; i < N; i++){
        if ((Hiu[i].BuahHiu == "tomat") || (Hiu[i].BuahHiu == "Tomat") ){
            cout << Hiu[i].NamaHiu << endl;
        }
    }
}*/