#include <iostream>
#include <string>
using namespace std;

struct TTL{ //Tempat Tanggal Lahir
    string NamaKota;
    int TanggalLahir;
    int BulanLahir;
    int TahunLahir;
};

struct Fakultas{
    string Fakultas;
    string ProgramStudi;
};

struct MahasiswaUNESA{
    string NamaLengkap;
    long long int NIM; //alasan menggunakkan long long int agar bisa menyimpan angka sebanyak 23051204085
    TTL TTLMahasiswa; // nested struct, dengan tipe data TTL 
    int TahunMasuk;
    Fakultas JurusanKuliah; //nested struct, dengan tipe data Fakultas 
};

int main(){

    MahasiswaUNESA *MahasiswaTI = new MahasiswaUNESA;
    MahasiswaTI->NamaLengkap = "Cornelius Louis Nathan";
    (*MahasiswaTI).NIM = 23051204085;
    (*MahasiswaTI).TTLMahasiswa.NamaKota = "Jember";
    MahasiswaTI->TTLMahasiswa.TanggalLahir = 31;
    MahasiswaTI->TTLMahasiswa.BulanLahir = 12;
    MahasiswaTI->TTLMahasiswa.TahunLahir = 2004; 
    (*MahasiswaTI).JurusanKuliah.Fakultas = "Fakultas Teknik";
    (*MahasiswaTI).JurusanKuliah.ProgramStudi = "Teknik Informatika";

    //code untuk input identitas Mahasiswa
    /*cout << "Nama lengkap : ";
        getline(cin, MahasiswaTI->NamaLengkap);
    cout << "NIM : ";
        cin >> (*MahasiswaTI).NIM;
        cin.ignore();
    cout << "Tempat lahir : ";
        getline(cin, (*MahasiswaTI).TTLMahasiswa.NamaKota);
    cout << "Tanggal lahir : ";
        cin >> MahasiswaTI->TTLMahasiswa.TanggalLahir >> MahasiswaTI->TTLMahasiswa.BulanLahir >> MahasiswaTI->TTLMahasiswa.TahunLahir;
        cin.ignore();
    cout << "Nama Fakultas : ";
        getline(cin, (*MahasiswaTI).JurusanKuliah.Fakultas);
    cout << "Nama program studi: ";
        getline(cin, (*MahasiswaTI).JurusanKuliah.ProgramStudi);*/
    
    cout << "\n \nData diri Mahasiswa\n";
    cout << "Nama lengkap         : " << MahasiswaTI->NamaLengkap;
    cout << "\nNIM                  : " << (*MahasiswaTI).NIM;
    cout << "\nTempat Tanggal lahir : " << (*MahasiswaTI).TTLMahasiswa.NamaKota << ", " << MahasiswaTI->TTLMahasiswa.TanggalLahir << "-" << MahasiswaTI->TTLMahasiswa.BulanLahir << "-" << MahasiswaTI->TTLMahasiswa.TahunLahir;
    cout << "\nNama Fakultas        : " << (*MahasiswaTI).JurusanKuliah.Fakultas;
    cout << "\nNama prodi           : " << (*MahasiswaTI).JurusanKuliah.ProgramStudi;

    delete MahasiswaTI;
}
