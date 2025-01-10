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
    langkah-langkah untuk menyelesaikan suatu tugas 
    tidak boleh ambigu, dapat dieksekusi tanpa harus bertanya, Berurutan

sarana:
    urutan kata-kata, gambar
    Logic flowchart (menggambar aliran dan diagram program)
    Structure Chart (menggambar aliran dan diagram program secara bercabang, dengan cara dipecah menjadi informasi yang lebih kecil)
    Pseudocode (garis besar program dan lebih mengutamakan logika program) (dengan kata-kata)

Membuat flowchart/diagram alir
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

Cth : Memasukkan 10 bilangan, Menjumlahkan 5 bilangan, Menghitung rata-rata (Increment ada, hanya saja diletakkan increment ditaruh di sebelum perulangan)

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
unsigned = bilangan numerik bulat positif
    unsigned int jumlah_mahasiswa = 100;
Tapi, paling rekomen menggunakkan int saja


char = karakter yang hanya 1 huruf aja 
    char huruf = 'A';
string = karakter yang lebih banyak menggunakkan bnyak huruf
    string kota = "jember" ;
Harus diketik dengan tanda petik

float = bilangan numerik desimal yg lebih pendek
    float berat_badan = 60.2
    float bisa diketikkan huruf f di akhir nilai
    float berat_badan = 60.2f
double = bilangan numerik desimal yg lebih panjang
    double nilai_pi = 3.14159265359
    double nilainya lebih akurat daripada float 

di c++ 11, c++ sudah berusaha seperti python, dengan menambahkan tipe data auto
auto x = 1;
auto y = 6.4;
auto z = "Cornelius";

tapi, harus segera dilakukan inisiasi
tidak boleh kalau dideklarasikan dulu, lalu diberi nilai //pasti error

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
abs(x) adalah mencari nilai mutlak
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
// output = "Bilangan Negatif"


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
  if (myList[i] > max){
    max = myList[i];}
}

untuk c++11, bisa menggunakkan yg auto
yg awalnya 
double prices[] ={5.99, 3.99, 9.99, 13.99};
for (int i = 0; i < 5; i++){
    cout << x << endl;
}

menjadi

double prices[] ={5.99, 3.99, 9.99, 13.99};
for (double x : prices){
    cout << x << endl; //maka menampilkan semua dalam array
}
atau
for (auto x : prices){
    cout << x << endl; //maka menampilkan semua dalam array
}

bisa dikombinasikan menjadi
double prices[] ={5.99, 3.99, 9.99, 13.99};
    double max = 0;
for (double x : prices){
    if (max < x){
        max = x;
    }
}

cout << max;


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

walaupun A_string[80];, kita tetap bisa membatasi cin dari string dengan 
cin.getline (A_string,50); 

 char lastName[30], firstName[30];
 cout << "Enter a name <last,first>:\n";
 cin.getline (lastName, sizeof(lastName), ',');
 cin.getline (firstName, sizeof(firstName));
 cout << "Here is the name you typed:\n\t|"
		 << firstName << " " << lastName << "|\n";

atau menggunakkan
getline(cin, A_string) //khusus untuk string


Untuk menyimpan beberapa string, diperlukan array multidimensi (2d)
Untuk array 2 D string:
dimensi pertama merupakan jumlah string pada variabel tersebut
dimensi kedua menunjukkan banyaknya karakter untuk masing-masing string. 
char NamaMhs[4][10] = { "Ananda", "Budi", "Charles", "Doni" }; 

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

untuk string, apabila kita ingin membuat for loop dan ingin membuat batasan loop, maka menggunakkan arr.length()
for (int i = 0; i < arr.length; i++){
    cout << arr[i] << endl;
}

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
    char nama[] = "Louis";
std string tidak menggunakkan \0, lebih fleksibel, dan menggunakkan length(), append(), find()
    string nama = "Louis"

fun fact, jika biasanya kita mengetikkan 
cout << nama << " " << pekerjaan;

juga bisa mengetikkan dengan cara
cout << nama + " " + pekerjaan;

string juga sebenarnya adalah array, karena dengan bukti
string nama = "Freya"
cout << nama[0] << endl; // F
nama[0] = 'K';
cout << nama << endl; //Kreya

spasi akan membatasi string, sehingga bila kita ketik dengan spasi, maka output tidak akan muncul semua.
Untuk mengatasi hal ini, maka diperlukan
getline(cin,nama)

contoh :
string Nama;
getline(cin,nama)
cout << Nama << endl;
maka, nama akan lengkap

length() 
fungsinya untuk mengukur panjang string
cout << Nama.length() << endl; //maka, Nama = 5

append()
fungsinya untuk menggabungkan 2 string 
string1.append(string2)
cout << string1 // maka, string1 = string1
string 2

find()
fungsinya untuk mencari satu huruf atau kata pada string
string1 = "Ini adalah contoh string"
string1.find(contoh)
maka, string akan menemukan contoh dan output 1


Catatan Pertemuan 9 (Fungsi)
Fungsi digunakan untuk membagi program menjadi program yang lebih kecil sehingga lebih mudah dikerjakan
int main() menggunakkan fungsi"" diatasnya untuk menyelesaikan masalah

Kelebihan Fungsi
1.Fungsi memisahkan konsep (apa yang dikerjakan) dari implementasi (bagaimana mengerjakan)
2.Fungsi membuat program lebih mudah dimengerti
3.Fungsi dapat dipanggil beberapa kali dalam program yang sama 
4.Reuse kode

Fungsi dalam c++ terbagi menjadi 2
internal (user-defined/buatan user ) dan external functions

cth : internal functions
    int tambah(int a,int b) {
        return a + b;
        }

cth :External functions 
    abs, rand, sqrt, dikelompokkan dalam library khusus contoh, iostream, stdlib, math, dsb
    
    abs itu absolute (membuat angka negatif menjadi positif)
        int A = -10 {
        int absoluteA = abs(A);
        }

    srand untuk memilih angka acak
        srand(time(0));
        int randomNum = rand();
    
    sqrt untuk square root
        int angka = 25{
        int akar = sqrt(angka);
        }

