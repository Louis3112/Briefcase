package OOP;
import java.util.ArrayList; // library array 
import Tutorial.Catatan;
import Tutorial.Testing;

class Main {
    public static void main(String[] args) throws Exception{
        
        
        Mahasiswa m23051204085 = new Mahasiswa("Dummy Mahasiswa","000000000","Sastra Mesin", 0.0);
        Mahasiswa m23051204100 = new Mahasiswa();
        m23051204100.setNamaLengkap("Nur Dhuha A.M");
        m23051204100.setNIM("23051204100");
        m23051204100.setJurusan("Teknik Informatika");
        m23051204100.setIPK(4.0);
        // penggunannya hampir sama dengan struct 
        Class<?> classm23051204085 = m23051204085.getClass().getSuperclass();
        System.out.println(classm23051204085);
        /*System.out.println("Nama Lengkap\t: " + NamaLengkap); // program mengalami error karena masih private
        System.out.println("NIM\t\t: " + NIM);
        System.out.println("Jurusan\t\t: " + Jurusan);
        System.out.println("IPK\t\t: " + IPK);
        */
        m23051204085.setNamaLengkap("Cornelius Louis Nathan"); // maka value attribute berubah
        m23051204085.setNIM("23051204085"); // untuk mengakses method di java, perlu mengetikkan nama variabel.nama method
        m23051204085.setJurusan("Teknik Informatika");
        m23051204085.setIPK(4.0);
        
        
        System.out.println("Nama Lengkap\t: " + m23051204085.getNamaLengkap()); // akan mengoutputkan value attribute
        System.out.println("NIM\t\t: " + m23051204085.getNIM());
        System.out.println("Jurusan\t\t: " + m23051204085.getJurusan());
        System.out.println("IPK\t\t: " + m23051204085.getIPK());
        
        System.out.println();

        System.out.println("Nama Lengkap\t: " + m23051204100.getNamaLengkap()); // akan mengoutputkan value attribute
        System.out.println("NIM\t\t: " + m23051204100.getNIM());
        System.out.println("Jurusan\t\t: " + m23051204100.getJurusan());
        System.out.println("IPK\t\t: " + m23051204100.getIPK());

        /*String AddressNamaLengkap = Integer.toHexString(System.identityHashCode(m23051204085));
        System.out.println(AddressNamaLengkap);*/

        System.out.println(Mahasiswa.Kampus);
        System.out.println("Daftar NIM: " + Mahasiswa.getNIMList());
    }
}
