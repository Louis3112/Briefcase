catatan pemdas c++

Catatan pertemuan 1 (Algoritma dan Flowchart)

Program = Suatu urutan instruksi yang dilakukan komputer dalam pemecahan masalah.
semakin bagus program, dilihat dari semakin kompleks program, tapi baris yang digunakan semakin sedikit (efisien)

Bahasa pemrograman
sekumpulan langkah instruksi untuk memberitahu komputer, apa yang harus dikerjakan oleh komputer

Kategori Bahasa pemrograman
    1. Bahasa mesin (bahasa yang hanya dipahami oleh mesin) (Bahasa biner)
    2. Bahasa Pemrograman Tingkat Rendah (Bahasa Assembly)
    3. Bahasa Pemrograman Tingkat Tinggi (C,C++,Pascal)

Eksekusi bahasa pemrograman
    Interpreter : 
        instruksi diterjemahkan ke dalam kode mesin baris demi baris dan dijalankan oleh komputer
        kesalahan di tengah program, akan membuat program berhenti
        contoh bahasa pemrograman : BASIC
        bahasa ini eksekusinya lebih lambat
    Compiler :
        semua instruksi diterjemahkan dahulu oleh kode mesin baris
        seluruh kode program sudah dipastikan kebenarannya 
        contoh bahasa pemrograman : C, Pascal, Java

cara kerja program c++
kita mengetikkan bahasa c++ di dalam program berupa file teks, supaya program paham, c++ compiler akan mentranslate, sehingga menjadi bahasa mesin yang membuat komputer paham
bahasa c++ -- bahasa assembly -- bahasa mesin

Aliran instruksi pada program
    1. Sekuensial : Berurutan
    2. Kondisional : Mengambil keputusan 
    3. Perulangan : Iterasi

Urutan membuat program
1. Start
2. Desain Flowchart/Algoritma 
3. Menulis program
4. Tes kebenaran program
5. Dokumentasi
6. Arsip

Algoritma 
   Structure Chart (menggambar aliran dan diagram program secara bercabang, dengan cara dipecah menjadi informasi yang lebih kecil)
    Pseudocode (garis besar program dan lebih mengutamakan logika program) (dengan kata-kata)

Membuat flowchart/diagram alir
Ter  langkah-langkah untuk menyelesaikan suatu tugas 
    tidak boleh ambigu, dapat dieksekusi tanpa harus bertanya, Berurutan

sarana:
    urutan kata-kata, gambar
    Logic flowchart (menggambar aliran dan diagram program)
Terminator (Persegi Panjang dengan sudut tumpul) = Start/End Program
Arah aliran (panah) = Arah aliran program
Preparation (Segi Enam) = inisiasi/pemberian nilai variabel, cont : i = 0, n = 1
Proses (Persegi Panjang) = proses yang dilakukan dalam komputer
Input/Output (Jajar genjang) = input output program
Predefined Process (Persegi panjang yang di dalamnya ada garis) = Proses subprogram (ada program di tempat  lain)
Decision (Diamond) = kondisi percabangan antara true atau false (kondisional) 
On page connector (bulat) = menghubungkan bagian flowchart yang terpisah pada satu halaman yang sama
Off page connector (shield) = menghubungkan bagian flowchart yang terpisah pada halaman berbeda 

Kondisionalnya terbagi menjadi 3
1. Kondisional 1 (Percabangan Tunggal)
    If (Benar) {
        Proses A then Proses Selanjutnya;
    }
    else {
        Proses Selanjutnya;
    }
Cth : menentukan syarat vaksin umur > 12
2. Kondisional 2 (Percabangan Majemuk)
    If (Benar) {
        Proses A then Proses Selanjutnya;
    }

    else if (Salah) {
        Proses B then Proses Selanjutnya;
    }
Cth : Menentukan apakah seorang dapat mengikuti ujian penerimaan karyawan, berdasar syarat usia dibawah 35 tahun

3. Kondisional 3 (Percabangan Bertingkat)
    If (Benar){
        Proses A;
    }

    else {
        if (Benar){
            Proses B;
        }

        else if (Salah) {
            Proses C;
        }
    }
Cth : Mencari nilai terbesar dari A,B,C

Perulangan terbagi menjadi 2
1. Perulangan 1
    For (int i=0, i=Benar, i++){
        Lakukan Proses
    }

Cth : Memasukkan 10 bilangan, Menjumlahkan 5 bilangan, Menghitung rata-rata (Intinya, ada increment)
2. Perulangan 2
    Do {
        Lakukan Proses
    } while (int i=10; i = Benar;i++)

Cth : Memasukkan 10 bilangan, Menjumlahkan 5 bilangan, Menghitung rata-rata (Increment ada, tetapi diletakkan setelah perintah dilakukan)

3. Perulangan bersarang
Di dalam perulangan, terdapat perulangan lagi. 
    For (int i=0, i=Benar, i++){
        Lakukan proses sampe I=Salah
            For (int j=0, j=Benar, j++){
                Lakukan proses sampe J=Salah
        }
    }
Cth : Memasukkan 3 nilai praktikum untuk 10 mahasiswa, memasukkan 5 nilai praktikum untuk 30 mahasiswa dan menentukan apakah mereka lulus atau tidak



Catatan pertemuan 2 (Pengenalan C++) dan Modul 1
C++ adalah bahasa pemrograman komputer yang di buat oleh Bjarne Stroustrup
Dan upgrade dari bahasa C yang dibuat oleh Bell labs
C++ -- C -- B

#include <iostream> //adalah file header, Istream untuk mengontrol fungsi input dan Ostream untuk mengontrol fungsi output
using namespace std; //standart library, berisi semua nama standart pada C++, bila tidak ada, maka mengetikkannya harus std :: cout 

int main() //wajib ada pada program c++
{ //awal blok fungsi main
    cout <<"Hello World"; //output tulisan hello world
    return 0; //pengembalian poin ke nilai 0, brrti program berjalan dengan sukses
} //akhir blok fungsi main