Untuk menggunakkan fungsi, bisa menggunakkan #include <math.h>
    Harus mengetahui bagaimana cara memanggil fungsi tersebut.
    Harus mengetahui apa yang dihasilkan oleh fungsi tersebut. 

Nama lain dari fungsi (pada bahasa pemrograman lain) adalah subroutine atau procedure
Fungsi terkadang tidak perlu diberikan nilai tertentu, fungsi yang tidak punya nilai adalah tipe void 
    contoh : void Hello(){
        cout << "Hello World";
    }

Dan fungsi juga memiliki parameter
    Parameter adalah nilai yang diberikan pada fungsi untuk diproses.
    Masing-masing parameter mempunyai tipe.

    int tambah(int a, int b) {
    return a + b; 
    }
    maka, parameternya ada 2, yaitu a dan b. Parameter adalah variabel yang diletakkan pada fungsi untuk menerima argumen yang dilewatkan 

Bentuk umum definisi fungsi :
	<type> <function name>(<parameter list>){
		<instruction>
	}

    int absolute (int x){  // nilai absolut
     if (x >= 0)    return x; 
     else 		    return -x;
    }

Untuk memanggil fungsi :    
    <function name>(<argument list>)
    int absolut = absolute(-5);

Lalu ada argumen,
    int angka1 = 5;
    int angka2 = 3;

    angka1 dan angka2 adalah argumen,  Argumen adalah nilai yg diberikan pada fungsi 

Penempatan fungsi dibagi menjadi 2
    Cara Deklarasi 
    (Fungsi diletakkan di bawah int main dan menggunakkan prototype)

    Cara Definisi
    (Fungsi diletakkan sebelum int main)

Lalu ada prototype, prototype digunakan untuk mendeklarasikan fungsi agar bisa diletakkan di bawah int main
	<type> <function name>(<type list>);
    int tambah(int a, int b);

sehingga,
// Prototipe fungsi
int tambah(int, int);

int main() {
    // Argumen untuk fungsi tambah 
    int angka1 = 5;
    int angka2 = 3;

    // Input argumen pada fungsi tambah 
    int hasilPenambahan = tambah(angka1, angka2);
    cout << hasilPenambahan;
}
// Fungsi tambah diletakkan di bawah int 
int tambah(int a, int b){
    return a + b;
}
Jika definisi fungsi sebelum main(), tidak perlu prototype.  
prototype digunakan agar compiler bisa mengenal fungsi 

Fungsi terbagi menjadi 4, yaitu
1. Tanpa return value, tanpa parameter
    Digunakan jika fungsi tidak mengembalikan nilai dan untuk melakukan tugasnya tidak memerlukan parameter dan argumen(untuk cout biasanya)
        Contoh:
    void tulis(){
     cout<<"Teknik Informatika"<<endl;
     cout<<"Unesa Surabaya";
    }

    int main(){    
    tulis();   
    }

2. Tanpa return value, mempunyai parameter
    Digunakan jika fungsi tidak mengembalikan nilai dan untuk melakukan tugasnya memerlukan parameter dan argumen
    Contoh:
    void Luas_Segi3(float alas, float tinggi){   
        float Luas;
        cout<<"Luas Segitiga = ";
        Luas = 0.5*alas*tinggi;
        cout << Luas;
    }

    int main(){
    Luas_Segi3(10, 20);
    }

3. Dengan return value, tanpa parameter
    Digunakan jika fungsi mengembalikan nilai dan untuk melakukan tugasnya tidak memerlukan parameter dan argumen
    int input_sisi();
    int main(){ 
        int sisi;
	    sisi = input_sisi();
    }

    int input_sisi(){   
    int s;
    cout<<" Masukkan sisi persegi = ";  
    cin>>s;
    return s;
    }

4. Dengan return value, dengan parameter
    Digunakan jika fungsi mengembalikan nilai dan untuk melakukan tugasnya memerlukan parameter dan argumen
    contoh :
    float  Hitung_LuasSegi3(float alas, float tinggi){   
    return 0.5*alas*tinggi;
    }

    int main(){  
        float L = Hitung_LuasSegi3(10,20); 
        }

setiap fungsi yg memiliki tipe data selain void, pasti akan mengembalikan Nilai

parameter bisa diberikan nilai secara default pada fungsinya (disebut default argument)
int area (int x, int y = 1){
    return x*y
}
tapi, bila y diberi argumen, tetap akan diganti dengan nilai Argumen yg dimasukkan
ketika membuat default argument, apabila kita menggunakkan prototype, maka prototype yg harus diberi default argument
    sedangkan fungsi aslinya tidak perlu diberi default argument lgi

int volume_kubus (int p, int l, int t = 1);
int main(){
    cout << "volume kubus = " << volume_kubus(3,5); // maka tidak akan error
}
int volume_kubus (int p, int l, int t){
    return p * l * t;
}

Fungsi dibagi menjadi 2, Fungsi berdasarkan parameter, yaitu
1. Pass By Value
Nilai dari argumen akan disalin ke parameter
walaupun nilai dalam parameter dan fungsi berubah-rubah, tetapi tidak akan mempengaruhi nilai argumen
contoh :
// Tes pengaruh fungsi pada parameternya
void Increment(int Number) { 
   Number = Number + 1; 
   cout << "The parameter Number is: " << Number << endl; 
} 

int main() { 
  int I= 10;     
  
  Increment(I); //argument variable "The parameter Number is: 10"
  cout << "The variable I is: " <<I<< endl; // "The variable I is 10"
  Increment(35); //argument constant "The parameter Number is: 10"
  cout << "The variable I is: " <<I<< endl; // "The variable I is 35"
  Increment(I+26); //argument expression "The parameter Number is: 10"
  cout << "The variable I is: "<<I<< endl; // "The variable I is 36"        
} 
Jadi, nilai dari parameter dapat berubah-rubah, tetapi nilai dari argumen akan tetap setelah fungsi dieksekusi

2. Pass By References
Fungsi juga dapat didefinisikan dengan sebuah reference ke variable lain.
Hal ini dinamakan call-by-reference, fungsi dapat merubah variabel argumen
Variabel reference artinya variabel tersebut memiliki nilai yg sama dengan variabel lain

