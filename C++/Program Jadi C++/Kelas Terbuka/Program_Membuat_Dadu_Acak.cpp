#include <iostream>
#include <cstdlib> // mengandung fungsi random
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); //agar angka menjadi random setiap program dibuka
char play;
    
    while(true){
    cout << "Mau kocok dadu?? (y/n)";
    cin >> play;

        if (play == 'y') {
            cout << 1 + (rand() % 6) << endl; // 1 + angka random di modulus 6, supaya 0 bisa menjadi 1, dan 5 bisa menjadi 6
        }

        else if(play == 'n'){
        cout << "Terima kasih sudah bermain" << endl;
        break;
        }

        else{
        cout << "Ketik y atau n sebagai respon yang benar!!" << endl;
        }
    }
return 0;
}


