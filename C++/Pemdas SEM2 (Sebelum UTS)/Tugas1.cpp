#include <iostream>
#include <string.h>
using namespace std;

/*struct StudentRecord{
    char name[30]; //memberi kapasitas array 30 agar mampu memuat nama 30 karakter 
    long long int NIM; //melakukan deklarasi variabel dengan long long int agar bisa menyimpan nilai int panjang
    char dept[20]; //memberi kapasitas array 30 agar mampu memuat departemen 20 karakter 
    char gender;
};

int main(){
    StudentRecord Student23051204085;
    strcpy(Student23051204085.name , "Cornelius Louis Nathan"); //karena menggunakkan tipe data char, sehingga menggunakkan command strcpy
    Student23051204085.NIM = 23051204085;
    strcpy(Student23051204085.dept , "Informathic Engineering");
    Student23051204085.gender = 'M';

    cout << "The student is ";
    switch (Student23051204085.gender)
    {
    case 'F': cout << "Ms. ";break;
    case 'M': cout << "Mr. ";break;
    }
    cout << Student23051204085.name;
    return 0;
}*/

/*struct StudentRecord{
    char name[30]; 
    long long int NIM; 
    char dept[20];
    char gender;
};

int main(){
    StudentRecord Student23051204085, StudentDummy;
    strcpy(Student23051204085.name , "Cornelius Louis Nathan");
    Student23051204085.NIM = 23051204085;
    strcpy(Student23051204085.dept , "Informathic Engineering");
    Student23051204085.gender = 'M';

    Student23051204085 = StudentDummy; // Nilai suatu variabel struct dapat disalin ke variabel struct lain yang mempunyai tipe struct sama
    strcpy(StudentDummy.name , "Vianie Jaya Kusuma");
    StudentDummy.gender = 'F';
    cout << "The student is ";
    switch (StudentDummy.gender)
    {
    case 'F': cout << "Ms. ";break;
    case 'M': cout << "Mr. ";break;
    }
    cout << StudentDummy.name;
    return 0;
}*/

/*struct date {
    int date; 
    int month; 
    int year;
};

struct person {
    char name[30]; 
    date birthday; // nested struct
}; 

int main(){
person student;
strcpy(student.name, "Cornelius Louis Nathan");
    
    student.birthday.date = 31; //bila ingin mengakses member dari nested struct, maka setiap struct harus dipanggil
    student.birthday.month = 12;
    student.birthday.year = 2004;

cout<< "Name : " << student.name << endl;
cout<< "Birthday : "<< student.birthday.date <<"-"<< student.birthday.month << "-" << student.birthday.year;
return 0;
} */

/*struct zodiak { 	
	char nama[11];	
	int tgl_awal;		
 	int bln_awal;	
	int tgl_akhir;		
 	int bln_akhir;	
}; 

int main(){
    /*cara lain untuk menginisialisasi suatu struct

    bila sebelumnya kita menginisialisasi dengan cara
    zodiak bintang;
        strcpy(bintang.nama, "Sagitarius");
        bintang.tgl_awal = 22;
        bintang.bln_awal = 11;
        bintang.tgl_akhir = 21;
        bintang.bln_akhir = 12;
    
    kita bisa menggunakan cara lain 
    */
/* 	zodiak bintang ={"Sagitarius", 22,11,21,12};
  	int tgl, bln, thn;
    cin >> tgl >> bln >> thn;
    if ((tgl >= bintang.tgl_awal && bln == bintang.bln_awal) || (tgl <= bintang.tgl_akhir && bln == bintang.bln_akhir)){ 
        cout << "Bintang anda adalah " << bintang.nama;
    }   

    else{
        cout << "Bintang anda bukan " << bintang.nama; 
    }
return 0;
}*/


//deklarasi struct 
/*struct date{
    int tanggal;
    int bulan;
    int tahun;
};

struct ultah{
    string nama;
    date kelahiran; //nested struct
};

int main(){
int MAKS = 3;
ultah orang[MAKS]; //pendeklarasian array struct dengan array sebanyak MAKS
for (int i = 0; i < MAKS; i++){ 
    cout << "Nama orang ke - " << i+1 << " : "; 
    cin >> orang[i].nama; //indeks diletakkan pada variabel yg adalah array

    cout << "tanggal lahir orang ke - " << i+1 << " : ";
    cin >> orang[i].kelahiran.tanggal;
    
    cout << "bulan lahir orang ke - " << i+1 << " : ";
    cin >> orang[i].kelahiran.bulan;

    cout << "tahun lahir orang ke - " << i+1 << " : ";
    cin >> orang[i].kelahiran.tahun;
    }
return 0;
}*/

