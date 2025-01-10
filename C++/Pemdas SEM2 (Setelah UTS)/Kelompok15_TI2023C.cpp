#include <iostream>
#include <string>
using namespace std;

struct JadwalKelas{ 
    string NIM;
    string NamaDosen;
    string MatKul;
    string TempatKelas;
    string Hari;
    string Waktu;
    JadwalKelas *Next;
    JadwalKelas *Prev;
}*Current,*NewNode,*Temp,*Help;

JadwalKelas *Head= NULL;
JadwalKelas *Tail=NULL;

bool IsEmpty(){ 
    if (Tail==NULL) return true;
    else return false;
};

void DashboardAwal(){
        cout << "================================================\n";
        cout << "  Program Peminjaman Ruang Kelas di Gedung A10 \n";
        cout << "================================================\n";
        cout << "1. Buat Jadwal Kelas Luring\n";
        cout << "2. Melihat Jadwal Kelas\n";
        cout << "3. Hapus Jadwal Kelas\n";
        cout << "0. Exit\n";
        cout << "> ";
}

JadwalKelas *CheckHari(JadwalKelas *CheckKelas){
    if(IsEmpty()){
        return CheckKelas;
    }else{
        Current = Head;
        do { //penggunaan aturan logika "and"
        if (CheckKelas->Hari == Current->Hari && CheckKelas->Waktu == Current->Waktu && CheckKelas->TempatKelas == Current->TempatKelas){
            return NULL; // apabila waktu yang di booking sudah ada 
        }
        Current = Current->Next;
    } while (Current != Head);
    }
    return CheckKelas;
};


JadwalKelas *CheckNIM(JadwalKelas *New){
    if(IsEmpty()){
        return New;
    }
    Current = Head;
    
    if(Current->NIM == New->NIM){
        return NULL;// apabila NIM yang di booking sudah ada 
    }
    else{
        while (Current != Head){
        if (Current->NIM == New->NIM){
            return NULL;// apabila NIM yang di booking sudah ada 
        }
        Current=Current->Next;
        }
    }
    return New;
};

void CreateJadwalKelas() {
    NewNode = new JadwalKelas;
    cout << "NIM: ";
    getline(cin, NewNode->NIM);

    if(NewNode->NIM.find("0512") == string::npos){
        cout<<"Anda bukan mahasiswa jurusan Teknik Informatika\n";
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
        return;
    }
    
    JadwalKelas *CheckingNIM = CheckNIM(NewNode);
    if(CheckingNIM == NULL){
        cout <<" 1 NIM hanya dapat melakukan booking satu kelas!\n";
        return;
    }

    cout << "Kelas yang akan dibooking (dengan format A10.--.--): ";
    getline(cin, NewNode->TempatKelas);

    cout << "Hari (dengan format Hari,dd-mm-yyyy): ";
    getline(cin, NewNode->Hari);

    cout << "Waktu Kelas (dengan format hh.mm (24 jam)): ";
    getline(cin, NewNode->Waktu);
    
    JadwalKelas *CheckingDay = CheckHari(NewNode);
    if(CheckingDay == NULL){
        cout<<"Kelas, hari, dan jam yang anda pilih sedang di pakai.\nSilahkan isi dengan waktu yang berbeda\n";
        return;
    }

    cout << "Nama Dosen : ";
    getline(cin, NewNode->NamaDosen);

    cout << "Mata Kuliah: ";
    getline(cin, NewNode->MatKul);

    
    if (IsEmpty()) {
        Head = NewNode;
        Head->Next = Head;
        Head->Prev = Head;
        Tail = Head;
    } 

    else {
        Tail->Next = NewNode;
        NewNode->Prev = Tail;
        Tail = NewNode;
        Tail->Next = Head;
        Head->Prev = Tail;
    }

    cout << "\nJadwal kelas berhasil dibuat\n \n";
    cout << "|====================================|\n";
    cout << "NIM Penanggung Jawab: " << Tail->NIM << "\n";
    cout << "Mata Kuliah: " << Tail->MatKul << "\n";
    cout << "Nama Dosen: " << Tail->NamaDosen << "\n";
    cout << "Tempat Kelas: " << Tail->TempatKelas << "\n";
    cout << "Hari: " << Tail->Hari << "\n";
    cout << "Waktu: " << Tail->Waktu << "\n";
    cout << "|======================================|\n";

    cout << "\nJangan lupa untuk menghapus jadwal kelas setelah kelas selesai !!\n";
    cout << "Anda bisa melakukan screenshoot untuk menyimpan jadwal kelas\n\n";
    cout << "Klik enter untuk melanjutkan\n";
    cin.get();
    return;

}

