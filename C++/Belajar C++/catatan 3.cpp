#include <iostream>
using namespace std;

int main(/*ini adalah input argument*/){ // semua yg ada di dalam kurung kurawal disebut sebagai body 
   cout << "Hello world" << endl; // satu baris ini disebut statement dan diakhiri dengan ;
   cin.get();
   return 0;
} //sedangkan inlude iostream dan int main bukan termasuk statement pemrograman

sebenarnya, kalau kita gak pake using namespace std; maka harus menggunakkan std ::
yg berarti bahwa std mengambil fungsi dari file iostream 
karena cout adalah bagian dari std 

<< ini adalah operator insertion, yg artinya akan dimasukkan ke cout
cin.get() artinya akan menginput enter 

return 0 terjadi karena int main termasuk dalam fungsi (fungsi main), maka harus mengembalikan nilai
nilai 0 menandakan bahwa program berjalan dengan lancar

<< endl bisa diganti dengan \n (tapi harus di dalam " "), maka otomatis akan endl
segala sesuatu yg ada di dalam " ", disebut sebagai string

spasi pada string sangatlah berpengaruh terhadap printing 

variabel sangatlah penting dalam c++, untuk menetapkan variabel, harus juga memasukkan tipe datanya
karena c++ tidak tahu tipe datanya 

deklarasi dan cin 
inisialisasi adalah pemberian nilai terhadap variabel
deklarasi adalah penetapan variabel pada suatu tipe data 

kalau misalkan int angka;
cout << angka;
maka akan mengeluarkan nilai 0
sedangkan cin, menggunakkan tanda >>, sehingga kita bisa menginputkan nilai ke suatu variabel pada program
tidak melalui codingan 

tipe data 
tipe data ada banyak macamnya, dan kalau kita ingin melihat kapasitas dari suatu tipe data, menggunakkan fungsi sizeof()
int a = 1;
cout << sizeof(a) // maka akan mengeluarkan nilai 4
yg berarti ukuran a adalah 4 byte (1 byte ada 8 bit, maka ada 32 bit)

1 byte isinya terdiri atas 8 kotak (1 kotak = 1 bit), yg di dalamnya terdapat angka biner 
bagian paling depan dilambangkan dengan + -, sehingga tersisa 31 bit. Maka diambillah 31 bit itu 
angka max dari int itu adalah 2^31 dan min nya adalah -2^31
kalau untuk mengecek, bisa menggunakkan
numeric_limits<int>::max()

kalau misalkan melebihi, maka angka yg dikeluarkan akan terbalik (max positif menjadi min), (min menjadi max)
long memiliki memori sebanyak 8 byte (brrti ada 64 bit), 
yg berarti max nya adalah 2^63

short, memiliki memori sebanyak 2 byte (brrti ada 16 bit)
brrti max nya addlah 2^15

float untuk angka desimal
float seharusnya menggunakkan huruf f di blkg
float d = 6.9f;
float lebih pendek dri long 

char hanya menggunakkan 1 byte 
bool hanya menggunakkan 1 byte (sebenarnya 1 bit, tpi karena c++ tdk mengenal bit, maka menggunakkan byte )

sebenarnya, kita bisa menghilangkan minus dengan menggunakkan unsigned
maka, kalau unsigned int
bila dicek dengan numeric_limits<unsigned int>::max();, maka angka nya akan maksimal, yaitu 2 x 2^31
tapi minimumya adalah 0 (bukan -2^31)

string bukan termasuk tipe data fundamental, karena kumpulan char 
jadi, yg termasuk tipe data fundamental adalah 
int, short, long, float, double, char, bool
(kalau dalam python, disebut tipe data primitif )

aritmatika (hanya mencatat bagian yg tidak ada di matkul)
kalau misalkan int dibagi int, dan tipe data hasil adalah float, maka hasil akan tetap int (int/int = int)
tpi kalau salah satu float, maka pasti hasilnya menjadi float 

mod tidak bisa digunakan pada float 

komparasi (relation expression )
kalau misalkan ingin langsung mengkomparasi
cout << a == b; // akan terjadi error
yg bener adalah 
cout << (a == b);

