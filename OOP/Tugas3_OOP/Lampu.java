// Cornelius Louis Nathan
// TI 23 C - 23051204085

public class Lampu {
    String Merek;
    String Tipe;
    int Watt;
    int Tegangan;
    String WarnaCahaya;
    int ColorTemperature;
    String Bentuk;
    String FiturTambahan;

    public Lampu(String Merek, String Tipe, int Watt, int Tegangan, String WarnaCahaya, 
                 int ColorTemperature, String Bentuk, String FiturTambahan) {
        this.Merek = Merek;
        this.Tipe = Tipe;
        this.Watt = Watt;
        this.Tegangan = Tegangan;
        this.WarnaCahaya = WarnaCahaya;
        this.ColorTemperature = ColorTemperature;
        this.Bentuk = Bentuk;
        this.FiturTambahan = FiturTambahan;
    }

    public void NyalakanLampu() {
        System.out.println("Lampu menyala dengan warna " + WarnaCahaya + " dan daya " + Watt + "W.");
        System.out.println();
    }

    public void PadamkanLampu() {
        System.out.println("Lampu dipadamkan.");
        System.out.println();
    }

    public void AturKecerahan(int InputTingkat) {
        if (FiturTambahan.contains("Mengatur kecerahan")) {
            System.out.println("Kecerahan lampu diatur ke level " + InputTingkat + "%.");
        } else {
            System.out.println("Lampu ini tidak mendukung fitur pengaturan kecerahan.");
        }
        System.out.println();
    }

    public void AturTimer(int InputWaktu) {
        if (FiturTambahan.contains("Timer")) {
            System.out.println("Lampu akan menyala selama " + InputWaktu + " menit.");
        } else {
            System.out.println("Lampu ini tidak mendukung fitur timer.");
        }
        System.out.println();
    }

    public void GantiWarnaLampu(String InputWarna) {
        if (FiturTambahan.contains("Mengganti warna lampu")) {
            this.WarnaCahaya = InputWarna;
            System.out.println("Warna lampu diganti menjadi " + InputWarna + ".");
        } else {
            System.out.println("Lampu ini tidak mendukung fitur mengganti warna.");
        }
        System.out.println();
    }

    public void TampilkanInfoLampu() {
        System.out.println();
        System.out.println("4. Lampu");
        System.out.println("Merek: " + Merek);
        System.out.println("Tipe: " + Tipe);
        System.out.println("Watt: " + Watt + "W");
        System.out.println("Tegangan: " + Tegangan + "V");
        System.out.println("Warna Cahaya: " + WarnaCahaya);
        System.out.println("Color Temperature: " + ColorTemperature + "K");
        System.out.println("Bentuk: " + Bentuk);
        System.out.println("Fitur Tambahan: " + FiturTambahan);
        System.out.println();
    }
}