bits/stdc++.h include semua library yg ada di c++
#include adalah preprocessor directive, yaitu berfungsi untuk membaca file dengan fungsi yg dibutuhkan

ada 7 keyword dasar dalam mengatur data, 
int = bilangan numerik bulat (bukan desimal) 
    int jumlah = 10;
long = bilangan numerik yang panjang
    long populasi_dunia = 7800000000
short = bilangan numerik yg lebih pendek
    short banyak = 5
unsigned = bilangan numerik yang tidak akan bisa berubah, tpi biasanya pake const
    unsigned int jumlah_mahasiswa = 100;
Tapi, paling rekomen menggunakkan int saja


char = karakter yang hanya 1 huruf aja 
    char huruf = 'A';
string = karakter yang lebih banyak menggunakkan bnyak huruf
    string kota = "jember" ;
Harus diketik dengan tanda petik

float = bilangan numerik desimal yg lebih pendek
    float berat_badan = 60.2
double = bilangan numerik desimal yg lebih panjang
    double nilai_pi = 3.14159265359

Aturan penulisan variabel atau Identifier
1. Hanya terdiri atas huruf, digit, dan garis bawah
2. Tidak boleh diawali dengan digit
3. Tidak boleh menggunakkan reserved word
4. Tidak lebih dari 31 huruf
5. Tidak boleh ada spasi
6. Reserved word boleh digunakan jika digabung dengan underscore
7. Huruf besar, kecil dari nama variabel akan dibedakan oleh C++

Reseved Words/Keywords
adalah kata-kata yang sudah didefiniskan oleh bahasa pemrograman, dan sudah punya fungsinya masing-masing
conth : break, double, inline,static, while, case, do, else, int, char,

Deklarasi variabel, artinya menentukan variabel tersebut termasuk bagian dari fungsi apa
int hutang = 1000
bisa juga dengan cara
float harga, hutang, barang

Konstanta menyatakan nilai yang tetap, dan diketik dengan nama const
contoh : const float phi = 3.14;
atau dapat ditulis dengan nama #define phi = 3.14;
Keuntungan menggunakan #define apabila dibandingkan dengan const adalah kecepatan kompilasi, karena sebelum kompilasi dilaksanakan, kompiler pertama kali mencari simbol #define.
Juga ada yg disebut literal, literal adalah definisi dari nilai itu sendiri. contohnya 3.14, 1000, dll.
Dan konstanta adalah variabel konstan yang mewakili literal, dan tidak mungkin berubah jika ada const

Inisiasi variabel atau pemberian nilai pada variabel bisa dilakukan 2 hal, yaitu 
1. Pada saat pendeklarasian variabel 
    int a = 8;
2. Diluar pendeklarasian variabel
    int a;
    a = 8;

Perbedaan gaya penamaan pada c++ juga
int jumlahKota adalah gaya camel case
int JumlahKota adalah gaya pascal case

Fungsi cout digunakan untuk menampilkan output
dengan pengetikan cout << argumen 1 << argumen 2;
argumen dapat berisi apa saja, bisa string, variabel, konstanta. Dan perlu iostream 
contoh : bisa langsung cout << 20; maka akan langsung output 20. Tidak perlu memanggil variabel
kelebihan cout adalah, kita tidak perlu menggunakkan control string. control string itu berupa %d, %f. \n, \t (itu termasuk dalam bahasa C)

Fungsi cin digunakan untuk menginput data
dengan pengetikkan cin >> "Argumen 1" >> "Argumen 2"
argumen hanya berisi variabel, untuk mengisi variabel

Penggunaan bool harus menggunakkan Is
bool isRaining mewakili apakah hujan atau tidak
bool isRaining = true;
if (isRaining) {
    cout << "Hujan oi" << endl;
}
else {
    cout << "Gak hujan sekarang" << endl;
}
maka akan menghasilkan output "Hujan oi"

Ada 7 Operator yang bisa dipelajari 
1. Operator Assignment, Assign atau memberi nilai pada suatu variabel (=)
    cth : int a = 9
2. Operator aritmatika, + - * / %
3. Operator increment dan decrement, ++ dan --
4. Operator relasional, > < >= <= != ==
5. Operator Logika, && dan ||
6. Operator bitwise (pada biner), & (and), | (or), ^ (xor), ~ (not), << (left shift operator), >> (right shift operator)
7. Operator gabungan (gabungan dari operator diatas)
    cth : if (a < 10 && b > 15) {
            cout << "Yey bener" << endl;
    }
        else {
            cout << "salah" << endl;
        }

Catatan pertemuan 3 (Input Output)

Untuk keperluan dokumentasi dengan maksud agar program mudah dipahami
Dalam C++, suatu komentar dapat ditulis dengan dua cara:
1. Ditulis dengan diawali dengan tanda /* …. (untuk komentar lebih dari 1 baris) */
2. Ditulis dengan tanda // (untuk komentar 1 baris saja

Operator aritmatika terbagi menjadi 2, yaitu
Operator binary (operator yang melibatkan lebih dari 2 operand): * / % (mod) + -
Operator Unary (operator yang hanya butuh 1 operand): - +
Operand sendiri adlah objek atau kuantitas yang akan dihitung dalam matematika

Modulus adalah sisa pembagian bilangan
7 % 2 = 1, karena sisanya hanya 1
6 % 3 = 0, karena sisanya 0
Tapi, 1 % 5 = 1, diliat angka terdepannya

Urutan tingkatan operator
1. ( ) dievaluasi pertama, Jika bersarang atau di dalamnya ada lagi, maka akan dihitung yang paling dalam
2. * / % dievaluasi kedua, Jika urutannya sama, maka dievaluasi dari kiri ke kanan
3. - + dievaluasi ketiga, Jika urutannya sama, maka dievaluasi dari kiri ke kanan

Dalam c++, bilangan integer (bilangan bulat) dibedakan dengan bilangan desimal
100 adalah bil bulat bertipe int, short, long,
100.0, 100.0000 adalah bil desimal ber tipe double atau float

