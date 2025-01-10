#include <iostream>
#include <string>
using namespace std;

struct JadwalKelas{ //struct Jadwal, Doubly linked list circular
    string NIM;
    string NamaPJ;
    string AsalKelas;
    string NamaDosen;
    string MatKul;
    string TempatKelas;
    string Hari;
    string Waktu;
    JadwalKelas *Next;
    JadwalKelas *Prev;
};
JadwalKelas *Head, *Tail, *Current = nullptr; //Pembuatan Head, Tail, Current, JadwalKelas


void SetCurrent(JadwalKelas* TargetedKelas) { //Menetapkan JadwalKelas sekarang yang akan ditampilkan
    Current = TargetedKelas;
}

void InitJadwalKelas(){ //Inisiasi linked list
    Head = nullptr;
    Tail = nullptr;
    Current = nullptr;
}

int isEmpty(){ // Mengecek apakah linked list kosong
    return (Tail == nullptr) ? 1 : 0; //Ternary operator
}

void ListKelasA10(){
    cout << "List Kelas A10:\n\n";
    cout << "Lorong kiri setelah Pintu Masuk:\n";
    cout << "A10.01.01, A10.01.02, A10.01.03, A10.01.04\n\n";

    cout << "Lorong kanan setelah Pintu Masuk:\n";
    cout << "A10.01.12, A10.01.13, A10.01.14, A10.01.15\n";
    cout << "A10.01.16, A10.01.17, A10.01.18, A10.01.19\n \n";
}

void FindJadwalKelasWithHari(string TargetedHari){ //Mencari Jadwal kelas dengan hari
    if (isEmpty() == 1) {
        cout << "\nTidak ada jadwal kelas saat ini\n";
        cin.get();
        return;
    }
    Current = Head;
    bool Found = false;
    do {
        string Hari = Current->Hari.substr(0, Current->Hari.find(',')); //Mencari jadwal kelas dengan hanya mengambil hari
        //karena format hari disini Hari,dd-mm-yy
        if (Hari == TargetedHari) {
            int Choice;
            cout << "Kelas di Hari " << TargetedHari << "\n\n";
            cout << "|======================================|\n";
            cout << "Nama Penanggung Jawab: " << Current->NamaPJ << "\n";
            cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";
            cout << "Kelas: " << Current->AsalKelas << "\n"; 
            cout << "Nama Dosen: " << Current->NamaDosen << "\n";
            cout << "Mata Kuliah: " << Current->MatKul << "\n";
            cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
            cout << "Hari: " << Current->Hari << "\n";
            cout << "Waktu: " << Current->Waktu << "\n";
            cout << "|======================================|\n";
            Found = true;
            break;
        }
        Current = Current->Next;
    }while(Current != Head);
    if (!Found) {
        cout << "\nTidak ada kelas di tempat dan waktu yang sama, Anda bisa memilih kelas";
        cin.get();
    }
}

