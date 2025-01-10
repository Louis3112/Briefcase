#include <iostream>
#include <fstream> //library untuk mengelola file
using namespace std;

int main(){
    //Mengakses file bernama FileSaya.txt dan ditaruh pada variabel EditFile
    fstream EditFile("FileSaya.txt", ios::app);
    //ios::app artinya menyambung data di akhir file apabila di dalam file sudah ada data

    //Mengedit file dengan menambah baris baru
    EditFile << endl; 
    EditFile << "Tapi lu tetap santai karena lu adalah chill guy";

    //Menutup file
    EditFile.close();
       return 0;
}