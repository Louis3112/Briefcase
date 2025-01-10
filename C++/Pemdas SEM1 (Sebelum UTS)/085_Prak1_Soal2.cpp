#include<iostream>
using namespace std;
int main()
{
    int ayam,teman,mod;

    cin >> ayam;
    cin >> teman;

    int masing;
    masing = ayam / teman;
    mod = ayam % teman;

    cout << "masing-masing "<<masing<< endl <<"sisanya "<<mod<<""; ;endl (cout);
    return 0;
}