bool CheckKelas(const string &TempatKelas, const string &Hari, const string &Waktu){ //Mengecek apakah kelas ada yg sama atau gak
    if (isEmpty() == 1) {
        cout << "\nTidak ada kelas di waktu yang sama, Anda bisa menggunakkan kelas";
        return false; //jika tidak ada, maka return false
    }
    else{
        Current = Head;
        bool Found = false;
    do {
        if (Current->TempatKelas == TempatKelas && Current->Hari == Hari && Current->Waktu == Waktu){ //Jika ada tempat, hari, dan waktu sama
            int Choice;
            cout << "\n \nSayangnya terdapat kelas di waktu yang sama\n\n"; //maka memberitahu kalau ada kesamaan
            cout << "|======================================|\n";
            cout << "Nama Penanggung Jawab: " << Current->NamaPJ << "\n";
            cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";
            cout << "Kelas: " << Current->AsalKelas << "\n"; 
            cout << "Nama Dosen: " << Current->NamaDosen << "\n";
            cout << "Mata Kuliah: " << Current->MatKul << "\n";
            cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
            cout << "Hari: " << Current->Hari << "\n";
            cout << "Waktu: " << Current->Waktu << "\n";
            cout << "|======================================|\n";
            Found = true;
            cout << "\n \nAnda bisa memilih tempat kelas yang lain\n \n";
            return true;
            break;
        }
        Current = Current->Next;
    }while(Current != Head);
    if (!Found) {
        cout << "\nTidak ada kelas di waktu yang sama, Anda bisa menggunakkan kelas yang digunakan";
        return false; //jika tidak ada, maka return false
    }
    }
}
void CreateJadwalKelas() {
    string NIMBaru, NamaPJBaru, AsalKelasBaru, NamaDosenBaru, MatkulBaru, TempatKelasBaru, HariBaru, WaktuBaru; //Menginput data"baru
    cout << "NIM: ";
    getline(cin, NIMBaru);
    cout << "Nama Penanggung Jawab: ";
    getline(cin, NamaPJBaru);
    cout << "Asal kelas: ";
    getline(cin, AsalKelasBaru);
    cout << "Nama Dosen : ";
    getline(cin, NamaDosenBaru);
    cout << "Mata Kuliah: ";
    getline(cin, MatkulBaru);
    cout << "Kelas yang akan dibooking (dengan format A10.--.--): ";
    getline(cin, TempatKelasBaru);
    cout << "Hari (dengan format Hari,dd-mm,yy): ";
    getline(cin, HariBaru);
    cout << "Waktu Kelas (dengan format hh:mm (24 jam)): ";
    getline(cin, WaktuBaru);

    bool CheckingJadwal = CheckKelas(TempatKelasBaru, HariBaru, WaktuBaru); //Pengecekan apakah ada yang sama
    while (CheckingJadwal == true){//Selama ada yg sama,maka looping 
        ListKelasA10(); //memunculkan list kosong
        cout << "Kelas yang akan dibooking (dengan format A10.--.--): ";
        getline(cin, TempatKelasBaru);
        cout << "Hari (dengan format Hari,dd-mm,yy): ";
        getline(cin, HariBaru);
        cout << "Waktu Kelas (dengan format hh:mm (24 jam)):";
        getline(cin, WaktuBaru);

        CheckingJadwal = CheckKelas(TempatKelasBaru,HariBaru,WaktuBaru);
    }
     
    JadwalKelas* NewJadwal = new JadwalKelas; //new node 
    NewJadwal->NIM = NIMBaru;
    NewJadwal->NamaPJ = NamaPJBaru;
    NewJadwal->AsalKelas = AsalKelasBaru;
    NewJadwal->NamaDosen = NamaDosenBaru;
    NewJadwal->TempatKelas = TempatKelasBaru;
    NewJadwal->Hari = HariBaru;
    NewJadwal->Waktu = WaktuBaru;
    NewJadwal->Next = NewJadwal;
    NewJadwal->Prev = NewJadwal;

    if (isEmpty() == 1) {
        Head = NewJadwal;
        Tail = NewJadwal;
        Head->Next = Head;
        Head->Prev = Head;
        Tail->Next = Tail;
        Tail->Prev = Tail;
    } 
    else {
        NewJadwal->Next = Head;
        Head->Prev = NewJadwal;
        Head = NewJadwal;
        Head->Prev = Tail;
        Tail->Next = Head;
    }
    cout << "\nJadwal kelas berhasil dibuat\n \n";
    cout << "|====================================|\n";
    cout << "Nama Penanggung Jawab: " << NewJadwal->NamaPJ << "\n";
    cout << "NIM Penanggung Jawab: " << NewJadwal->NIM << "\n";
    cout << "Kelas: " << NewJadwal->AsalKelas << "\n"; 
    cout << "Nama Dosen: " << NewJadwal->NamaDosen << "\n";
    cout << "Mata Kuliah: " << NewJadwal->MatKul << "\n";
    cout << "Tempat Kelas: " << NewJadwal->TempatKelas << "\n";
    cout << "Hari: " << NewJadwal->Hari << "\n";
    cout << "Waktu: " << NewJadwal->Waktu << "\n";
    cout << "|======================================|\n";

    cout << "\n \nJangan lupa untuk menghapus jadwal kelas setelah kelas selesai !!\n";
    cout << "Anda bisa melakukan screenshoot untuk menyimpan jadwal kelas\n";
    cout << "Klik enter untuk melanjutkan\n";
    cin.get();
}