Jadi, kalau Pass By Value tidak berubah poinnya, kalau Pass By Reference, nilainya ikt berubah 
Untuk mendeklarasikan variable reference diawali dengan tanda '&' / reference : 
contoh :
int &foo;
double &b;
char &c;

nilai tersebut bisa berubah karena lokasi memori yg sama
kelebihan dari fungsi ini adalah efisiensi memori, dan nilai dari argumen tidak dicopy tapi menunjuk langsung pada alamat Nilai
kelemahan dari fungsi ini adalah perubahan apapun akan berdampak pada argumen maupun fungsi, sehingga debugging akan sulit

int main() {
    int count = 1; // Variabel count berdiri sendiri
    int &b = count; // b adalah referensi ke variabel count atau b =  count 

    cout << "b is " << b << endl;
    b++;
    cout << "count is " << count << endl;

    return 0;
}
brrti, count copas dari b, kalau b berubah, maka count juga berubah

void Increment(int& Number){ 
	Number = Number + 1; 
	cout << "The parameter Number: " 
       << Number << endl; 
} 
int main(){ 
	int I = 10; 
	Increment(I);  
 	cout << "The variable I is:" <<I<<endl;
}
bila yg sebelumnya Variable I tidak berubah, maka variabel I berubah

Supaya fungsi mempunyai multiple output, maka harus menggunakan pass by reference. 
void SumAve (double, double, double&, double&); 
int main ( ) { 
    double x, y, sum, average; 
    cout << "Enter two numbers: "; 
    cin >> x >> y; 
    SumAve (x, y, sum, average); 
    cout << "The sum is " << sum << endl; 
    cout << "The average is " << average << endl;
	  cout<<x; 
    return 0;
} 
void SumAve(double no1, double no2, double& Sum, double& average) { 
        Sum = no1 + no2;  no1=15;
        average = Sum / 2;  } 
mengapa harus diberi reference? agar nilai sum dan average ikut berubah dengan nilai Sum dan Average

berbeda dengan dibawah ini. Sum dan Average tidak dibuat menjadi parameter
void SumAve (double,double);
int main(){
    double x,y;
    cin >> x >> y;
    SumAve (x,y);
}

void SumAve(double no1, double no2){
    double Sum = no1 + no2;
    cout << "The sum is " << Sum << endl;
    double Average = Sum / 2;
    cout << "The average is " << Average << endl;
}

Array sebagai parameter
Array selalu dikirimkan by reference.
Jika fungsi tidak harus merubah setiap elemen array, maka boleh menggunakkan const dalam parameter

ketika menggunakkan array sebagai parameter, harus menyisipkan int jmlh pada parameter
atau menggunakkan const int ARRAY_SIZE = value;
agar menjadi pembatas ketika menggunakkan for loop

void GetList(int ar[], int jmlh){
    for (int i = 0;i < jmlh; i++){
        cout << "Masukkan data ke - " << i+1 << endl;
        cin >> ar[i];
    }
}

void CoutList(int ar[], int jmlh){
    for (int i = 0; i < jmlh; i++){
        cout << "data ke - " << i + 1 << " adalah "<< ar[i] << endl;
    }
}

int main(){
int Number[6];
GetList(Number, 6);
CoutList(Number,6);
}

contoh lain
const int ARRAY_SIZE = 5;
void addArray(int x[], int y[], int z[]){
    for(int i = 0; i < ARRAY_SIZE; i++){
        z[i] = x[i] + y[i];
    }
}

void inputArray(int arr[]){
    for(int i = 0; i < ARRAY_SIZE; i++){
        cin >> arr[i];
    }
}

int main(){
int list1[ARRAY_SIZE];
int list2[ARRAY_SIZE];
int total[ARRAY_SIZE];

inputArray(list1);
inputArray(list2);
addArray(list1,list2,total);

for(int i = 0; i < ARRAY_SIZE; i++){
    cout << total[i] << " ";
}
}

Overloading Function
overloading = menimpa 
Fungsi bisa memiliki nama yg sama, asalkan memiliki parameter dan argumen yg berbeda (bisa berlaku untuk return function)
void sum (int x, int y){
    cout << x + y;
}

void sum (double x, double y){
    cout << x + y;
}

int main(){
    sum (6,5);
    sum (54.6,43.5);
}

atau 

void sum (auto x,auto y){
    cout << x + y;
} // tapi akan muncul warning, karena hanya berlaku untuk c++20

cth :
int luas_kotak (int x, int y){
    int luas = x * y; //luas_kotak(5,5)
    return luas;
}

int luas_kotak (int x){
    int luas = x * x; //luas_kotak(5)
    return luas;
}

double luas_kotak (double x, double y){
    double luas = x * y;//luas_kotak(5.8,7.3)
    return luas; //fun fact, kalau misalkan gak ada fungsi khusus double, maka angka di dalam argumen akan dikonversi menjadi int terlebih dahulu
}

double luas_kotak (double x){
    double luas = x * x; //luas_kotak(5.9,5.9) 
    return luas; 
}

overloading function tidak bisa berlaku apabila 
    ada 2 fungsi dengan nama dan parameter yg sama, tapi beda return dan membuat bingung program (akan menghasilkan error keambiguan)   

int demo(int x) {
    return x;
}

double demo(int x) {
    return x/2;
}

Catatan Pertemuan 10 (Scope)
Tanda {..} adalah block/ruang dari instruksi di dalamnya
Scope anggapannya adalah sebuah daerah dari variabel tertentu pada suatu bagian program
Scope dimulai dari awal deklarasi, dan berakhir sampai akhir dari scope tersebut 
    contoh :{
        a = 100;
        cout << a << endl;
    }
    a = 200;
    cout << a << endl;
Variabel yg sama dapat dideklarasikan pada block yg berbeda (karena sudah berbeda lokasi memori )

Ada yg namanya Variabel Lokal 
Parameter dan variabel yg ada di dalam fungsi disebut variabel lokal dan hanya berlaku disitu saja
variabel lokal tidak dapat digunakan/dipanggil lagi diluar fungsi atau setelah fungsi tersebut berakhir 

