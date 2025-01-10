package OOP;

import java.util.ArrayList;
class Animal{
    public void MakeSound(){
        System.out.println("Grr...");
    }
}

class Cat extends Animal{
    int legs = 4;
    public void MakeSound(){
        System.out.println("Meow...");    
    }
}

class Dog extends Animal{
    public void MakeSound(){
        System.out.println("Woof...");    
    }
}

class Mahasiswa{
    static String Kampus = "Ketintang";
    protected String NamaLengkap;
    private String NIM;
    private String Jurusan;
    private double IPK;
    private static ArrayList<String> DaftarNIM = new ArrayList<String>(); // disini akan membuat array
    // private static ArrayList<Integer> DaftarIPK = new ArrayList<Integer>(); // penamaan tipe pada ArrayList sangat berbeda, perlu hati"

    Mahasiswa(String InputNamaLengkap, String InputNIM, String InputJurusan, double InputIPK){ // constructor
        NamaLengkap = InputNamaLengkap;
        NIM = InputNIM;
        Jurusan = InputJurusan;
        IPK = InputIPK;

        Mahasiswa.DaftarNIM.add(InputNIM); // cara menambahkan ke dalam ArrayList
        /*System.out.println("Nama Lengkap\t: " + NamaLengkap); // kalau di disini, program tetap akan menampilkan output, karena bagian dari constructor
        System.out.println("NIM\t\t: " + NIM);
        System.out.println("Jurusan\t\t: " + Jurusan);
        System.out.println("IPK\t\t: " + IPK);*/
    }

    Mahasiswa(){

    }
    // setter     
    public void setNamaLengkap(String NamaLengkap){ // sebenarnya bisa aja parameter nya disamakan, juga karena ternyata tiap parameter tetap memiliki alamat yg berbeda
        this.NamaLengkap = NamaLengkap; // untuk mengakses class, harus menggunakkan variabel this agar dapat membedakan dua variabel tersebut
    } // karena kalau misalkan tetap NamaLengkap = NamaLengkap, maka nilai variabel tidak akan berganti, karena merujuk ke variabel yg sama
    public void setNIM(String InputNIM){ 
        this.NIM = InputNIM;
        Mahasiswa.DaftarNIM.add(InputNIM);
    }
    public void setJurusan(String InputJurusan){
        this.Jurusan = InputJurusan;
    }
    public void setIPK(double InputIPK){
        this.IPK = InputIPK;
    }

    // getter 
    public String getNamaLengkap(){
        return NamaLengkap;
    }
    public String getNIM(){
        return NIM;
    }
    public String getJurusan(){
        return Jurusan;
    }
    public double getIPK(){
        return IPK;
    }
    static ArrayList<String> getNIMList(){ // maka menampilkan semua NIM
        return Mahasiswa.DaftarNIM;
    }
}