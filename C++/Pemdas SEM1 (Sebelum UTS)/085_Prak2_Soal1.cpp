#include <iostream>
using namespace std;

int main(){
    int MenuMakanan;
    cout << "Silahkan pilihan Menu"; 
    cin >> MenuMakanan;

    if (MenuMakanan == 1) {
        cout <<"Nasi Goreng" << endl;
    }
    else if (MenuMakanan == 2) {
        cout <<"Ayam Goreng" << endl;
    }
    else if (MenuMakanan == 3){
        cout <<"Mie Goreng" << endl;
    }
    else if (MenuMakanan == 4){
        cout <<"Burger" << endl;
    }
    else {
        cout << "Menu tidak tersedia." << endl;
    }

return 0;
}