void EditJadwalKelas(string TargetedNIM) { //Supaya bisa mengedit kelas, maka langsung diinputkan NIMnya,agar tidak dapat mengganggu/merusak jadwal kelas lain
    string TempatKelasBaru, HariBaru, WaktuBaru; 
    if (isEmpty() == 1) {
        cout << "\nTidak ada jadwal kelas saat ini\n";
        cin.get();
        return;
    }

    Current = Head;
    bool Found = false;

    do {
        if (Current->NIM == TargetedNIM) { //Kalau ternyata jadwalnya sudah pernah dibuat
            cout << "Kelas yang akan dibooking (dengan format A10.--.--): "; //tinggal mengedit kelas, hari, dan waktu, kalau ada perubahan
            getline(cin, TempatKelasBaru);
            Current->TempatKelas = TempatKelasBaru;
            cout << "Hari (dengan format Hari,dd-mm,yy): ";
            getline(cin, HariBaru);
            Current->Hari = HariBaru;
            cout << "Waktu Kelas (dengan format hh:mm (24 jam)):";
            getline(cin, WaktuBaru);
            Current->Hari = WaktuBaru;
            
            cout << "\n Jadwal kelas berhasil diganti\n \n";
            cout << "|====================================|\n \n";
            cout << "Nama Penanggung Jawab: " << Current->NamaPJ << "\n";
            cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";
            cout << "Kelas: " << Current->AsalKelas << "\n"; 
            cout << "Nama Dosen: " << Current->NamaDosen << "\n";
            cout << "Mata Kuliah: " << Current->MatKul << "\n";
            cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
            cout << "Hari: " << Current->Hari << "\n";
            cout << "Waktu: " << Current->Waktu << "\n";
            cout << "|====================================|\n";   
        }
        Current = Current->Next;
    }while (Current != Head);

    if (!Found) {
        cout << "\nJadwal " << TargetedNIM << " tidak ditemukan, mungkin karena belum membuat kelas\n";
        cin.get();
    }
}

void DeleteJadwalKelas(string TargetedNIM) { //Menghapus jadwal kelas bila harus dihapus
    if (isEmpty() == 1) {
        cout << "\nTidak ada jadwal kelas saat ini\n";
        cin.get();
        return;
    }

    Current = Head;
    JadwalKelas* PrevNode = Tail;
    do {
        if (Current->NIM == TargetedNIM) {
            char Choice;
            cout << "\nJadwal kelas yang akan dihapus:\n \n";
            cout << "|====================================|\n";
            cout << "Nama Penanggung Jawab: " << Current->NamaPJ << "\n";
            cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";
            cout << "Kelas: " << Current->AsalKelas << "\n"; 
            cout << "Nama Dosen: " << Current->NamaDosen << "\n";
            cout << "Mata Kuliah: " << Current->MatKul << "\n";
            cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
            cout << "Hari: " << Current->Hari << "\n";
            cout << "Waktu: " << Current->Waktu << "\n";
            cout << "|====================================|\n";   
            cout << "Lanjutkan? (y/n): ";
            cin >> Choice;

            if (Choice == 'y' || Choice == 'Y') {
                int Reason;
                cout << "Alasan kelas dihapus: \n";  //input alasan dihapus
                cout << "1. Jadwal kelas telah selesai\n";
                cout << "2. Jadwal kelas dibatalkan dosen\n";
                cout << "3. Jadwal kelas diganti menjadi daring\n";
                cout << "> ";
                cin >> Reason;
                if (Current == Head) {
                    Head = Current->Next;
                    Tail->Next = Head;
                    delete Current;
                } 
                else if (Current == Tail) {
                    Tail = PrevNode;
                    Tail->Next = Head;
                    delete Current;
                } 
                else {
                    PrevNode->Next = Current->Next;
                    delete Current;
                }

            cout << "\nJadwal kelas berhasil dihapus\n";
            cin.get();
            }
            else {
                cout << "Penghapusan data dibatalkan\n";
                cin.get();
            }
            return;
        }
        PrevNode = Current;
        Current = Current->Next;
    } while (Current != Head);

    cout << "\nJadwal " << TargetedNIM << "tidak ditemukan, mungkin karena belum membuat kelas\n";
    cin.get();
}