void DisplayJadwal(){
    if(IsEmpty()){
        cout << "Jadwal masih kosong, silahkan untuk membuat jadwal\n";
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
        return;
    }
    Current = Head;
    int Choice;
    do {
        system("cls");
        cout << "|======================================|\n";
        cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";        
        cout << "Mata Kuliah: " << Current->MatKul << "\n";
        cout << "Nama Dosen: " << Current->NamaDosen << "\n";
        cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
        cout << "Hari: " << Current->Hari << "\n";
        cout << "Waktu: " << Current->Waktu << "\n";
        cout << "|======================================|\n";
        cout<<"1. Next\n2. Previous\n3. Exit\n> ";
        cin >> Choice;
        switch (Choice)
        {
        case 1:
            Current = Current->Next;
            break;
        case 2:
            Current = Current->Prev;
            break;
        default:
            break;
        }
    }while(Choice!=3);
}

JadwalKelas *SearchJadwal (JadwalKelas *Find, string TargetedNIM){
    Find = Head;
    do{
        if (Find->NIM == TargetedNIM){
            return Find;
        }
        else{
            Find = Find->Next;
        }
    }while (Find != Head);
    return Find;
}

void DeleteJadwal(){
    if (IsEmpty()){
        cout << "Jadwal kelas masih kosong"<<endl;
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
        return;
    }

    string TargetedNIM;
    cout << "NIM: "; 
    getline(cin,TargetedNIM);
    if(TargetedNIM.find("0512") == string::npos){
        cout << "Anda bukan mahasiswa jurusan Teknik Informatika\n";
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
        return;
    }

    Temp = SearchJadwal(Head, TargetedNIM);
    if(Temp->NIM != TargetedNIM){
        cout << "Jadwal yang dibuat oleh " << TargetedNIM << " tidak ada, mungkin jadwal sudah terhapus atau jadwal belum dibuat\n";
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
        return;       
    } 
    else{
        Current = Head;
        Help = SearchJadwal(Head,TargetedNIM);
        while(Current != Help){
            Current = Current->Next;
        }
    }

    cout << "\nJadwal kelas yang akan dihapus:\n \n";
    cout << "|====================================|\n";
    cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";
    cout << "Nama Dosen: " << Current->NamaDosen << "\n";
    cout << "Mata Kuliah: " << Current->MatKul << "\n";
    cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
    cout << "Hari: " << Current->Hari << "\n";
    cout << "Waktu: " << Current->Waktu << "\n";
    cout << "|====================================|\n";   
    cout << "Lanjutkan? (y/n): ";

    char Choice;
    cin >> Choice;
    if(Choice == 'y' || Choice == 'Y') {
        int Reason;

        cout << "Alasan kelas dihapus: \n";  //input alasan dihapus
        cout << "1. Jadwal kelas telah selesai\n";
        cout << "2. Jadwal kelas dibatalkan dosen\n";
        cout << "3. Jadwal kelas diganti menjadi daring\n";
        cout << "> "; 
        cin >> Reason;
        
        if(Head->Next==Head){
            Head = Tail =NULL;
        } else if(Current == Head){
            Head = Current->Next;
            Tail->Next = Head;
            Head->Prev = Tail;
            delete Current;
        } 
        else if(Current == Tail){
            Tail = Current->Next;
            Tail->Next = Head;
            Head->Prev = Tail;
            delete Current;
        } 
        else{
            Current->Prev->Next = Current->Next;
            Current->Next->Prev = Current->Prev;
            delete Current;
        }
        
        cin.ignore();
        cout <<"\nJadwal kelas berhasil dihapus\n";
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
    } 
    else{
        cout << "Penghapusan data dibatalkan\n";
        cout << "Klik enter untuk melanjutkan\n"; 
        cin.get();
    }
}