Hasil pembagiannya
double/double -> double (normal)
double/int -> double (normal)
int/double -> double (normal)
int/int -> int (angka dibelakang koma akan dihilangkan)

Bilangan desimal bila disimpan dalam bentuk bilangan int maka nilainya akan dipotong (3.14 -> 3)
Bilangan double/ float, bila ditempati oleh int, maka angka yg muncul akan berupa int. Tidak ada angka koma di belakangnya


Increment atau Decrement (Kenaikan atau Penurunan)
dapat diketik dengan cara x++ atau ++x atau y-- atau --y

Ada operator kombinasi, merupakan cara agar lebih cepat mengetikkan operator
x += 2 >> x = x + 2
x -= 2
x *= 2
x /= 2
x %= 2
x <<=2 >> x = x << 2
x >>=2 >> x = x >> 2
x &=2 >> x = x & 2
x | 2 >> x = x | 2
x ^= 2 >> x ^ 2

Operator Relasional
x == y artinya sama dengan
x != y artinya tidak sama dengan
x < y artinya x lebih kecil dari y
x > y artinya x lebih besar dari y
x <= y artinya x lebih kecil sama dengan dari y
x >= y artinya x lebih besar sama dengan dari y
Jika diketikkan, maka akan menghasilkan nilai true (1) atau false (0)

Operator Logika
! adalah simbol not
&& adalah simbol logika and (jika salah satunya ada yg False, maka hasilnya false)
|| adalah simbol logika or (jika salah satunya ada yg true, maka hasilnya true)

Berarti ada 3 operator
1. Operator Kombinasi 
2. Operator Relasional
3. Operator Logika

Fungsi Matematika
abs(X) adalah mencari nilai mutlak
cos(x) adalah mencari nilai cos
exp(x) adalah mencari nilai e^x
log(x) adalah mencari nilai log
pow(x,y) adalah mencari nilai x^y
sqrt(x) adalah mencari nilai akar dari x

Output 
Fungsi ini digunakan untuk menampilkan data
Output ada yg menggunakkan printf dan scanf
sebenarnya sama dengan cout dan cin, tetapi printf dan scanf lebih ribet karena bahasa C

harus menggunakkan
#include <stdio.h>
#include <conio.h>

sedangkan cout dan cin bisa digunakan dengan hanya menggunakkan #include <iostream>

printf(stringcontrol,argumen1,argumen2)
cout << argumen1 << argumen2;
%d artinya integer bertanda dalam bentuk desimal
%c artinya karakter tunggal
%s artinya string
%e artinya bil.float, notasi dengan e (eksponensial)
%f artinya bil.float,notasi desimal
%g artinya bilangan float / real, gunakan %f atau %e saja
%u artinya integer, desimal, unsigned
%o artinya integer, oktal, unsigned
%x artinya integer, heksadesimal, unsigned
contoh : printf("%c", 'a')

Lalu juga ada puts() (putstring)
dengan puts ("output");
contoh : puts ("Hello World!")
ada juga putchar ('A');
printf, puts dan putchar dapat digunakan pada bahasa pemrograman C++, tapi lebih efisien menggunakkan cout

Input
Fungsi ini digunakan untuk memasukkan data
ada scanf dan cin

Untuk scanf()
1. Jika variabelnya bertipe data dasar, maka gunakan &
2. Jika variabelnya adalah string, tidak menggunakan &
contoh : scanf ("%f", "&radius");

ada juga gets(), yaitu pasangan dari puts() yaitu getstring dan putsring
contoh : gets(nama)
getch() = input 1 karakter dan tidak ditampilkan
getche() = input 1 karakter, ditampilkan & tidak perlu Enter
getchar() = input 1 karakter, ditampilkan dan perlu Enter
dan menggunakkan conio.h dan stdio.h

sedangkan cin lebih mudah dan simple
ada beberapa cara untuk menginputkan suatu nila dengan cin
1. Dipisahkan dengan spasi (cin >> a >> b >> c;)
2. Dipisahkan dengan enter (cin >> a;)
(cin >> b;)
(cin >> c;)
3. Dipisahkan berdasarkan tipe data
int a;
double b;
cin >> a >> b; (memang bisa dilakukan bila berbeda tipe, tapi tidak disarankan)

Catatan Pertemuan 4 (Percabangan) dan Modul 2
percabangan/kondisional memberikan pilihan, apakah program tersebut dikerjakan atau tidak
dalam percabangan, terdapat KONDISI dan AKSI
    Kondisi = persamaan relasi yang bisa bernilai TRUE atau FALSE
    aksi = tindakan setelah diketahui nilai TRUE atau FALSE

Perintah percabangan dalam C++
if statement
    if (percabangan tunggal)
    if-else (percabangan majemuk)
    if-else-if (percabangan bertingkat)
switch statement

If (percabangan tunggal) 
if(condition){
    action}
If dapat diketikkan tanpa {}, tapi disarankan untuk mengetik dengan {}

Kondisional 1 (Percabangan Tunggal)
    If (Benar) {
        Proses A;
    }

Operator precedence atau urutan operator adalah urutan program mengerjakan bagian mana yang lebih dulu dikerjakan
1. Parentheses ( … )
2. Unary operators ! - +
3. Multiplicative operators * / %
4. Additive operators + -
5. Relational ordering < <= >= >
6. Relational equality == !=
7. Logical and &&
8. Logical or ||
9. Assignment =

Berarti
1. Tanda kurung
2. Operator unary (false, minus, plus)
3. Operator Aritmatika
4. Operator Relasional
5. Operator Logika
6. Operator Assignment

Ada juga penggunaan bool, sehingga kondisi akan menghasilkan nilai TRUE (1) dan FALSE (0)
bool dapat menggunakkan && (AND), || (OR), != (NOT)

if else (Percabangan Majemuk)
Kondisional 2 (Percabangan Majemuk)
    If (Benar) {
        Proses A;
    }

    else (Salah) {
        Proses B;
    }