/*struct StudentRecord{
    string ProgramStudi; 
    long long int NIM; 
    float IPK;
};

struct identity{
    string name;
    StudentRecord StudentData;
};

int main(){
    identity Student085 = {"Cornelius Louis Nathan"},*ptr = &Student085;//atau menggunakkan identity *ptr = &js; sesuai dengan tipe data struct 
    /*selain menggunakkan cara ini
    struct identity js;
    Student085.name = "Cornelius Louis Nathan";
    identity *ptr = &js;
    bisa langsung menggunakkan cara diatas*/
    
/*    Student085.StudentData.NIM = 23051204085;
    Student085.StudentData.IPK = 3.9f;

    cout << Student085.name << " " << Student085.StudentData.NIM << " " << Student085.StudentData.IPK << endl;
    cout << ptr->name << " " << ptr->StudentData.NIM << " " << ptr->StudentData.IPK << endl; //untuk pointer, menggunakkan ptr->member
}*/

/*struct person {
    int number;
    string name;
};

int main(){
    person *prsn = new person; //menggunakkan new tipe data struct
    cout << "No Anggota: ";
    cin >> prsn->number;
    cout << "Nama: ";
    cin >> prsn->name;

    delete []prsn; //men-deallokasikan memory agar tidak terjadi kebocoran memory 
}*/

/*void Birthday(int day, int month, int year){
    string months[] = {"Wrong Months", "January", "February", "March", "April", "May", 
    "June","July", "August", "September", "October","November", "December"};

    cout << "The user birthday is " << day << " " << months[month] << " " << year;
}
int main(){
    struct date{
        int day; int month; int year;
    }today; //kita bisa mendeklarasikan struct dan variabelnya langsung dengan cara seperti ini

    cin >> today.day >> today.month >> today.year;
    Birthday(today.day,today.month,today.year);
}*/

/*struct variable{
    int x;
    int y;
};

void tukarVariablePointer(int *x, int *y){
    int temporary;
    temporary = *x;
    *x = *y;
    *y = temporary;
}

void tukarVariableReference(int &x, int &y){
    int temporary;
    temporary = x;
    x = y;
    y = temporary;
}

int main(){
    variable testing;
    cout << "Masukkan nilai pertama: ";
    cin >> testing.x;
    cout << "Masukkan nilai kedua: ";
    cin >> testing.y;

    cout << endl;

    tukarVariablePointer(&testing.x, &testing.y);
    cout << "nilai pertama setelah pertukaran = " << testing.x <<endl;
    cout << "nilai kedua setelah pertukaran = " << testing.y <<endl <<endl;

    tukarVariableReference(testing.x, testing.y);
    cout << "nilai pertama setelah pertukaran ulang = " << testing.x <<endl;
    cout << "nilai kedua setelah pertukaran ulang = " << testing.y <<endl;
}*/

/*struct self{
    int p;
    struct self *ptr;
};
 
struct code{
    int i;
    char c;
    struct code *ptr;
};

int main(){
    code var1;
    code var2;

    var1.i = 50;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.i = 100;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2; //pointer var1 menunjuk ke var2
    cout << var1.ptr->i << " " << var1.ptr->c << " " << var1.ptr; //jadi, nilai var1 mengikuti nilai var2 karena menunjuk var2
}*/

/*struct date{
        int day; int month; int year;
    } birthdayInfo; 

void CoutBirthday(date birthday){
    string months[] = {"Wrong Months", "January", "February", "March", "April", "May", 
    "June","July", "August", "September", "October","November", "December"};

    cout << "The user birthday is " << birthday.day << " " << birthday.month[months] << " " << birthday.year;
};

int main(){
    
    cin >> birthdayInfo.day >> birthdayInfo.month >> birthdayInfo.year;
    CoutBirthday(birthdayInfo);

    return 0;
}*/

struct StudentRecord {
    string name;
    int testScore;
};

void printStruct(StudentRecord arr[]) {
    int i;
    for (i = 0; i < 4; i++){
    cout << "name : " << arr[i].name << endl;
    cout << "test score : "<< arr[i].testScore << endl << endl;
    }
};

int main() {
    struct StudentRecord arr[4] = {{"Louis", 95}, {"Anna", 90}, {"Michael", 80}, {"Adriano", 90}};
    printStruct(arr);
    return 0;
}