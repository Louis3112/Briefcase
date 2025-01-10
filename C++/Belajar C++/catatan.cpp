C++

Alasan belajar C++
1. Tugas Kuliah
2. Ingin membuat sebuah software yang ada hubungannya dengan hardware
3. Mempelajari dasar pemrograman

C++ berbeda dengan C
C++ diciptakan oleh Bjarne Stroustrup (C++ diciptakan agar bisa lebih kompleks)

C++ memiliki standard pada tahun 1988, c++ 03,11,14,17,20
C++ banyak digunakan pada engineering, backend, front end, server
C++ itu multiplatform, dan harus membutuhkan compiler (atau penerjemah) agar device lain bisa mengakses

Multiplatform itu bisa linux, windows, mac, android, ios, ps, xbox

C++ (source file atau source code) --> compiler --> PC (instruksi mesin)
text editor                            compiler     bisa di execute 

Text Editor dan compiler yang menyatu disebut sebagai IDE (Integrated Development Environment)
IDE ada di visual studio, dev c++, code blocks

PEMBELAJARAN C++
#include <iostream>
using namespace std;

int main(){
    std::cout <<"Hello World!"<< std::endl;
    return 0;
}

atau lebih pendeknya 
#include <iostream>
using namespace std;

int main(){
    cout <<"Hello World!";
}

<iostream> itu adalah nama salah satu file di Windows kita, 
iostream akan muncul di cmd nya kita (ios dan linux disebut console)

bagian yg kosong akan dilewati saja 
lalu ada yg namanya comment (tidak akan dieksekusi) 
//comment 
/* multi
 line comment*/

lalu, ada yg namanya int, yg disebut sebagai entry point. Dan compiler akan mengeksekusi pertama kali bagian yg main, maka disebut sebagai pintu pertama
main adalah penanda awalnya suatu program
dan int berhubungan dengan return

lalu, std::... itu adalah body 
std itu berasal dari iostream, dan iostream adalah input dan output 

cout merupakan salah satu fungsi (console out) dan yg dikeluarkan adalah << "Hello World!"<<
lalu ada endl, yg merupakan (end line) 
semua yg diatas, itu tidak bisa dijalankan dulu karena mereka adalah source code

lalu, cara mengcompilenya adalah, dengan mengetikkan pada cmd g++ (nama file.cpp)
cara menjalankannya juga dengan cara mengetikkan ./a pada cmd

dan kalau misalkan kita ubah isi pada cout, maka akan tetap sama seperti sebelumnya. Karena blm di compile
caranya sama, dengan mengetikkan g++ dan seterusnya

maka, source code yg ada di belajar.cpp, itu dicompile oleh cmd sehingga menjadi suatu aplikasi

untuk mengecek jalannya atau history dri source code yg dibuka, bisa ketikkan dir atau ls pada cmd

Pada windows, jika kita mengklik aplikasinya pada folder, maka dia akan flashing (tidak bisa bertahan lama), sedangkan pada linux atau ios bisa bertahan lama
carany adalah dengan mengetikkan std:: cin.get();

cara lainnya adalah, kita bisa mengetikkan pada cmd. Bisa terlihat kalau kita ketikkan perbedaan "a" dengan "a_lama", maka "a_lama" akan lgsg membuka code baru. sampai kita mengetikkan enter pada "a", maka akan membuka code baru 