if else if (Percabangan Bertingkat)
Kondisional 3 (Percabangan Bertingkat)
    If (Benar){
        Proses A;
    }

    else if (Salah) {
        Proses B;
    }

    else if (Salah) {
        Proses C;
    }


Percabangan bersarang (nested if)
suatu kondisi dimana terdapat pernyataaan yang berada didalam pernyataan yang lain.
if (<condition 1>){   
    if <condition 2>{
        if <condition 3>{
        <do A>}
    <do B>}
<do C>}

if (member){
    if (age < 18){
        fee = fee * 0.5;}
    if (age >=18){
        fee = fee * 0.8;}
}

else yang beruntai akan terhubung dengan if yang terdekat

Switch case (pengganti if else)
digunakan apabila terus menerus digunakan dan supaya lebih mudah
switch(ekspresi){
case 1: pernyataan;
break;

case 2: pernyataan;
break;

case 3: pernyataan;
break;

default: pernyataan;          
}

if digantikan dengan switch dan case, else digantikan dengan default

Peraturan switch case
1. Label pada case harus berupa konstanta
2. Konstanta pada label case berupa integer atau karakter.
    contoh : case 'a' (tapi harus pake char, tidak bisa int)
3. Setelah case, harus mengetikkan break
4. Tidak boleh terdapat 2 case yang mempunyai nilai label sama.
5. Dua label case dapat melakukan perintah yang sama.
    contoh : case 1:
             case 2:
             case 3:
             case 4:
             case 5:
            cout << "Ini adalah hari kerja" << endl;
6. default tidak harus ada.
7. default hanya satu dan diletakkan pada akhir pilihan.
Fun fact, kalian bisa mengetikkan
    switch (score/10){}, sehingga langsung membagi int score kita dengan angka 10

Ada Ternary operator, lebih simpel lagi, tapi hanya untuk if else saja
variabel = (kondisi) ? "instruksi TRUE" : "instruksi FALSE" ;
int x = -9;
string output = (x > 0) ? "Bilangan Positif " : "Bilangan Negatif";
cout << output << endl;
// output bernilai "Bilangan Negatif"


Catatan Pertemuan 6 dan 7 (Perulangan) 
Perulangan merupakan kondisi dimana terdapat sejumlah instruksi yang dikerjakan secara berulang-ulang. (loop)
Kumpulan instruksi yang dikerjakan berulang-ulang disebut juga dengan loop body

contoh masalah yang membutuhkan perulangan Menghitung, Penjumlahan, Pencarian, Pengurutan, Menampilkan tabel, Memasukkan data oleh user, Rangkaian proses

Dalam PERULANGAN ada 2 istilah, yaitu COUNTER dan KONDISI. PERULANGAN memiliki 2 jenis pengendali utama
1. COUNTER digunakan jika kita sudah menentukan berapa kali perulangannya 
2. KONDISI digunakan jika kita tidak tahu berapa kali perulangannya (sampai kondisi tercapai)
Perulangann sebenarnya hampir sama dengan percabangan, tetapi alur proses kembali ke titik yang pernah dilalui sebelumnya, sedangkan percabangan lanjut terus

Perulangan kuantitatif : (diketahui berapa kali dilakukan) 
Tampilkan suatu teks ke layar 10 kali.
Larilah mengelilingi lapangan ini sebanyak 5x.
Mie ini harus direbus selama 3 menit.

Perulangan kuantitatif : (tidak diketahui berapa kali dilakukan)
Tampilkan suatu teks ke layar sampai layar penuh dengan tulisan.
Larilah mengelilingi lapangan ini sampai anda lelah.
Selama belum matang, mie ini harus tetap direbus.

Loop dibagi menjadi 2, yaitu pre test loop dan post test loop
1. pre-test loop (tes kondisi sebelum loop) (Dilihat dulu kondisi loop)

while loop  ( Tergantung kontrol kondisi (variable condition))
    while (counter < 5){
        cout << "nilai counter : " << counter;
    }

for loop    (Jumlah perulangan sudah pasti (fixed condition))
    for (int i = 0; i < 5; i++){
        cout << "nilai counter : " << counter;
    }

2. post test loop (tes kondisi setelah loop) (dilakukan pertama kali, baru dicek kemudian)

do.. while loop
    do {
        int counter;
        cout << "nilai counter : " << counter;
        counter++;
    } while (counter < 5)

    Ketika tidak diketahui jumlah perulangan (sama dengan while loop)
    Perintah dalam perulangan dikerjakan minimal 1 kali
    Dapat dihentikan berdasarkan Data entry dari user

while (condition) {
    statement
}
condition bisa berupa operasi relasi atau true/false
jika condition true, maka statement dijalankan
jika condition false, maka akan berlanjut ke statement selanjutnya
Jika perintah yang akan diulang lebih dari satu perintah, maka
perintah-perintah tersebut harus berada dalam { }, seperti berikut;
while (condition){
    statement1;
    statement2;
    statement3;
}

do... while
do {
    statement1;
    statement2;
}
while (condition);

for loop
for (condition 1; condition 2; condition3){
    statement1;
    statement2;
}

condition 1 berisi nilai dari variabel, cnth : i = 0
condition 2 berisi aturan dari variabel, cnth : i > 5
condition 3 berisi increment atau decremeent, cnth : i++

DISCLAIMER : condition di dalam kurung (ataupun di luar kurung) tidak boleh diberi ;, maka dia tidak akan melakukan loop di loop body

Nested Loop
Jika di dalam suatu fungsi terdapat loop, entah itu while atau if, maka disebut nested loop (perulangan bersarang)
int i, j, n = 5;
  i = 1;
  while (i <= n){
    j = 1;
    while (j <= n){
       cout << j;
       j++;
    }
    cout << endl;
    i++;
  } 
/*output : 
12345
12345
12345
12345
12345*/

