#include <bits/stdc++.h>
using namespace std;

// Fungsi untuk membaca isi file.txt
vector<int> BacaFile(string& namaFile) {
    ifstream fileInput(namaFile);
    vector<int> bilangan;

        int nilai;
            while (fileInput >> nilai) {
            bilangan.push_back(nilai);
            }
            return bilangan;
}

int main() {
    string File = "file.txt";

    // Membaca isi file dengan fungsi
    vector<int> bilangan = BacaFile(File);

    // Menghitung kode redeem dari file
    int KodeRedeem = 0;
    for (size_t i = 0; i < bilangan.size(); i++) {
        if (i % 2 == 0) { 
            KodeRedeem = KodeRedeem + bilangan[i];
        }
    }
    cout << KodeRedeem << endl;

return 0;
}

/*int main(){
    ifstream Redeem;
    Redeem.open ("datanilai.dat");

    int angka;
    int kode = 0;
    while (Redeem >> angka){
        if (angka % 2 != 0){
            kode += angka;
        }

        else{
            continue;
        }
    }

    Redeem.close();

    cout << kode;
}*/