contoh :
void Two(int A, int B, int D) {
  B = 21; int C = 23; // Local variable
  cout<<A<< " " <<B<< " " <<C<< " "<< D<<endl;
}
void One(int A, int B, int C) {
  int D, f=100;    // Local variable
  A = 10; B = 11; C = 12; D = 13;
  cout<<A<< " " <<B<< " " <<C<< " " <<D<< " " <<f<< endl;
  Two(A,B,C);
}
int main() {
  int A,B,C,D,z;// Local variable
  A = 1; B = 2; C = 3; D = 4;z=10;
  One(A,B,C);
  cout <<A<< " " <<B<< " " <<C<< " " <<D<< " " << z << endl;
  Two(A,B,C);
  cout <<A<< " " <<B<< " " <<C<< " " <<D<< " " << z << endl; return 0;
}
maka output =
10 11 12 13 100 (dalam fungsi One)
10 21 23 12 (dalam fungsi Two)
1 2 3 4 10 (dalam int main)
1 21 23 3 (dalam fungsi Two)
1 2 3 4 10 (dalam int main)

Variabel Global = variabel yg didefinisikan/ ditulis di luar fungsi , termasuk fungsi main (int main)
biasanya ditulis di awal program

variabel global dapat diakses di manapun di bagian program (scopenya unlimited)
Setiap fungsi dapat merubah dan mengakses nilai variabel global
const double PI = 3.14159;
double area(double radius);
double volume(double radius); 

int main(){
    double radius, luas,  vol;
    cout << " Enter a radius";
    cin >> radius;
    luas = area(radius);
    vol = volume(radius);

    cout << "Radius = " << radius << endl;
    cout << "Luas = " << luas << endl;
    cout << "Volume= " << vol << endl;
		return 0; }

double area(double radius, double PI = 500)
{	
    cout << PI;
    return(PI * radius * radius);
}

double volume(double radius)
{	return((4.0/3.0)* PI * radius * radius * radius);
}

kalau misalkan ada variabel global dan ada variable scope memiliki tipe data dan nama yg sama. maka nilai dari variable global tidak akan berpengaruh
apabila di dalam fungsi variable scope berubah (karena sudah berbeda alamat memori)

Kita bisa membuat bracket di dalam int main walaupun tanpa ada fungsi 
int main(){
    int x = 10;
    {
        int x = 20;
    }
}
Catatan Pertemuan 11 (Rekursif)
Rekrusif adalah fungsi yg memanggil dirinya sendiri dan digunakan sebagai pengganti dari looping/iterasi (lebih ke arah while)
berbeda dengan loop yang selalu menggunakkan variabel yang berubah"" untuk mengatur jalannya Iterasi

Algoritma rekursif memecah suatu masalah menjadi masalah yg lebih kecil 
dengan algoritma
    if this is simple case
        solve it
    else 
        redefine the problem using recursion

Rekursif bersifat finite (terbatas)

Rekursif terdiri atas 2 bagian  
    1. Simple case(Base case) : kondisi untuk menghentikan rekursif
    2. Recursive step : kondisi untuk melakukan rekursif

contoh:
    int multiply (int m, int n){
        if(n == 1){
            return m;
        }

        else{
            return m + multiply(m, n-1);
        }
    }

    int fibonacci (int n){
        if (n == 0){
            return 0;
        }

        else if (n == 1){
            return 1;
        }

        else{
            return fibonacci(n-1) + fibonacci(n-2);
        }
    }

Persamaan rekursif dan iterasi:
    1. sama"" bentuk perulangan
    2. sama"" melakukan pengecekan terhadap kondisi perulangan

Perbedaan:
    1. Pada rekursif, terdapat recursive step, sedangkan pada iteratif terdapat decrement

Kelebihan rekursif:
    1. rekursif lebih efisien
    2. rekursif memecah masalah sulit menjadi lebih mudah 

Kekurangan rekursif :
    1. sulit dipahami
    2. memerlukan stack yg besar (stack overrun)


Catatan Pertemuan 13 (Pointer)

Setiap variabel punya slot lokasi pada memori yang ukurannya tergantung pada tipe datanya 
    lokasi tersebut digunakan untuk menyimpan nilai

Pointer adalah variabel yg digunakan untuk menyimpan alamat dari sel memori itu
cth : int a = 100; //a disimpan pada memori 1024
    cout << a; //a = 100
    cout << &a; // &a = 1024

Kegunaan dari pointer adalah pointer bisa mengakses sebuah nilai melalui alamatnya lgsg tanpa harus mengcopy/menggandakan nilai tersebut
Kekurangan dari pointer adalah debugging yg lama dan lebih rumit 

& akan memberi alamat memori dari suatu variabel 
pointer menggunakkan * (Dereferencing operator)
apabila suatu variabel terdapat *, maka dia otomatis adalah pointer
int a = 100;
int *b = &a; // ini pointer
akan error apabila salah satu tidak ada (saling melengkapi)

pointer juga sebenarnya adalah variabel 
nilai dari pointer pasti adalah alamat dari variabel tersebut 
int a = 100;
int *p = &a;
int **q = &p;
kalau misalkan ingin menampilkan nilai sesungguhnya dari suatu variabel (bukan alamat), maka harus cout dengan * (dereferencing operator)
cout << a << endl;
cout << *p << endl;
cout << **q << endl; //pointer dari pointer p

int a = 100;
int *p = &a; //alamatnya 1024
cout << a << &a << endl; // 100 1024
cout << p << *p << &p <<endl; // 1024 100 1034
deferencing operator tidak bisa digunakan pada variabel yg tidak punya pointer (polos)

pointer bisa menunjuk variabel yg lain
int a = 100, b = 200, c = 300;
int *x = &a, *y = &b, *z = &c;
y = x; //maka pointer y akan menunjuk variabel a
b = *z // maka variabel b akan mengambil nilai c 
*y = *z // karena y menunjuk variabel a, maka pointer y mengambil nilai dari pointer z, berarti a mengambil nilai c