int i, j, n = 5;
  i = 1;
  while (i <= n){
    j = 1;
    while (j <= n){
       cout << i;
       j++;
    }
    cout << endl;
    i++;
  } 
  /*output : 
11111
22222
33333
44444
55555*/
    char i, j, n = 'E';
  i = 'A';
  while (i <= n)
  {
    j = i;
    while (j <= n)
    {
       cout << j;
       j++;
    }
    cout << endl;
    i++;
  }
/*output : 
ABCDE
BCDE
CDE
DE
E
*/

int i, j, n = 7;
  i = 1;
  while (i <= n)
  {
    j = 1;
    while (j <= n)
    {
      if (i==j || i+j==n)
        cout << '*';
      else 
        cout << ' ';
      j++;
    }
    cout << endl;
    i++;
  }
/*output : 
*     *
 *   *
  * *
   *
  * *
 *   *
*     *
*/

 int i, j, n = 5;
  for(i=1; i<=n; i++){
    for(j=1; j<=i; j++)
      cout << j;
    cout << endl;
  }
/*output : 
1
12
123
1234
12345
*/

int A,B,temp;
cin >> A;
cin >> B;

if (A < B){
    temp = A;
    A = B;
    B = A;
}

cout << A << " " << B;

Infinity loop
Terjadi jika kita salah memasukkan kode atau kondisi dalam loop selalu benar.
Jika kondisi selalu benar, maka akan terjadi infinity loop.

akan berhenti jika kita menginterupsi program
contoh :
int count = 1;
while (count <= 25)
{ cout << count;
    count = count - 1;
}

for (j=0; j>=0; j++) {
	cout << j << endl;
}

Kesalahan umum pada for 
    for (j = 0; j < n, j = j + 3) //harus menggunakkan titik koma, bukan koma
    for (j = 0; j < n) // harus ada 3 komponen pada pada bagian for loop
    for (j = 0; j >= 0; j++) // terjadi infinite loop karena kondisi selalu benar
    for (j = 0; j = 10; j++); //ada titik koma setelah kondisi for
cara untuk mengatasi infinity loop adalah dengan increment atau decrement, atau melihat kondisi loop

Control Flow
Dalam perulangan terdapat beberapa control flow yang bisa digunakan terutama dalam bahasa C++ seperti Continue, Break.
Continue artinya skip, jadi kalau kita menghitung suatu kondisi, maka tidak akan meng-skip kondisi tersebut
for (int i = 1; i <= 10; i++){
    if (i % 2 != 0) {
    continue; //skip nomor ganjil
    }
cout << i << " ";
} // output : 2 4 6 8 10

for (int i = 1; i <= 10; i++){
    if (i % 2 != 0) {
    cout << i << " ";
    }
} // output : 1 3 5 7 9 

Break artinya stop, akan keluar dari loop apabila suatu kondisi sudah ditemui
int angka[] = {3,4,7,2,8};
for (int i = 0; i < 5; i++){
    if (angka[i] > 5){
    cout << "Ditemukan: " << angka[i] << endl;
    break; 
    }
} //output : 7 (8 tidak akan muncul)

Catatan pertemuan 8 (Array)
Array = kumpulan data yang mempunyai tipe sama

Digunakan untuk menyimpan banyak data integer, contohnya 
int a1, a2, a3, a4, a5;
supaya lebih mudah diketik

int a[5] = {1,2,3,4,5};
float luas[5], harga_br[4], IPK_mhs[5];
array harus bertipe sama
dan diketikkan sebutuhnya aja, jika butuh 40 ya ketik 40 aja
elemen"" di dalam array akan disimpan dalam memory yg saling berdekatan


Ada dua macam array;
1. Array 1 dimensi
    hanya mempunyai satu baris penggambaran atau satu kategori data
        contoh : data dosen informatika, jumlah mahasiswa berdasar tahun
2. Array multi dimensi
    mempunyai lebih dari 1 baris penggambaran atau 1 kategori data
    dibuat dengan kolom dan baris
        contoh : jumlah mahasiswa berdasar tahun dan prodi (2 dimensi)
                jumlah mahasiswa berdasarkan tahun, prodi, kelas (3 dimensi)

Syntax array :
<type> <arrayName> [<array_size];
int jumlahMahasiswa [5];

Contoh penggunaan array:
menentukan nilai min dan max, mengurutkan nama siswa berdasarkan huruf, mencari yang plaing tinggi

Deretan objek dapat dimanipulasi tanpa harus menamakan tiap"" objek
Elemen array diakses dengan yg namanya index
index itu yg [3]

indeks pada c++ selalu dimulai dari 0, dan berakhir dengan n-1
a[0] memiliki posisi 0, dst

int Ar[10];
int Ar[3] = 1;
int x = Ar[3]
maka, x = 1

int index, ar[10];  // array for 10 integers 
		// Read in 10 elements. 
   cout << "Enter 10 integers: "; 
		for(index = 0; index < 10; index ++)
			cin >> ar[index];
		cout << endl;
   cout << "The integers are "; 
		for(index = 0; index < 10; index ++)
	 		cout << ar[index] << " ";
		cout << endl;


untuk menghitung hasil rata"", tinggal menggunakkan
const int JUM_DATA =5;
for (int i=0; i<JUM_DATA; i++){
dTotal += suhu[i];	
cout << "suhu rata-rata = " << dTotal / double(JUM_DATA) << endl;
}

array dapat di inisiasikan dengan cara
int n[5] = {1,3,5,7,9};

Karena jumlah elemen tidak diketahui, deklarasi dapat ditulis
int n[] = {1,3,5,7,9};
char c[] = {'a','b','c'};

apabila kita punya suatu array, tapi tidak diketahui pasti ukurannya, bisa menggunakkan
int length = sizeof(arr) / sizeof(arr[0]);

sehingga, bila dilakukan loop
    // Iterasi melalui array dan cetak setiap elemen
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << std::endl;
    }

int list[10] = {8, 5, 12};
berarti, list [0] = 8; list [1] = 5; list [2] = 12
tapi, sisanya 0

