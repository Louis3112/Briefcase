#include <iostream>
using namespace std;

void test(int x){
   if(x < 0){
        cout << "-";
        test(-x);
   }
   else if(x < 10){
    cout << x;
   }
   else{
    test(x/10);
    cout << x %10;
   }
}
int main() {
    test(10);
    return 0;
}