int DisplayOptions(){ //Display option ketika menampilkan jadwal kelas
    int input;
    cout << "1. Next\n";
    cout << "2. Prev\n";
    cout << "3. Exit\n";
    cout << "Pilih opsi: ";
    cin >> input;
    return input;
}
void DisplayJadwalKelas(){ //Display jadwal kelas 
    if (Current) {
        cout << "\n|======================================|\n";
        cout << "Nama Penanggung Jawab: " << Current->NamaPJ << "\n";
        cout << "NIM Penanggung Jawab: " << Current->NIM << "\n";
        cout << "Kelas: " << Current->AsalKelas << "\n"; 
        cout << "Nama Dosen: " << Current->NamaDosen << "\n";
        cout << "Mata Kuliah: " << Current->MatKul << "\n";
        cout << "Tempat Kelas: " << Current->TempatKelas << "\n";
        cout << "Hari: " << Current->Hari << "\n";
        cout << "Waktu: " << Current->Waktu << "\n";
        cout << "|===========================|\n";
    } 
    else {
        cout << "Tidak ada Jadwal kelas saat ini\n";
        cin.get();
    }
}

JadwalKelas* NextDataSupir(){ //Untuk next ke jadwal berikutnya 
    if (Current) {
        Current = Current->Next;
    }
    return Current;
}
JadwalKelas* PrevDataSupir(){ //Untuk prev ke jadwal berikutnya 
    if (Current) {
        Current = Current->Prev;
    }
    return Current;
}
int main(){
    InitJadwalKelas(); //inisiasi linked list
    char Home;
    char Login = 'y';
    string LoginNIM;
    
    while (Login == 'y'){ // login
        cout << "Masukkan NIM: ";
        getline(cin, LoginNIM);

        if(LoginNIM.find("0512") != string::npos){ //pengecekan NIM, apakah ada angka 0512, yg merupakan anggota TI
            Home = 'y';
            Login = 'n';
        }
        else{
            cout << "NIM yang dimaksud bukan menunjukkan anggota Teknik Informatika";
        }
    }

    string FindHari;
    while(Home == 'y'){
        system("cls");
        int Input;
        cout << "======================================\n";
        cout << "       Program Booking Kelas A10      \n";
        cout << "       Selamat Datang, " << LoginNIM << "\n";
        cout << "======================================\n";
        cout << "1. Buat Jadwal Kelas Luring\n";
        cout << "2. Melihat Jadwal Kelas\n";
        cout << "3. Edit Jadwal Kelas\n";
        cout << "4. Hapus Jadwal Kelas\n";
        cout << "0. Exit\n";
        cout << "> ";
        cin >> Input;
        cin.ignore();

        switch (Input){
        case 1:    
            cout << "Buat Jadwal Kelas Luring\n";
            CreateJadwalKelas();
            break;
        
        case 2:
            cout << "Melihat Jadwal Kelas pada hari tertentu\n";
            cout << "Hari: ";
            getline(cin,FindHari);
            FindJadwalKelasWithHari(FindHari);
            int InputFind;
            do{
                InputFind = DisplayOptions();
                switch (InputFind) {
                case 1:
                    SetCurrent(NextDataSupir());
                    DisplayJadwalKelas();
                    break;

                case 2:
                    SetCurrent(PrevDataSupir());
                    DisplayJadwalKelas();
                    break;

                case 3:
                    break;

                default:
                    cout << "Opsi tidak valid. Silakan pilih opsi yang benar\n";
                    break;
                }
            } while (InputFind != 3);
            break;

        case 3 :
            cout << "Edit jadwal kelas\n";
            EditJadwalKelas(LoginNIM);
            break;
        
        case 4 :
            cout << "Hapus jadwal kelas\n";
            DeleteJadwalKelas(LoginNIM);
            break;

        case 5:
            char Exit;
            cout << "Apakah anda yakin ingin keluar\n";
            cin >> Exit;

            if(Exit == 'y' || Exit == 'Y'){
                cout << "Terima kasih dan Selamat belajar !!!\n";
                Home = 'n';
                return 0;
            }
            else{
                break;
            }
        default:
            break;
        }
    }
    return 0;
}