kalau misalkan 
y = z // maka pointer y akan bebarengan dengan pointer z, maka pointer y menunjuk variabel c

contoh fungsi menggunakkan pointer 
void kali(int x,int *p){
	*p = 2 * x;
}

int main(){
	int a = 16;
	kali(9, &a); //karena awalnya menggunakkan &a, lalu bertemu dengan pointer, maka menampilkan angka normal
    cout<<a; // maka a = 18;
	return 0;
} 

Ada yg namanya Variabel Reference
Variabel Reference adalah tambahan variabel yang memiliki alamat yg sama dengan variabel tertentu 
int a = 100;
int &ref = a;

cout << ref;// pasti akan sama alamatnya
cout << &a; // pasti akan sama alamatnya

variabel reference adalah variabel alternatif untuk suatu variabel. Dan apabila nilai dari variabel reference diganti, maka nilai variabel utamanya akan ikut berganti
int a = 100;
int &ref = a;
ref = 200;
// maka a = 200;
variabel reference digunakan untuk parameter passing pada suatu fungsi (sama dengan pointer)

Perbedaan fungsi dengan argumen pointer (pass by pointer) dan fungsi dengan argumen reference (pass by reference)
Pointer 
void Balik(char *ptr1, char *ptr2){
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){
    char y = 'y';
    char n = 'n';
    Balik (&y, &n);
    cout << y << n;
}

void kuadrat (int * x){
    *x = (*x) * (*x);
}
atau 
void kuadrat (int *x){
    *x *= *x;
}
Fungsi pointer harus menggunakkan void, karena nilai yang menggunakkan pointer akan digantikan. 
Sehingga tidak memerlukan return
dengan pointer, kita tidak perlu membuat variabel baru yg hanya akan dipakai sekali 

Variabel Reference
void Balik(char &ref1, char &ref2){
    char temp = ref1;
    ref1 = ref2;
    ref2 = temp; 
}

int main(){
    char y = 'y';
    char n = 'n';
    Balik (y, n);
    cout << y << n;
}
Fungsi reference juga menggunakkan void

void kuadrat (int &x){
    x = x * x;
}

void kuadrat (int &x){
    x *= x;
}
Pointers dan Array 
Nama variabel array sebagai pointer adalah alamat elemen pertama array
    tiap elemen pada array, lokasi memorinya akan berbeda. Tetapi tetap konstan dan konsisten disitu
Array adalah pointer konstan 

int main(){
    int a[5] ={1,2,3,4,5};
    cout << a[0] << endl; 
    cout << *a << endl; // maka akan mengeluarkan list paling awal, yaitu 1 
    cout << &a << endl;
    cout << a << endl; //maka akan mengeluarkan alamat
}
terkecuali pada array, apabila kita ingin mengeluarkan output berupa *a, maka bisa (tidak bisa untuk tipe data biasa)


pointer dapat menggantikkan array
int main(){
    a[5] = {1,2,3,4,5};
    int *p = a; //tidak perlu ditambahkan &a
    cout << a[0] << *p; //maka akan mengeluarkan list paling awal juga 
}

untuk dereferencing semua elemen array
menggunakkan *(a + n), karena  *(a+n) == a[n]
int main(){
    int a[5] = {1,2,3,4,5};
    for (int i = 0; i <= 5; i++){
        cout << *(a + i) << endl;
    }
}

int main(){
    int tgl_lahir[] ={31,12,2004};
    int *ptgl_lahir = tgl_lahir;

    cout << "diakses dengan pointer" << endl;
    cout << *ptgl_lahir << endl; // 31
    cout << *(ptgl_lahir + 1) << endl; // 12
    cout << *(ptgl_lahir + 2) << endl; //2004

    cout << "diakses dengan array biasa" << endl;
    cout << tgl_lahir[0] << endl; // 31
    cout << tgl_lahir[1] << endl; // 12
    cout << tgl_lahir[2] << endl; // 2004
}

NULL Pointer 
NULL adalah pointer kosong 
jika NULL diakses, maka akan terjadi error
int *p;
int p = 0;
cout << p << endl; // 0
cout << &p << endl; // alamat
cout << *p << endl; // error
atau, kalau diketikkan 
int *p = nullptr;
maka bila di cout, akan menampilkan alamat kosong // 0x0

Pointer untuk Array 2D
table[i] = &table[i][0] mengacu alamat baris ke i
int table[3][4] = {{1,2,3,4}, 
{5,6,7,8},{9,10,11,12}};

for (int i = 0; i < 3;i++){
    for (int j = 0; j < 4; j++)(
        cout << *(*(table +i)+ j));
    cout << endl;
}
maka output nya 
1 2 3 4
5 6 7 8
9 10 11 12

Dynamic memory
ada satu operator baru, yg disebut new
int size = 8;
int *p = new int [size];

maka, p akan menjadi suatu array yg mampu menyimpan 8 nilai

int size = 8;
int *p = new int [size];

p[0] = 1;
p[1] = 11;
p[2] = 111;

cout << *(p + 1) // maka mengeluarkan angka 11

dan bisa dihapus dengan command delete[]
maka, semua angka di dalam array akan hilang

Catatan Pertemuan 14 (Struktur)
Setiap elemen pada 1 array harus memiliki tipe yg sama 
tapi terkadang, ada saat dimana kita harus membuat array dengan tipe yg berbeda"" (data diri). Dibuatlah record

Record dalam c++ adalah struct, dan tiap elemennya disebut member(kalau record nama membernya field)
struct dataDiri {
    string namaLengkap;
    int tglLahir;
    int bulanLahir;
    int tahunLahir;
}

Struktur = pengelompokan variabel yg berbeda tipe data dalam satu kelompok yg sama 
struktur adalah user-defined type (tipe data yg dibuat oleh user)
elemen dari struktur boleh berbeda"" tipenya
elemennya bisa tipe data primitif, maupun berupa struct lainnya
struct nilaiMahasiswa {
    string Nama[20];
    Tanggal ulangtahun; //tapi sebelumnya, struct Tanggal ulangtahun harus di deklarasikan terlebih dahulu
    int course[10];
    int tugas[5];
    int pr[3];
    int ujian[2];
}