2 >= 2 atau 2 <= 2 akan menghasilkan nilai true (karena mencakup angka tersebut)

operator logika (and, or , not)
sebenarnya, kita tidak perlu capek"" mengetikkan && atau ||
bisa saja kita mengetikkan and atau or

if ((a == b) and (a == c)){
    cout << "true";
}

penggunaan if, else if, else
kondisi dalam bentuk penggunaan tersebut adalah dalam bentuk boolean
mereka akan dikerjakan apabila bernilai true 

kalau misalkan kondisi hanya berisi variabel saja
if (a){
    cout << "halo"
}
maka a >= 1 agar bisa bernilai true 

sebenarnya
if(a){

}

else if (b){

}

sama saja dengan 
if (a){

}

if(b){

}

switch case
jika sebelumnya kita bljr kalau switch case hanya berlaku untuk int atau char
sebenarnya juga bisa berlaku untuk true atau false //tapi tidak direkomendasikan, akan muncul warning

switch (a == 5){
    case true :
        cout << "angka 5";
}

tpi kegunaan yg sebenarnya harusnya adalah
switch (a){
    case 5 :
        cout << "angka 5"; 
}
case harus menggunakkan break; (salah satu control flow, control flow yg lain ada continue; skip;)
karena kalau misalkan 
switch (a){
    case 1:
        cout << "angka 1" << endl;
    case 2:
        cout << "angka 2" << endl;
    case 3:
        cout << "angka 3" << endl;
    case 4:
        cout << "angka 4" << endl;
}
dan kita input 1, maka semua deret dari case 1 sampai case 4 akan dikerjakan semua 

switch digunakan untuk int atau char
if else digunakan untuk bool

operator assignment
int a = 10 //contoh assignment

rumus assignment
variabel = variabel   operator    ekspresi
   x     =     x          +          (1 + 3)
variabel operator = ekspresi
    x       +     =    (1 + 3)

increment dan decrement
increment ada 2, preincrement dan postincrement
decrement ada 2, predecrement dan postdecrement

preincrement itu yg ++i;
a = 5;
cout << a << endl; // 5
cout << ++a << endl; // 6
cout << a << endl; // 6

postincrement itu tg i++;
a = 5;
cout << a << endl; // 5 
cout << a++ << endl; // 5
cout << a >> endl; // 6

for loop
for (inisialisasi, syarat, increment/decrement){
    aksi 
}

sebenarnya, kita bisa menambah aksi di bagian dalam for loop
int total = 0;
for (int i = 0; i < 10; i++, total += i){ // dengan syarat harus diberi koma, bukan ; 
    cout << i << " || " << total << endl; // tidak boleh ada tipe data selain untuk inisialisasi 
}

kita bisa membuat teks memiliki atribut unik, seperti bold, miring, garis bawah, warna teks, warna latar
dengan kode ANSI Escape
cout << "\033[1mIni adalah teks tebal\033[0m" ;
cout << "\033[2mIni adalah teks abu-abu\033[0m";
cout << "\033[3mIni adalah teks miring\033[0m";
cout << "\033[4mIni adalah teks yang digaris bawahi\033[0m";
cout << "\033[7mIni adalah teks dengan warna terbalik\033[0m";
cout << "\033[9mIni adalah teks yang dicoret\033[0m";
cout << "\033[38;5;[kodewarna]mIni adalah teks dengan warna teks sesuai permintaan\033[0m"; //kode warna mengikuti warna ANSI Escape
cout << "\033[48;5;[kodewarna]mIni adalah teks dengan warna latar sesuai permintaan\033[0m"; //kode warna mengikuti warna ANSI Escape
cout << "\033[?25lKursor disembunyikan"; //kursor ini garis yg berkedap kedip pada c++
cout << "\033[?25hKursor Menyala";

