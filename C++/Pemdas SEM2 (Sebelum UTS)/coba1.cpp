#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Mengganti Tujuan dengan nilai yang sesuai
    std::string Tujuan = "Ketintang";

    // Mendapatkan nilai huruf terakhir dan huruf kedua terakhir dari string Tujuan
    char LastSecondLetter = toupper(Tujuan[Tujuan.length()-2]);
    char LastLetter = toupper(Tujuan[Tujuan.length()-1]);
    
    int SecondDigit = (static_cast<int>(LastSecondLetter) - 'A' + 1) + (static_cast<int>(LastLetter) - 'A' + 1);
    cout << SecondDigit ;
}