ketika membuat struct, nama dari struct itu adalah tipe data dari struct itu sendiri
struct adalah kata kunci

cara mendeklarasikan struct ada 3 cara:
1. Deklarasi variabel bertipe struct
    struct date today ;
2. Deklarasi struct diikuti dengan variabel setelah memberi member
    struct date {
        int tanggal;
        int bulan;
        int tahun;
    } today;
3. Deklarasi struktur tanpa kata kunci struct
    date today; // apabila sebelumnya sudah dideklarasikan 

maka, bila selesai. today adalah variabel yg bertipe date
struct date; dengan struct date today; itu berbeda
struct date; biasanya dideklarasikan pada awal program dan akan memberitahu bahwa akan ada variabel yg menggunakkan tipe data struct date //dan juga dideklarasikan membernya
struct date today; biasanya digunakan apabila struct date sudah dideklarasikan sebelumnya //dan tidak akan bisa berjalan apabila sebelumnya struct date tidak dideklarasikan

cara mengakses struct
struct StudentRecord{
		char name[50];
		int id;
		char dept[30];
		char gender;
	};
StudentRecord Student1, Student2;
student1.id = 23051204085; //menggunakkan . lalu nama membernya 
struct bisa digunakan sebagai fungsi (dan bisa mengembalikan nilai)

struct StudentRecord {
    char name [50];
    int id;
    char dept [30];
    char gender;
};

int main(){
    StudentRecord Student1;
    strcpy (Student1.name , "Cornelius Louis Nathan"); // bisa mengisi data dengan menggunakkan strcpy (variabel.member, nilai);
    Student1.id = 23051204085;
    strcpy (Student1.dept , "Engineering Informathics"); // hanya berlaku apabila tipe datanya berupa char 
    Student1.gender = 'M';

    cout << "The student is ";
    switch (Student1.gender){
    case 'M': cout << "Mr. ";
        break;
    case 'F': cout << "Ms. ";
         break;
    }
    cout << Student1.name;
} //output : The student is Mr. Cornelius Louis Nathan

bahkan kita bisa sebenarnya mengcopy semua nilai dari member pada suatu variabel ke variabel lain
Student2 = Student1;
strcpy (Student2.name , "Clarine Lucy Nathania");
Student1.gender = 'F';

Nested struct
member suatu struct dapat bertipe struct
struct date{
    int tanggal;
    int bulan;
    int tahun;
};

struct ultah{
    string nama;
    struct date kelahiran; //memang boleh, tapi harus tetap mendeklarasikan variabel baru untuk tipe data struct di dalam nested struct
}; // nested struct, struct di dalamnya juga bisa diakses 

ultah orang1;
    orang1.nama = "Louis";
    orang1.kelahiran.tanggal = 31;
    orang1.kelahiran.bulan = 12;
    orang1.kelahiran.tahun = 2004;

cout << orang1.nama << ": " << orang1.kelahiran.tanggal << "-" << orang1.kelahiran.bulan << "-" << orang1.kelahiran.tahun;

inistiasi struct / pemberian nama juga bisa dilakukan dengan cara yg berbeda
struct date{
    int tanggal, bulan, tahun;
} kelahiran = {31,12,2004}; // hanya berlaku untuk struct yg sudah didefinisikan sebelumnya 

struct date{
    int tanggal, bulan,tahun;
};
date kelahiran = {31,12,2004};

struct date kelahiran{
    int tanggal = 31;
    int bulan = 12;
    int tahun = 2004;
}

  struct zodiak { 	
	char nama[11];	
	int tgl_awal;		
 	int bln_awal;	
	int tgl_akhir;		
 	int bln_akhir;	
}; 
  	zodiak bintang ={"Sagitarius", 22,11,21,12};
  	int tgl, bln, thn;

    cin >> tgl >> bln >> thn;
    if ((tgl >= bintang.tgl_awal && bln == bintang.bln_awal) || (tgl <= bintang.tgl_akhir && bln == bintang.bln_akhir)){ // harus or, agar apabila ada 1 yg salah, maka akan tetap benar
        cout << "Bintang anda adalah " << bintang.nama;
    }

    else{
        cout << "Bintang anda bukan " << bintang.nama; 
    }

Array struct
berbeda dengan array pada umumnya, array struct memiliki elemen yg tiap datanya berbeda""
elemen dari suatu array bahkan dapat bertipe struct 
struct date{
    int tanggal;
    int bulan;
    int tahun;
};

struct ultah{
    string nama;
    struct date kelahiran;
};

int MAKS = 5;
struct ultah orang[MAKS];
for (int i = 0; i < MAKS; i++){
    cout << "Nama : "; 
    cin >> orang[i].nama; //indeks diletakkan pada variabel yg adalah array

    cout << "tanggal : ";
    cin >> orang[i].kelahiran.tanggal;
    
    cout << "bulan : ";
    cin >> orang[i].kelahiran.bulan;

    cout << "tahun : ";
    cin >> orang[i].kelahiran.tahun;
}

inisiasi struct array dapat dilakukan dengan cara yg berbeda
struct abc{
    int a;
    char b;
} arr[2] = {{1,'a'}, {2,'b'}};

atau

struct abc{
    int a;
    char b;
};
abc arr[2] = {{1,'a'}, {2,'b'}};

struct transkrip{
    int nim[10];
    int nilai[20];
} mhs[50];

for (int i = 0; i < 50; i++){
    cin >> mhs[i].nim;
    for(int j = 0; j < 20;j++){
        cin >> mhs[i].nilai[j];
    }
}

berbeda dengan
struct transkrip{
    int nim[10];
    int nilai[20];
} mhs;
cin >> mhs.nim;
for(int i = 0; i < 20;i++){
    cin>> mhs.nilai[i];
}

struct dan Fungsi
member dari struct bisa dijadikan sebagai argumen fungsi (yg masuk menjadi pass by value)