untuk menyalin array, tidak semudah dengan
list = MyList.

tapi harus
for (i = 0; i > 5; i++)
list[i] = MyList[i]

untuk mencari nilai tertinggi
double max = myList[0];
for (int i = 1; i < ARRAY_SIZE; i++) 
{
  if (myList[i] > max) max = myList[i];
}

Catatan Pertemuan 8 (Array 2D)

Array 2D terdiri dari baris dan kolom, array dari array 1D
bentuknya
<identifier> <nama> [banyak baris] [banyak kolom];
sama seperti matriks

Untuk melakukan inisialisasi, maka
<identifer> <nama> [banyak baris] [banyak kolom] = {1,2,3,  4, 5,6}
contoh :
int data [2] [3] = {1,2,3,  4,5,6}

Untuk mempermudah dalam membaca data inisialisasi dari suatu array, data masing-masing baris dapat dipisahkan dalam tanda { }.
const int NUM_ROWS = 3, NUM_COLS = 6;
Char table[NUM_ROWS][NUM_COLS]={
            {'a','b','c','d','e','f'},
            {'g','h','i','j','k','l'},
            {'m','n','o','p','q','r'}
            };

contoh
float Distance[2][4] = {44.14, 20.52, 96.08, 48.78, 6.28,  68.04, 64.55, 634.12 };	
	
Atau

float Distance[2][4] = 
{{44.14, 20.52, 96.08, 48.78}, 
 {6.28, 68.04, 64.55, 634.12 }};

Jika data yang dimasukkan kurang dari yg dibutuhkan (ada 15 data yg harus masuk, tpi hanya ada 13), maka sisa data akan dimasukkan angka 0
Tapi, jika data yang dimasukkan kelebihan, maka matriks akan error

Bila kita tidak memasukkan banyaknya baris, maka matriks akan menyesuaikan
int matriks [][5] = {1,2,3,4,5},
                    {6,7,8,9,0},
                    {10,11,12,13,14}
maka baris menyesuaikan
kalau kelebihan, matriks juga akan menyesuaikan, dengan cara menambahkan angka 0 pada data yang kurang

char pada array bisa diketikkan dengan cara
char table[2][3] = {
            { 'a', 'b', 'c'},
            { 'd', 'e', 'f'}
};

atau

char table[2][3] = {"abc", "def"};
jika lebih akan error

Jika char kurang, maka akan dikosongi oleh komputer

untuk array 2d, bila ingin menampilkan array, memerlukan nested loop (looping di dalam looping)
float Distance[2][4] = {44.14, 720.52, 96.08, 468.78,  6.28, 68.04, 364.55, 634.12};
	cout<<"Anggota array";
	cout<<endl<<"Distance[0][0] : "<<Distance[0][0];
  cout<<endl<<"Distance[0][1] : "<<Distance[0][1];
  cout<<endl<<"Distance[0][2] : "<<Distance[0][2];
  cout<<endl<<"Distance[0][3] : "<<Distance[0][3];
  cout<<endl<<"Distance[1][0] : "<<Distance[1][0];
  cout<<endl<<"Distance[1][1] : "<<Distance[1][1];
  cout<<endl<<"Distance[1][2] : "<<Distance[1][2];
  cout<<endl<<"Distance[1][3] : "<<Distance[1][3];


supaya tidak sulit, maka

float Distance[2][4] = { 
						{ 44.14, 720.52,  96.08,  468.78 },
			            { 6.28,  68.04, 364.55, 634.12 }
                        };

	cout<<"Anggota array";
	for(int i = 0; i < 2; ++i)
		for(int j = 0; j < 4; ++j)
		  cout << endl <<"Distance ["<<i<<"] ["<<j<<"] : "<< Distance[i][j];

untuk inner looping, melakukan looping terhadap kolomnya (j)

untuk menginput data pada array 2d, bisa dilakukan dengan nested looping juga
const int NUM_ROWS = 3, NUM_COLS = 6;
for (int row=0; row < NUM_ROWS; row++){
  for (int col = 0; col < NUM_COLS; col++){
     cin >> table[row][col]; 
  }
}

Catatan Pertemuan 8 (String)
string adalah rangkaian karakter (nama)
untuk mendeklarasikan string, perlu banyak char

char Nama[20]
char JudulBuku[40]

string disimpan dalam sebuah array yang bertipe char dan akan diakhiri dengan \0
contoh, Hello
Hello terdiri atas 6 karakter H,E,L,L,O dan \0
\0 artinya empty string

Jika kita mengetikkan char Name[] = "Turing" (pengganti dari string)
contoh : char Hari[] = "Hari apa sekarang"
maka, array akan menyesuaikan

char 'Q' dengan string "Q" berbeda
char "Hello" dengan string "Hello" berbeda

Jika kita mengoutput kan char, maka spasi akan menjadi pembatas (kena potong)
Maka, biar tidak terpotong, bisa menggunakkan getline

getline, fungsinya untuk membaca seluruh baris dan bisa membatasi karakter yg keluar
cin.getline(variable, banyaknya huruf);
contoh penggunaan
cin.getline (A_string, 80);
cout << A_string << endl;

walaupun A_string[80];, ktia tetap bisa membatasi cin dari string dengan 
cin.getline (A_string,50); 

 char lastName[30], firstName[30];
 cout << "Enter a name <last,first>:\n";
 cin.getline (lastName, sizeof(lastName), ',');
 cin.getline (firstName, sizeof(firstName));
 cout << "Here is the name you typed:\n\t|"
		 << firstName << " " << lastName << "|\n";


Untuk menyimpan beberapa string, diperlukan array multidimensi (2d)
Untuk array 2 D string:
dimensi pertama merupakan jumlah string pada variabel tersebut
dimensi kedua menunjukkan banyaknya karakter untuk masing-masing string. 
char NamaMhs[4][10] = { “Ananda", “Budi", “Charles", “Doni" }; 

