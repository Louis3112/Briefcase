#include <iostream>
using namespace std;

int main(){
    int Sisi1;
    int Sisi2;
    int Sisi3;

    cin >> Sisi1;
    cin >> Sisi2;
    cin >> Sisi3;
    while (Sisi1, Sisi2, Sisi3 <= 1 && Sisi1, Sisi2, Sisi3 >= 100);
    

    if (Sisi1 == Sisi2 && Sisi2 == Sisi3){
        cout <<"Segitiga Sama Sisi" << endl;
    }
    else if(Sisi1 == Sisi2 || Sisi2 == Sisi3 || Sisi3 == Sisi1){
        cout <<"Segitiga Sama Kaki" << endl;
    }
    else {cout <<"Segitiga Sembarang" <<endl;}
    
    return 0;
}