void todayDate(int dd, int mm, int yy){
    string months[] = {"Wrong Months", "January", "February", "March", "April", "May", 
    "June","July", "August", "September", "October","November", "December"};

    cout << "Today is " << dd << " " << months[mm] << " " << yy;
}
int main(){
    struct date{
        int day; int month; int year;
    }today; //kita bisa mendeklarasikan struct dan variabelnya langsung dengan cara seperti ini

    cin >> today.day >> today.month >> today.year;
    todayDate(today.day,today.month,today.year);
}

struct bahkan bisa dijadikan sebagai parameter fungsi 
struct date {int day; int month; int year;};
void todayDate(struct date now){
    string months[] = {"Wrong Months", "January", "February", "March", "April", "May", //untuk dibuat jadi parameter, maka tipe data struct harus memiliki variabel
    "June","July", "August", "September", "October","November", "December"};
    
    cout << "Today is " << now.day << " " << now.month << " " << now.year;
} 
int main(){
    struct date today;
    cin >> today.day >> today.month >> today.year;
    todayDate(today);
}

struct juga bisa menjadi fungsi 
struct point {
    int x;
    int y;
};

struct point edit(point p){
    (p.x)++;
    p.y += 5;
    return p;
}

void print(point p){
    cout << p.x << " " << p.y << endl;
}

int main(){
    point p1 = {50,100};
    point p2 = {20,40};

    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);
}

untuk mendefinisikan struct, terkadang bisa menggunakkan typedef //ingat, mendefinisikan struct, bukan variabel dari struct
typedef struct {
    int day;
    int month;
    int year;
} date;
date today = {31,12,2004};

sebenarnya bisa langsung struct date{
    int day;
    int month;
    int year;
} today;
date today = {31,12,2004};

definisi struct harus diakhiri dengan ;
jika member struct adalah array, maka member harus menggunakkan index
    today.month[i]; 
jika variable struct adalah array, maka variable harus menggunakkan index juga
    today[i].day;
index digunakan untuk variabel yg adalah array 

member struct boleh memiliki nama member yg sama dengan struct lain 
karena berbeda scope

struct parts{
    int qty;
} part;

struct testScores{
    int qty; //karena berbeda scope
} scores;
part.qty = 50;
scores.qty =50;

tapi, kalau untuk variabel dengan nama yg sama, walaupun tipe data nya berbeda. Tetap tidak bisa

Catatan Pertemuan 15 (File)
Stream I/O bersifat sementara, apabila program mati/selesai. Maka nilai/data akan hilang 
Variabel memang dapat menyimpan nilai, tetapi bersifat sementara

stream input adalah cin
stream output adalah cout 

agar data/nilai dapat tersimpan walaupun program mati/selesai, maka membutuhkan file (eksternal)
    bentuk penyimpanan eksternal = harddisk, flashdisk, cloud
    bentuk penyimpanan sementara (untuk data variabel dan stream I/0) = memori

File adalah kumpulan data yang disimpan dalam disk dan membentuk satu kesatuan 
file terdiri atas kumpulan Record
masing"" Record terdiri atas beberapa field dan setiap field terdiri atas bit atau byte 

Jenis File 
File Teks 
    File yg berisikan kumpulan karakter ASCII (American Standart Code for Information Interchange)  yg disusun menjadi beberapa baris
        Aslinya, file kalau dibuka secara mentah, maka akan terlihat rangakaian angka"" atau kode 
        ASCII sebenarnya kumpulan dari angka"" (contoh a diwakilkan dengan angka 97), yg setiap angka akan diterjemahkan secara visual menjadi karakter
    File yg isinya bisa langsung dibaca dan diedit menggunakkan editor teks biasa (notepad, wordpad)
File Biner
    File yg berisikan kumpulan data yg masing"" elemennya berupa data 8 bit (1 byte)
    File memiliki pola penyimpanan dalam disc berbentuk biner, seperti pada memori (RAM) di komputer
    File biner adalah file yg bukan line-oriented
    File yg memiliki format khusus hanya dapat dibaca dengan apli tertentu ( .pdf, .dat)

Jadi, file untuk mengetik bahasa pemrograman adalah file teks
tapi file setelah dicompile akan menjadi file biner 

untuk melakukan operasi file pada c++, menggunakkan header fstream.h atau standart library fstream
fstream terdiri atas 3
ofstream, ifstream, fstream

untuk membaca isi file, menggunakkan ifstream 
ifstream ins;
ins.open ("infile.dat");
untuk menulis isi file, menggunakkan ofstrem
ofstream ins;
outs.open ("infile.dat");

Pemrosesan file terbagi menjadi banyak tahap
1. membuka file 
    membuka file untuk membaca isi file (ifstream)
    membuka file untuk menulis isi file (ofstream)
2. membaca isi file (ifstream) 
3. menulis isi file (ofstream)
4. menutup file
5. end of file (EOF)

Sebelum file dapat diproses, file harus dibuka terlebih dahulu 
maka, perlu mendefinisikan objek file yg nantinya digunakan untuk mengakses file 
tujuan dari membuka file ada 2
    1. membuka file untuk dibaca 
    2. membuka file untuk ditulis 

kalau membuka file untuk ditulis (ofstream)
output stream dari program ke file
    1. jika file blm dibuat, maka create new
    2. jika file sebelumnya ada, tapi sudah ada isinya. Maka yg lama akan ditimpa dengan yg baru (rewrite)

untuk pendeklarasian nya
ofstream nama_objek;
nama_objek.open ("nama_file");

ofstream Buka;
Buka.open ("Text.txt");
atau
ofstream Buka ("Text.txt");

kalau membuka file untuk dibaca (ifstream)
input stream dari program ke file
mempersiapkan file untuk dibaca 
membaca data dalam file dan menampung isinya dalam variabel
    hati"" dengan deklarasi variabel, type harus sesuai isi file

untuk pendeklarasian nya
ifstream nama_objek;
nama_objek.open (nama_file);

ifstream Buka;
Buka.open ("Text.txt");
atau
ifstream Buka ("Text.txt");

setelah selesai, maka perlu ditutup. Dengan fungsi bernama close()
Buka.close();

Parameter Mode Open
Ios :: app  // jadi, kalau sebelumnya file sudah memiliki isi, maka tidak akan ditimpa, tapi dilanjut ke baris berikutnya
    menyambung data di akhir file sehingga penulisan data dilakukan setelah akhir file