int main(){
    int Choice;
    do{
        system("cls");
        DashboardAwal();
        cin >> Choice;
        cin.ignore();
        switch (Choice){
            case 0:
               char Exit;
                cout << "Apakah anda ingin keluar dari akses User (y/n):";
                cin >> Exit;

                if(Exit == 'y' || Exit == 'Y'){
                cout << "Terima kasih, selamat belajar\n";
                return 0;
                }
            
                else{
                Choice = 4;
                }
            break;

            case 1:
                system("cls");
                cout << "List Kelas A10:\n\n";
                cout << "Lorong kiri setelah Pintu Masuk:\n";
                cout << "A10.01.01, A10.01.02, A10.01.03, A10.01.04\n\n";
            
                cout << "Lorong kanan setelah Pintu Masuk:\n";
                cout << "A10.01.12, A10.01.13, A10.01.14, A10.01.15\n";
                cout << "A10.01.16, A10.01.17, A10.01.18, A10.01.19\n \n";
                cout << "Buat Jadwal Kelas Luring\n";
                CreateJadwalKelas();

            break;

            case 2:
                DisplayJadwal();
            break;

            case 3:
                DeleteJadwal();
            break;

            default:
                cout << "Input invalid\n";
                cout << "Klik enter untuk melanjutkan\n"; 
                cin.get();      
            break;
        }

    }while (Choice!=0);

    return 0;
}

/*
================================================
  Program Peminjaman Ruang Kelas di Gedung A10 
================================================
1. Buat Jadwal Kelas Luring
2. Melihat Jadwal Kelas
3. Hapus Jadwal Kelas
0. Exit
>  

List Kelas A10:

Lorong kiri setelah Pintu Masuk:
A10.01.01, A10.01.02, A10.01.03, A10.01.04

Lorong kanan setelah Pintu Masuk:
A10.01.12, A10.01.13, A10.01.14, A10.01.15
A10.01.16, A10.01.17, A10.01.18, A10.01.19
 
Buat Jadwal Kelas Luring
NIM:

NIM: 24051204100
Kelas yang akan dibooking (dengan format A10.--.--): A10.01.01
Hari (dengan format Hari,dd-mm-yyyy): Senin,14 Oktober 2024
Waktu Kelas (dengan format hh.mm (24 jam)): 07.30
Nama Dosen : Yuni Yamasari
Mata Kuliah: Aljabar Linear   

Jadwal kelas berhasil dibuat

|====================================|
NIM Penanggung Jawab: 24051204100
Mata Kuliah: Aljabar Linear
Nama Dosen: Yuni Yamasari
Tempat Kelas: A10.01.01
Hari: Senin,14 Oktober 2024
Waktu: 07.30
|======================================|

Jangan lupa untuk menghapus jadwal kelas setelah kelas selesai !!
Anda bisa melakukan screenshoot untuk menyimpan jadwal kelas

Klik enter untuk melanjutkan*

|======================================|
NIM Penanggung Jawab: 24051204100
Mata Kuliah: Aljabar Linear
Nama Dosen: Yuni Yamasari
Tempat Kelas: A10.01.01
Hari: Senin,14 Oktober 
Waktu: 07.30
|======================================|
1. Next
2. Previous
3. Exit
> 

================================================
  Program Peminjaman Ruang Kelas di Gedung A10
================================================
1. Buat Jadwal Kelas Luring
2. Melihat Jadwal Kelas
3. Hapus Jadwal Kelas
0. Exit
> 3
NIM: 23051204085

Jadwal kelas yang akan dihapus:
 
|====================================|
NIM Penanggung Jawab: 23051204085
Nama Dosen: Aditya Prapanca
Mata Kuliah: Sistem Operasi
Tempat Kelas: A10.01.01
Hari: Senin, 14 Oktober 2024
Waktu: 07.30
|====================================|
Lanjutkan? (y/n): y
Alasan kelas dihapus: 
1. Jadwal kelas telah selesai
2. Jadwal kelas dibatalkan dosen
3. Jadwal kelas diganti menjadi daring
> 1

Jadwal kelas berhasil dihapus
Klik enter untuk melanjutkan*/