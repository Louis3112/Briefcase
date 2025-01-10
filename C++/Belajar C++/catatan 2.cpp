catatan 2

C++ akan melewati fase preprocessing, dari dalam c++, terdapat include iostream, sehingga akan melalui proses prepocessing
yang akan menghasilkan file c++ dan iostream, dan baru dicompile. Hasil compile tersebut akan berubah menjadi obj file (object file). Obj file ini adalah bahasa mesin
lalu, obj file akan pergi ke linking (misalkan, apabila ada obj file yg lain, maka akan disatukan) sehingga menjadi .exe

Fase preprocessing adalaj langkah awal yang dilakukan program sebelum dikompilasi.
di dalam c++, terdapat #include dan ada header berupa iostream
dan akan melalui proses yg namanya preprocessing sehingga menjadi suatu file

cara pindah dari suatu folder ke folder lain, adlaah dengan cara mengetikkan pada cmd cd /..(nama folder)

lalu, cara mengubah belajar.cpp menjadi preprocessing, dengan cara mengetikkan pada cmd g++ -E (nama file).cpp > (nama file).p
isi dari file yg panjang tersebut, adalah iostream. Itu adalah hasil copyan dari iostream

untuk mengecek lokasi filenya kita, bisa mengetikkan pwd pada cmd

lalu, kita juga bisa membuat header saja untuk c++, dengan cara mengetikkan (nama file).h
lalu, ketikkan #include "(nama file).h" dibawah cout
maka dia akan mengcopy syntax dari include

Kita juga bisa memulai suatu cpp tanpa #include <iostream>
dengan hanya mengambil int main(), lalu kita bisa mengetikkan #include program setelah int main()

COMPILING
Setelah melalui proses preprocession, akan melalui proses compiling yang akan menghasilkan obj file(machine code)
Disini, kita bisa melihat hasil compile dengan cara mengetikkan pada cmd g++ -c (nama file).cpp
Dan jika kita ketikkan ls, maka kita bisa melihat hasil dari compiling yg bernama file.o (object)

Lalu, cara melihatnya dengan cara mengetikkan objdump -d compile.o
maka akan terlihat bahasa mesinnya

Kita bisa melihat bahasa mesin yg paling simpel, yaitu 
int main(){
    int a = 1;
    int b = 2;
    }

Dan apabila kita kembalikan seperti semula dengan std:: cout bla bla bla
maka, akan terjadi eror (apabila tidak ada iostream, sehingga tidak ditemukan iostream)
dan compiler bisa eror apabila proses preprocessing tidak lengkap
maka, cara mengembalikannya harus dengan #include <iostream>

kita bisa mengexecute aplikasi dengan g++ (nama file).cpp
atau dengan cara mengetikkan g++ (nama file).o

LINKING 
sdangkan linking adalah proses menggabungkan antar obj menjadi linking sehingga terbentuk .exe

Fun fact, kita bisa buat matematika dengan cara 
#include <iostream>

int tambah(int a, int b){
    return(a + b);
}

int main(){
    std::cout << tambah (2,3) << std::endl;
    return 0; 
}
(+ untuk plus, - untuk minus, * untuk kali, / untuk bagi)

hasil penghitungan itu akan menghasilkan angka 5, karena fungsi di dalam tambah (2,3) akan dipanggil pada return (a+b)
Kalau misalkan tambah (int a) itu tidak ada, maka int main akan error

Cara linkingnya, adalah dengan mengetikkan pada terminal dengan cara g++ belajar.o matematika.o 
sehingga dia otomatis linking

g++ belajar.o matematika.o -o output (akan menghasilkan output baru)
dan bisa diexecute

Jadi, cara kerjanya dari cpp, preprocessing, compiling, linking, sehingga bisa menjadi exe