Ios :: ate
    meletakkan pointer di akhir file
Ios :: binary
    membuka file dalam bentuk biner
Ios :: in
    membuka file untuk input 
Ios :: nocreate
    membuka file tanpa membuat file baru, jika file yg dibuka tidak ada, maka error
Ios :: noreplace
    membuka file tanpa mengganti file yg sudah ada, jika file sudah ada, maka open akan gagal (kecuali mode ate atau app)
Ios :: out 
    membuka file untuk output
Ios :: truct 
    membuang semua isi file
Ios :: trunc
    membuat file jika tidak ada, bila ada maka akan dihapus dan dibuat baru 

Menulis File (Memasukkan data dari program ke file)
sama seperti menulis dengan cout  //kebalikan dengan input
string isi; 
cin >> Isi;
Buka << Isi;

Membaca File 
sama seperti menulis dengan cin 
string isi;
Buka >> isi;

contoh ofstream dan ifstream
#include <Iostream>
#include <fstream>
using namespace std;

int main(){
cout << "Notepad : " << endl;
    ofstream notepad_out ("file.txt");
        for (int i = 1; i <= 10; i++){
            notepad_out << "Baris ke - " << i << endl;
        }
    notepad_out.close();

cout << "Data telah selesai disimpan" << endl;
cout << endl;

    ifstream notepad_in ("file.txt");
    string line;

    while (getline(notepad_in,line)){
        cout << line << endl;
    }
    notepad_in.close();
}

atau 
latihan ofstream (membuka file untuk ditulis)
    cout << "Latihan membaca file" << endl;
    ofstream latihan ("datateks.txt");
    for (int i = 0; i <= 10; i++){
        latihan << "Belajar file" << endl;
    }
    latihan.close();

bila dipisah 

latihan ifstream (membuka file untuk dibaca)
    const int MAX = 80;
    char buffer[MAX + 1];

    cout << "Latihan menampilkan teks" << endl;
    ifstream latihan ("datateks.txt");
    while (latihan){
        latihan.getline(buffer,MAX)
        cout << buffer << endl;
    }
    latihan.close();

kalau misalkan ingin menggunakkan ofstream dan ifstream secara bersamaan dalam satu program nama objek harus dibuat berbeda satu dengan yg lain
ofstream = latihan_out
ifstream = latihan_in

ketika menggunakkan ifstream, bisa menggunakkan 
    string line 
    while (getline(notepad_in, line)){ //getline string line di dalam objek notepad_in
        cout << line;
    } //looping while akan looping sampai line nya habis di file 
    atau 
    char buffer[MAX]
        while (latihan){
        latihan.getline(buffer,MAX); //di dalam objek latihan, getline char buffer sebanyak max karakter
        cout << buffer << endl; //looping sampai hbis
    }

contoh ofsteam dengan parameter mode open
int main(){
    char nim[10]; 
    char nama[20];
    float ipk;
    int i = 0;

    ofstream mhsFile ("datamhs.dat", ios::app); // file tidak akan ditimpa, tapi dilanjut di bawahnya 
    
    if(!mhsFile){
        cerr << "File tidak dapat diakses" << endl; //cerr singkatan dari cout error 
        exit(1); // program keluar dengan kode 1
    }

    while (int i < 5){
        cout << "nim : "; cin >> nim;
        cout << "nama : "; cin >> nama;
        cout << "ipk : "; cin >> ipk;
        mhsFile << nim << " " << nama << " " << ipk << endl;
        i++; 
    }
    mhsFile.close();
}

contoh ifstream dengan parameter mode open
int main(){
    char nim[10];
    char nama[20];
    float ipk;
    int i = 0;

    ifstream mhsFile ("datamhs.dat", ios::in);

    if (!mhsFile){
        cerr << "File tidak dapat diakses" << endl;
        exit(1);
    }

    while (mhsFile >> nim >> nama >> ipk){
        cout << nim << " " << nama << " " << ipk << endl;
        i++;       
    }
}
yg bila digabung 
int main(){
    char nim[10]; 
    char nama[20];
    float ipk;

    ofstream mhsFile ("datamhs.dat", ios::app);
    
    if(!mhsFile){
        cerr << "File tidak dapat diakses" << endl; //cerr singkatan dari cout error 
        exit(1); // program keluar dengan kode 1
    }

    while (int i < 5){
        cout << "nim : "; cin >> nim;
        cout << "nama : "; cin >> nama;
        cout << "ipk : "; cin >> ipk;
        mhsFile << nim << " " << nama << " " << ipk << endl;
        i++; 
    }
    mhsFile.close();

        ifstream InmhsFile ("datamhs.dat", ios::in);

    if (!InmhsFile){
        cerr << "File tidak dapat diakses" << endl;
        exit(1);
    }

    while (InMhsFile >> nim >> nama >> ipk){
        cout << "nim = " << nim << endl;
        cout << "nama = " << nama << endl;
        cout << "ipk =  " << ipk << endl << endl;
        i++;       
    }
}

ada suatu fungsi yg bisa digunakan apabila pembacaan isi file sudah selesai, yaitu eof()
eof artinya sudah berada di akhir file

ifstream in_stream;
in_stream open ("datafile.txt");

if (in_stream.eof()){
    cout << "file sudah selesai";
}

in_stream.close();

File Sekuensial
file pasti dibaca secara sekuensial dari awal sampai akhir 
    tidak ada akses di tengah file (tidak ada yg dimulai dari tengah)
    alur berjalan maju, tidak akan mundur atau lompat
maka, file harus diproses secara sekuensial 
data yg tersimpan dalam file memiliki tipe data yg sama
    file text, file int, file string

pada banyak kasus, program diharapkan membaca file secara sekuensial
    file berisi nilai mhs satu kelas, maka harus dihitung rata"" nilai mhs
    file berisi luas wilayah semua kecamatan dalam satu kota, maka perlu dihitung semua luasnya untuk mengetahui luas satu kota
data yg disimpan dalam satu file juga terkadang sangat banyak sehingga tidak diketahui totalnya, bahkan ada yg kosong 