String.h merupakan library yang menyimpan fungsi-fungsi yang digunakan untuk menangani string
Beberapa fungsi string yang sering digunakan antara lain :
strlen() (string length)
Untuk mengetahui banyaknya karakter pada suatu string tanpa menghitung \0
contoh : s = strlen(string1) //maka, s = 5

strcpy() (string copy)
menyalin satu string ke string yang lain
contoh : s = strcpy (string1,string2) maka, dari string 2 dicopy ke string 1
atau strcpy (string1, "Hello World!") // maka, string1 = Hello World!

strncpy() (string copy)
menyalin sejumlah karakter dari string yang lain.
contoh : s = strncpy (string1, string2, 3) maka, dari string 2 dicopy ke string 1 berupa 3 karakter 
atau strncpy (string1, "Hello World!",3) //maka, string1 = Hel

strcat() (string concatenation)
Untuk meggabungkan dua string
contoh : s = strcat (string1, string2) maka, dari string 2 digabungkan/dirangkaikan dengan string 1
atau strcat (string1, "Hello World!") // maka, string1 = string1Hello World!

strncat() (string concatenation) 
Untuk menambahkan sejumlah karakter pada satu string kesuatu string yang lain.
contoh : s = strncat (string1, string2, 3) maka, dari string 2 digabung/dirangkaikan dengan string 1 sebanyak 3 karakter
atau strncat (string1, "Hello World!",4) // maka, string1 = string1Hell

strcmp() (string compare)
Membandingkan 2 string 
contoh s = strcmp (string1, string2) maka, dari 2 string tersebut dibandingkan
Jika, string 1 > string 2, maka hasilnya positive integer (1)
Jika string 1 = string 2, maka hasilnya 0
Jika string 1 < string 2, maka hasilnya negative integer (-1)
untuk melakukan perbandingan, bisa menggunakkan :
if (!strcmp(string1,string2)) 
      cout << "Yes they are same!"; //yang awalnya 0, karena !0 = 1, maka cout << "Yes.."

stricmp (string compare)
Membandingkan 2 string tanpa memandang besar kecilnya huruf
contoh s = stricmp (string1, string2)
hasil cout akan sama seperti strcmp

strrev (string reverse)
Memutarbalikkan string
contoh s = strrev (string1), maka isi dari string1 akan kebalik
// maka, string 1 = 1 gnirts

strlwr (string lowecase)
Membuat tulisan di string menjadi huruf kecil semua
contoh s = strlwr (string1), maka ABCDEF diubah menjadi abcdef

strupr (string uppercase)
Membuat tulisan di string menjadi huruf besar semua
contoh s = strupr (string1), maka abcdef menjadi ABCDEF

Array bisa disusun menjadi 3 dimensi (3 tingkat)
string parents[2][2][2] = {{
    { "sugeng", "sukimin" },
    { "dengklek", "sucipto" }
    },

    {
    { "clarissa", "larissa" },
    { "siti", "freya" }
    }
};

2 matriks,2 baris, 2 kolom
sehingga, untuk mengcout semua matriksnya
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
for (int k = 0; k < 2; k++) {
cout <<parents[i][j][k] << endl;
}
}
}

Di dalam c++, terdapat 2 string
    Cstring = String dari bahasa C
    std string = string dari C++
bedanya, cstring menggunakkan \0, yang menandakan akhir dari string, serta menggunakkan library strlen, strcpy, strcmp
std string tidak menggunakkan \0, lebih fleksibel, dan menggunakkan length(), append(), find()

Cstring menggunakkan char[] = 
std string menggunakkan string =

fun fact, jika biasanya kita mengetikkan 
cout << nama << " " << pekerjaan;

juga bisa mengetikkan dengan cara
cout << nama + " " + pekerjaan;

string juga sebenarnya adalah array, karena denga bukti
string nama = "Freya"
cout << nama[0] << endl; // F
nama[0] = 'K';
cout << nama << endl; //Kreya

spasi akan membatasi string, sehingga bila kita ketik dengan spasi, maka output tidak akan muncul semua.
Untuk mengatasi hal ini, maka diperlukan
getline(cin.nama)

contoh :
string Nama;
getline(cin.nama)
cout << Nama << endl;

maka, nama akan lengkap

length() 
fungsinya untuk mengukur panjang string
cout << Nama.length() << endl; //maka, Nama = 5

append()
fungsinya untuk menggabungkan 2 string 
string1.append(string2)
cout << string1 // maka, string1 = string1 string 2

find()
fungsinya untuk mencari satu huruf atau kata pada string
string1 = "Ini adalah contoh string"
string1.find(contoh)
maka, string akan menemukan contoh dan output 1


Catatan Pertemuan 9 (Fungsi)
Fungsi digunakan untuk membagi program menjadi program yang lebih kecil sehingga lebih mudah dikerjakan
int main() menggunakkan fungsi"" diatasnya untuk menyelesaikan masalah

Kelebihan Fungsi
1.Fungsi memisahkan konsep (apa yang dikerjakan) dari implementasi (bagaimana mengerjakan).
2.Fungsi membuat program lebih mudah dimengerti. 
3.Fungsi dapat dipanggil beberapa kali dalam program yang sama. 
4.Reuse kode.

Fungsi dalam c++ terbagi menjadi 2
internal (user-defined) dan external functions

cth : internal functions
    int tambah(int a,int b) {
        return a + b;
        }
cth :External functions 
    abs, rand, sqrt, dikelompokkan dalam library khusus contoh, iostream, stdlib, math, dsb
    
    abs itu absolute (membuat angka negatif menjadi positif)
        int A = -10 {
        int absoluteA = abs(a);
        }

    srand untuk memilih angka acak
        srand(time(0)){
        int randomNum = rand();
        }

    sqrt untuk square root
        int angka = 25{
        int akar = sqrt(angka);
        }
Untuk menggunakkan fungsi, bisa menggunakkan #include <math.h>
    Harus mengetahui bagaimana cara memanggil fungsi tersebut.
    Harus mengetahui apa yang dihasilkan oleh fungsi tersebut. 