semua harus diakhiri dengan \033[0m agar berhenti di garis itu saja (kalau tidak, maka akan terus berlanjut )
dan setiap kode bisa digabung satu dengan yg lain, dispasi akan tetap berjalan, tapi akan ada tambahan spasi ketika di terminal

Fungsi
Fungsi diciptakan agar seorang programmer tidak perlu mengetik sesuatu secara berulang (DRY/ Dont repeat Yourself)
C++ punya yg namanya standart library, isi dari standart library itu adalah fungsi"" yg akan membantu programmer
contohnya iostream dan cmath

fungsi juga digunakan agar programmer lain bisa saling share antar fungsi 

Variabel Global, Local, Block
kita bisa memanggil suatu nilai global yg jauh menggunakkan ::x (unary operator)

int x  = 5;
int main(){
    int x = 10;
    {int x = 20;
    cout << ::x << endl;} //maka akan cout nilai 5 
}

Array 
Array dianggap sulit karena array  
Address dalam array dibuat berurutan, ada yg dibuat berurutan naik ke atas, dan ada yg turun ke bawah 

sedangkan kalau tidak dibuat array, maka akan acak lokasi memorinya \
array dalam c++ sangat sedikit fiturnya

kalau misalkan
int nilai[5];
cout << nilai; //maka outputnya adalah alamat dari array, index ke-0
karena nilai adalah pointer 

bisa membuat pointer untuk array dengan cara 
int *ptr = nilai;
dan bisa diubah nilainya, sesuai indeks dengan cara
* (ptr + 2) = 5;

untuk mengetahui ukuran array 
cout << sizeof(nilai); 

// 1 int terdiri atas 4 byte
untuk mengetahui jumlah membernya //tanpa menggunakkan library
cout << sizeof(nilai)/sizeof(int)

array di c++ tidak bisa digunakan untuk mengurutkan, tanpa menggunakkan std library

cara membuat array dengan standard library <array>
array <int, jumlah array> nama array 
array <int, 5> nilai;

array sangat berteman dengan dengan looping 

untuk mengetahui ukuran array, menggunakkan
nilai.size()
untuk mengetahui address awal dari array
nilai.begin()
untuk mengetahui address akhir dari array
nilai.end() // tapi bukan alamat dari indeks terakhir, tapi alamat setelah dari indeks terakhir

kalau misalkan 
int array[5] = {0,1,2,3,4};
for (int i = 0; i < 6 ; i++){
    cout << array[i] << " "; 
} // maka, angka terakhir yg ditampilkan akan bernilai random
atau, angka apapun yg di cout, dan melebihi dari size array atau melebihi dari member array, akan mengeluarkan angka random

untuk mengatasi hal itu, bisa menggunakkan //disclaimer : hanya berlaku untuk c++11 dan bisa dilakukan dengan std library array
for (int nilai : array){
    cout << nilai << " ";
} // maka, nilai akan cout semua angka di dalam array

dengan menggunakkan looping ini juga, array akan menggunakkan memori yg sama di setiap loopingnya  // kalau menggunakkan looping yg biasanya, maka menggunakkan alamat yg konstan, yg berurut
for (int nilai : array){
    cout << "alamatnya adalah " << &nilai << ", nilainya adalah "<< nilai << endl; 
}
akan berbeda dengan 
for (int i = 0; i < 5; i++){
    cout << "alamatnya adalah " << &array[i] << ", nilainya adalah " << array[i] << endl;
}

for (int nilai : array){
    cout << nilai << " ";
    nilai = 1; //maka tidak akan berpengaruh
} //tapi, kalau nilai = 1 diletakkan di atas cout, maka pasti berubah

looping ini bisa menggunakkan referencing 
for (int &nilaiRef : array){
    nilaiRef *= 2; 
    cout << "alamatnya adalah " << &nilaiRef << ", nilainya adalah "<< nilaiRef << endl;  //alamatnya akan berubah, tidak akan sama seperti menggunakkan int nilai
}

Address dalam array akan disusun berurutan oleh program 

kita bisa men cout nilai dalam array dengan menggunakkan pointer 
void PrintArray (int *ptrArray,int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris; i++){
        cout << "[ ";
        for (int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}
int main(){
    const int baris = 2;
    const int kolom = 2;
    int arrayMultiDimensi [baris] [kolom] = {1,2,3,4};
    PrintArray (*arrayMultiDimensi, baris, kolom);
    return 0;
}
harus menggunakkan const, agar program berjalan sesuai,menghasilkan angka di dalam matrix

sebenarnya, bisa digantikan dengan menggunakkan 
void PrintArrayNormal(int arrayMultiDimensi[][2], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        cout << "[ ";
        for (int j = 0; j < kolom; j++) {
            cout << arrayMultiDimensi[i][j] << " ";
        }
        cout << "]" << endl;
    }
}
atau
for (int i = 0; i < baris; i++) {
        cout << "[ ";
        for (int j = 0; j < kolom; j++) { 
            cout << *(*(ptrArray + i) + j) << " ";
        }
        cout << "]" << endl;
    }

Sorting Array dengan std library
untuk mengatur panjang dari array
const size_t arraySize = 10;

dalam library algorithm, terdapat yg namanya fungsi sort()
dan cara menggunakkannya adalah
sort (namaArray.begin(), namaArray.end());

di dalam std library algorithm, terdapat fungsi search()
untuk mencari suatu angka atau char, bisa menggunakkan fungsi binary_search()
boleh disort terlebih dahulu

binary_search(namaArray.begin(), namaArray.end(), cariData);
contoh :
array <int, ArraySize> angka = {9,5,6,3,4,7,1,8,2,0};
int CariAngka;
cin >> CariAngka;
sort(angka.begin(), angka.end()); // menggunakkan sort, karena binary search digunakan untuk mencari data yg sudah urut 
bool ketemu = binary_search(angka.begin(), angka.end(), CariAngka);
if (ketemu){ // if ketemu == true
    cout << "angka ditemukan";
}
else{
    cout << "angka tidak ditemukan";
}

string c++
string adalah kumpulan array charl
char kata [5]= {'m','o', 'b', 'i', 'l'}; //array char tidak bisa ditambah, karena adlaah array
ada std library string

yg sebelumnya kita menggunakkan string kata = "mobil";
bisa menggunakkan string kata("mobil");

untuk menginput char array
char kata [50];
cin.getline(kata, 50) //bisa menggunakkan itu

kalau untuk string biasa, 
string kata;
getline(cin, kata)

untuk mengambil karakter berdasarkan index, menggunakkan kata[index]
cth :
string kata("cat");
cout << "index pertama adalah " << kata[0] << endl;
cout << "index kedua adalah " << kata[1] << endl;
cout << "index ketiga adalah " << kata[2] << endl;

kita juga bisa merubah index dari array char dengan cara
kata[0] = 'e'; //perlu diingat, karena mengubah array char, harus menggunakkan '', bukan " "

juga bisa menyambung dengan concantenation 
kalau sebelumnya kita taunya strcat (kata, " lover") atau strcat (kata, kata2)//sehingga cat lover
maka kita bisa menggunakkan 
string kata2 (kata + "lover");

kerjanya sama dengan menggunakkan append
kata.append(kata3)
atau 
kata.append("lover")

atau bahkan bisa menggunakkan
string kata4("lovers");
kata += kata4;
cout << kata; // maka menjadi cat lover 
//konsepnya sama seperti int 

bisa digabungkan menjadi 
kata += " " + kata4;
kata.append(" " + "lover")
kata2 (kata + " " + "lover")

char array dengan char array tidak bisa melakukan komparasi dengan cara biasa 
char nama [5] = {'l', 'o', 'u', 'i', 's'};
if (nama == "louis")
atau
char pembanding[5] = {'l', 'o', 'u', 'i', 's'};
if (nama == pembanding)

tidak akan bisa, karena akan selalu dianggap false

tapi, kalau diubah menjadi string, maka akan bisa 

int main(){
    string input;
    string nama_rahasia = louis;
    while (true){
        cout << "tebak nama : ";
        cin >> input;

        if (input == nama_rahasia){
            cout << "tebakanmu benar";
            break;
        }
        cout << "tebakanmu salah";
    }
    cout << "selamat";
}
tapi, ada kelemahan ketika menggunakkan cin yg simple
bila kita memasukkan "louis nathan";
maka input hanya mengambil kata depan saja, spasi dan kata selanjutnya tidak dihiraukan 


Akses substring 
substring adalah anak bagian dari string, dan bisa diambil di tengah""nya 
di std library string, ada yg namanya fungsi substr();
substr(index, panjang);
index dihitung satu persatu dari awal string (jangan lupa kalau string dimulai dari 0), panjang adalah banyaknya huruf atau index yg diambil

string string1 = "nama saya louis";
string string2 = "saya belajar c++";
kalau mau ingin mengambil kata louis, dengan cara 
string1.substr (10,5);

kita bisa mencari posisi substring dengan menggunakkan fungsi find()
string1.find("louis") // maka outputnya akan berupa index 
tapi, kalau misalkan disitu memang tidak ada kata atau huruf yg dicari, maka outputnya akan berisi angka random
kita bahkan bisa mencari abjad atau potongan kata tertentu 

lalu ada tambahan, kalau misalkan kita ingin mencari sesuatu yg sama
contoh: 
int a = string1.find("a"); //maka output pasti 1
tapi, kalau misalkan ingin mencari a yg selanjutnya, bisa menggunakkan
string1.find("a", a + 1) //perlu diingat, untuk menggunakkan hal ini, harus mendeklarasikan dan memberi inisiasi dulu terhadap index 
a + 1, artinya apabila sudah ditemukan huruf atau kata yg dicari, maka pencarian akan dimulai dari situ // a + 0 akan diabaikan 
maka, outputnya adalah 3

kalau mencari kata atau huruf dimulai dari belakang, menggunakkan fungsi rfind() //reverse find
string1.rfind("louis") // maka output tetap 10 
tapi pencarian akan dimulai dari blkg string // sehingga, tidak perlu menggunakkan index atau index +


subtitusi string (mengganti atau menginsert string)
untuk menukar string1 dan string2, bisa menggunakkan fungsi swap()
string1.swap(string2);

lalu, ada fungsi replace(), untuk mengganti substring
string1.replace(index, panjang, "kata apa yg dimasukkan")
string1.replace(10,5,"nathan");

kita bisa mengakali dengan belajar cara tadi. kita ingin mengganti louis, maka 
int posisi = string1.find("louis");
string1.replace(posisi,5, "nathan"); //ini bisa dilakukan, karena outputnya berupa angka 
atau
string1.replace(string1.find("louis"),5,"nathan") //maka, terbentuklah fitur find dan replace

lalu, kalau kita ingin menginsert/memasukkan suatu kata, menggunakkan fungsi insert()
string1.insert(index,"kata apa yg dimasukkan");
string1.insert(15, " nathan");

INGAT, SEMUA FITUR DAN FUNGSI DIATAS TIDAK BISA LANGSUNG DI COUT KAN, HARUS DIOLAH TERLEBIH DAHULU


getline console string 
getline(cin,string1)

kita bisa membuat program yang menghitung banyaknya jumlah kata dengan menggunakkan find 
int main(){
string kalimat;
getline(cin, kalimat);

int posisi = 0;
int jumlah = 0;
while(true){
    posisi = kalimat.find(" ", posisi + 1); //ketika kalimat sudah habis, maka find (" ") akan kembali ke awal kalimat, mengakibatkan output menjadi -1
    jumlah++;

    if(posisi < 0){
        break;
    }
}

cout << "Banyaknya kata dalam kalimat tersebut adalah " << jumlah;
}


Union // artinya kesatuan
sebenarnya sama dengan struct, yg adalah suatu user-defined type data
tapi, apabila tiap komponen dalam struct memiliki alamat memorinya masing"", union memiliki 1 alamat memori, yg bisa digunakan bersama""
kalau misalkan 1 data diubah dalam union, maka data yg lain akan ikut berubah 
contoh :
union data{ // maka tipe datanya adalah "data"
    int int_value;
    char char_value[5];
} //cara memanggilnya juga sama dengan menggunakkan struct

data contoh;
contoh.int_value = 10000;
cout << contoh.int_value << endl; //maka outputnya akan 10000
cout << contoh.char_value[0]; //tapi, outputnya akan berisi teks random, itu adalah ASCII kode

contoh.char_value[0] = 'a';
contoh.char_value[1] = 'b';

cout << contoh.char_value[0] << endl; // maka outputnya akan a
cout << contoh.char_value[1] << endl; // maka outputnya akan b
cout << contoh.int_value; //tapi, outputnya akan berisi angka random
fungsi dari union, adalah untuk menghemat memori pada komputer, 
    apabila ada satu data yg dipanggil pada union dan digunakan, maka data tersebut yg akan terus digunakan
    data yg lain akan dibiarkan sementara (sampai data yg lain tersebut digunakan )
kerjanya sama dengan reference, apabila 1 berubah.. maka yg lain ikut berubah 
union bisa diletakkan di luar int main()


enum (enumerated)
adalah user-defined type data
enum adalah tipe data yg apabila kita punya suatu kumpulan data yg fix, dan kita ingin menjabarkan dan menggunakkannya

enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
day today = monday;
cout << monday; //maka output adalah 1, dan berurut
sehingga, hari"" di atas adalah keyword dari enum day

kita bahkan bisa mengubah index dari data diatas 
enum day today {sunday, monday, tuesday, wednesday = 5, thursday, friday, saturday};
cout << wednesday; // maka output adalah 5
cout << thursday; // maka output adalah 6
cout << tuesday; // maka output adlaah 2, tetap urut dengan depannya
enum harus memiliki tipe data berupa angka (enumerated)

fun fact, kita tidak bisa menggunakkan int pada suatu variabel yg menggunakkan tipe data enum // akan error

enum SuperCars {Venom_V5 = 301, Veryon = 268, Valkyrie = 240, Roadster = 250};
int main(){
    SuperCars Contestant1 = Venom_V5;
    SuperCars Contestant2 = Valkyrie;

    if (Contestant1 > Contestant2){
        cout << "Contestant 1 wins with speed of " << Contestant1 << " km/h";  
    }
    else if(Contestant1 < Contestant2){
        cout <<"Contestant 2 wins with speed of " << Contestant2 << " km/h";  
    }
}
sehingga, bisa dipelajari.. bahwa enum sebenarnya adalah string atau char yg memiliki value berupa int
bagi kita, itu adalah string atau char, tapi bagi komputer itu adalah int
enum bisa diletakkan diluar int main 

Ternary Operator 
Menggunakkan tanda "?", 
akan melakukan pengecekan dengan cara 
    (kondisi) ? True : False

int a, b;
cin >> a >> b;
string output = (a > b) ? "Nilai A lebih besar" : "Nilai B lebih besar";
cout << output;

atau

int a, b;
cin >> a >> b;
string output, hasil1,hasil2;
hasil1 = "Nilai A lebih besar dari nilai B";
hasil2 = "Nilai B lebih besar dari nilai A";
output = (a > b) ? hasil1 : hasil2;
cout << output;

sebenarnya, Ternary bisa digunakan dengan tipe data yg lain
cara untuk menentukan tipe data manakah yg bisa digunakan untuk ternary, outputnya
    kalau outputnya adalah int, maka ternary menggunakkan tipe data int, dst

char Grade = (score > 90) ? 'A' : 'B';
cout << Grade;

int Nilai = (x > 10) ? 1 : 0;

bool condition = true;
string pesan = (condition) ? "True" : "False";


Comma operator
int a,b,c,d itu hanya comma biasa, bukan comma operator, hanya sebagai separator
supaya mempersingkat kode menjadi 1 baris, kita bisa menulis

int a;
int b;
int c;

a = ( b=1, c=2, (b+c)) //harus diberi tanda kurung untuk comma operator
a = ( b=1, c=2, (b+c), cout << a << endl) //akan terjadi error disini, karena operator aritmatika harus diletakkan paling akhir
tapi
a = (b=1, cout << b << endl, c = 2, cout << c << endl, (b+c)) //tidak akan menyebabkan error
fungsi bisa dipanggil di dalam comma operator

Operator Bitwise (Operator untuk bit/menampilkan bit)
harus menggunkkan std library <bitset>
fungsi bit adalah untuk pembelajaran microcontroller

int a = 5;
cout<< bitset<8>(a)
maka, cout nya adalah 00000101

cara kerja bit adalah
00000101 
76543210
angka yg dibawah melambangkan pangkat
karena angka bit terdiri atas 0 dan 1, sehingga 2
dilhat mana urutan yg memiliki angka , yaitu 0 dan 2
2^0 + 2^2 = 1 + 4 = 5

void PrintBinary(unsigned short angka, string nama){
    cout << nama << "=" << bitset<8>(angka) << endl;
}

int main(){
    unsigned short a;
    cin >> a;

    PrintBinary(a, 'a')
}

& BITWISE AND
c = a & b;
a = 00000110; //6
b = 00001010; //10
c = 00000010; //2
disini, akan membandingkan dengan logika and, true dengan true = true
    satu false maka sudah dipastikan false

| BITWISE OR
c = a | b; 
a = 00000110; //6
b = 00001010; //10
c = 00001110; //14
disini, akan membandingkan dengan logika or, true dengan false hasilnya tetap true

^ BITWISE XOR
c = a ^ b;
a = 00000110; //6
b = 00001001; //10
c = 00001100; //12
disini akan membandingkan dengan logika xor, salah satu saja hasilnya true, maka nilainya true
    tapi kalau 2 2 nya true, dianggap false

~ BITWISE NOT
c = ~a;
a = 00000110; //6
c = 11111001; //65529
kebalikannya 

<< BITWISE LEFT SHIFT OPERATOR
c = a << 1;
a = 00000110; //6
c = 00001100; //12
menggeser ke arah kiri sebanyak index, kalau a << 2, brrti geser ke kiri 2 kali

>> BITWISE RIGHT SHIFT OPERATOR
c = a >> 1;
a = 00001001; //10
c = 00000100; //4 
menggeser ke kanan 

kalau misalkan 1 keluar dari frame, maka digeser ke address selanjutnya (anggap aja ilang)

Casting operator (Perubahan tipe data)

int a= 5;
float b = 6.67f;
char c = 'd'

int hasil = a + b;
cout << hasil; // output 11.67
mengapa? karena ini adalah implisit casting (perubahan di belakang layar), merubah a menjadi float

kalau int hasil diubah menjadi float, maka akan mengikuti

lalu, cara mengubahnya menjadi explisit casting, dengan cara menambah tipe data yg kita inginkan 
hasil = (float)a + b;
atau
hasil = a + (float)b;

atau, bisa saja langsung 
cout << (float)a + b;

bahkan, casting juga bisa digunakan pada char 
cout << (int)c; // outputnya 100

cout << (int)c + a; //outputnya 105

atau
cout << (char)(c + a); // outputnya adalah i, karena defghi
cout << c + (char)a; //outputny adalah de

tapi, kelemahan dari casting operator, apabila float diubah menjadi int, lalu diubah menjadi float, maka angka dibelakang koma menjadi 0

Fstream
untuk ifstram, jika kita ingin membaca file dari suatu file lain. maka

ifstream MyFile;
string data;
getline(Myfile,data); //maka, outputnya adalah baris ke 1 sampai menemukan enter

kalau didouble, 
getline(Myfile,data);
getline(Myfile,data);// maka, outputnya adalah baris ke 2, bukan cout 2 baris

ini berlaku apabila kita ketikkan 
Myfile >> data;
Myfile >> data;

cara untuk membaca semua file di dalam file lain
ifstream MyFile;
string output, buffer;
bool isData = false;

MyFile.open("File.txt");
while (!isData){
    getline(MyFile,buffer);
    output.append("\n", buffer); //buffer akan membaca teks, output akan menggabungkan
    if (buffer == "data"){
        isData = true; //atau pake break;
    }
}

atau 
int no;
string nama;
getline(MyFile.buffer);
while (!MyFile.eof()){
    MyFile >> no;
    MyFile >> nama;
    cout << "no " << no << "\t" << "nama " << nama << endl;
}
