#include <iostream>
#include <array>
using namespace std;

int main(){
    array < int, 10> nilaiUAS;

    cout << "Program Menampilkan Grafik " << endl;

    for (int i = 0; i <= nilaiUAS.size(); i++){
        cout << "Jumlah mahasiswa dengan nilai ";

        if (i == 0) {
            cout << "0 - 9 : ";
        }
        else if (i == 10){
            cout << "100 : "; 
        }
        else {
            cout << i*10 << " - " << i*10+9 << " : ";
        }
        cin >> nilaiUAS[i];
    }
    
    cout << endl << endl;

    cout << "Grafik Nilai " << endl;

    for (int i = 0; i <= nilaiUAS.size(); i++){
        cout << "Jumlah mahasiswa dengan nilai ";

        if (i == 0) {
            cout << "0 - 9   : ";
        }
        else if (i == 10){
            cout << "100    : "; 
        }
        else {
            cout << i*10 << " - " << i*10+9 << " : ";
        }

        for (int bintang = 1; bintang <= nilaiUAS[i]; bintang++){
            cout << "*";
        }
        cout << endl;
    }
}