Nama lain dari fungsi adalah subroutine atau procedure
Fungsi terkadang tidak perlu diberikan nilai tertentu, fungsi yang tidak punya nilai adalah tipe void 
    contoh : int counter (void);

Dan fungsi juga memiliki parameter
    Parameter adalah nilai yang diberikan pada fungsi untuk diproses.
    Masing-masing parameter mempunyai tipe.

    int tambah(int a, int b) {
    return a + b; 
    }
    maka, parameternya ada 2, yaitu a dan b. Parameter adalah variabel yang diletakkan pada fungsi untuk menerima argumen yang dilewatkan 

Bentuk umum definisi fungsi :
	<type> <function name>(<parameter list>){
		<local declarations> 
		<sequence of statements> 
	}
    int absolute (int x){ 
     if (x >= 0)    return x; 
     else 		    return -x;
    }

Untuk memanggil fungsi :    
    <function name>(<argument list>)
    int distance = absolute(-5);

Lalu ada argumen,
    int angka1 = 5;
    int angka2 = 3;

    angka1 dan angka2 adalah argumen,  Argumen adalah variabel yang sudah punya nilai

Lalu ada prototipe, prototipe digunakan untuk mendeklarasikan parameter input dan output dari fungsi. 
	<type> <function name>(<type list>);
    int tambah(int a, int b);

sehingga,
// Prototipe fungsi
int tambah(int a, int b);

int main() {
    // Parameter (a dan b) pada pemanggilan fungsi tambah
    int angka1 = 5;
    int angka2 = 3;

    // Argumen (angka1 dan angka2) pada pemanggilan fungsi tambah
    int hasilPenambahan = tambah(angka1, angka2);

Fungsi terbagi menjadi 4, yaitu
1. Tanpa return value, tanpa parameter
    Bentuk ini digunakan jika fungsi tidak memberikan hasil dan untuk melakukan tugasnya tidak memerlukan nilai dari fungsi yang memanggil.
        Contoh:
    void tulis()
    {
     cout<<“ Teknik Informatika”<<endl;
     cout<<“ Unesa Surabaya”;
    }

    main()
    {    
    tulis();   
    }

2. Tanpa return value, mempunyai parameter
    Bentuk ini digunakan jika fungsi tidak memberikan hasil dan untuk melakukan tugasnya memerlukan nilai dari fungsi yang memanggil.
    Contoh:
    void Luas_Segi3(float alas, float tinggi)
    {   float Luas;
        cout<<“Luas Segitiga = ”;
        Luas = 0.5*alas*tinggi;
        cout<< Luas;
    }
    main()
    {
    Luas_Segi3(10, 20);
    }

3. Dengan return value, tanpa parameter
    Bentuk ini digunakan jika fungsi memberikan hasil dan untuk melakukan tugasnya tidak memerlukan nilai dari fungsi yang memanggil.
    int input_sisi();
    void main()
    { int sisi;
	    sisi = input_sisi();
    }

    int input_sisi()
    {   
    int s;
    cout<<“ Masukkan sisi persegi = ”;  
    cin>>s;
    return s;
    }

4. Dengan return value, dengan parameter
Bentuk ini digunakan jika fungsi memberikan hasil dan untuk melakukan tugasnya memerlukan nilai dari fungsi yang memanggil.
    contoh :
    float  Hitung_LuasSegi3(float alas, float tinggi){   
return 0.5*alas*tinggi;
}
 void main()
{  float L = Hitung_LuasSegi3(10,20); }

fun fact, bisa memberikan perintah dengan return

Fungsi dibagi menjadi 2, Fungsi berdasarkan parameter, yaitu
1. Pass By Value
Nilai dari argumen fungsi pemanggil disalin ke parameter fungsi yang dipanggil
Argumen dari fungsi pemanggil akan mempunyai nilai seperti semula setelah eksekusi fungsi.  
contoh :
// Tes pengaruh fungsi pada parameternya
void Increment(int Number) { 
   Number = Number + 1; 
   cout << "The parameter Number is: " << Number << endl; 
} 

void main() { 
  int I= 10;     
  
  Increment(I); //argument variable 
  cout << "The variable I is: " <<I<< endl; 
  Increment(35); //argument constant 
  cout << "The variable I is: " <<I<< endl; 
  Increment(I+26); //argument expression 
  cout << "The variable I is: "<<I<< endl;         
} 
Jadi, nilai dari parameter dapat berubah-rubah, tetapi nilai dari argumen akan tetap setelah fungsi dieksekusi

2. Pass By References
Fungsi juga dapat didefinisikan dengan melewatkan sebuah reference ke variable.
Hal ini dinamakan call-by-reference, fungsi dapat merubah variabel pemanggil secara langsung.
Variabel reference adalah nama alternatif nama untuk variable. 

Untuk mendeklarasikan variable reference diawali dengan tanda '&':
contoh :
int &foo;
double &b;
char &c;

int main() {
    int count = 1; // Ini adalah variabel lokal dalam fungsi main
    int &b = count; // b adalah referensi ke variabel count

    cout << "b is " << b << endl;
    b++;
    cout << "count is " << count << endl;

    return 0;
}
brrti, count copas dari b, kalau b berubah, maka count juga berubah


Supaya fungsi mempunyai multiple output, maka harus menggunakan pass by reference. 
void SumAve (double, double, double&, double&); 
int main ( ) { 
    double x, y, sum, mean; 
    cout << "Enter two numbers: "; 
    cin >> x >> y; 
    SumAve (x, y, sum, mean); 
    cout << "The sum is " << sum << endl; 
    cout << "The average is " << mean << endl;
	  cout<<x; 
    return 0;
} 
void SumAve(double no1, double no2, double& Sum, double& average) { 
        Sum = no1 + no2;  no1=15;
        average = Sum / 2;  } 

Array sebagai parameter
Array selalu dikirimkan by reference.
Tanda “[ ]” dalam parameter menunjukkan bahwa variabel tersebut adalah array.  
    
