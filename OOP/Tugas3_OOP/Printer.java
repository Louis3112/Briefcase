// Cornelius Louis Nathan
// TI 23 C - 23051204085

public class Printer {
    String Merek;
    String Model;
    String Tipe;
    int KecepatanCetak; 
    int ResolusiCetak; 
    String Koneksi;
    String Tinta;
    int BanyakTray;
    String FiturTambahan;

    public Printer(String Merek, String Model, String Tipe, int KecepatanCetak, int ResolusiCetak, 
                   String Koneksi, String Tinta, int BanyakTray, String FiturTambahan) {
        this.Merek = Merek;
        this.Model = Model;
        this.Tipe = Tipe;
        this.KecepatanCetak = KecepatanCetak;
        this.ResolusiCetak = ResolusiCetak;
        this.Koneksi = Koneksi;
        this.Tinta = Tinta;
        this.BanyakTray = BanyakTray;
        this.FiturTambahan = FiturTambahan;
    }

    public void CetakDokumen(String InputDokumen) {
        System.out.println("Mencetak dokumen " + InputDokumen + " dengan resolusi " + ResolusiCetak + " dpi.");
        System.out.println();
    }

    public void PindaiDokumen(String InputDokumen) {
        if (FiturTambahan.equalsIgnoreCase("Scanner")) {
            System.out.println("Memindai dokumen " + InputDokumen + ".");
        } else {
            System.out.println("Fitur pemindaian tidak tersedia pada printer ini.");
        }
        System.out.println();
    }

    public void KirimFaks(String InputNomor) {
        if (FiturTambahan.equalsIgnoreCase("Fax")) {
            System.out.println("Mengirim faks ke nomor " + InputNomor);
        } else {
            System.out.println("Fitur faks tidak tersedia pada printer ini.");
        }
        System.out.println();
    }
 
    public void HubungkanJaringan(String InputJaringan) {
        if (Koneksi.contains(InputJaringan)) {
            System.out.println("Printer terhubung melalui " + InputJaringan);
        } else {
            System.out.println("Koneksi " + InputJaringan + " tidak didukung oleh printer ini.");
        }
        System.out.println();
    }

    public void IsiUlangTinta(String InputTinta) {
        System.out.println("Mengisi ulang tinta " + InputTinta);
        System.out.println();
    }

    public void BersihkanPrintHead() {
        System.out.println("Membersihkan print head untuk menjaga kualitas cetak.");
        System.out.println();
    }

    public void AturResolusiCetak(int InputResolusi) {
        this.ResolusiCetak = InputResolusi;
        System.out.println("Resolusi cetak diatur ke " + InputResolusi + " dpi.");
        System.out.println();
    }

    public void BatalkanPencetakan() {
        System.out.println("Pencetakan dokumen dibatalkan.");
        System.out.println();
    }

    public void TampilkanInfoPrinter() {
        System.out.println();
        System.out.println("3. Printer");
        System.out.println("Merek Printer: " + Merek);
        System.out.println("Model: " + Model);
        System.out.println("Tipe: " + Tipe);
        System.out.println("Kecepatan Cetak: " + KecepatanCetak + " ppm");
        System.out.println("Resolusi Cetak: " + ResolusiCetak + " dpi");
        System.out.println("Koneksi: " + Koneksi);
        System.out.println("Tinta: " + Tinta);
        System.out.println("Banyak Tray: " + BanyakTray);
        System.out.println("Fitur Tambahan: " + FiturTambahan);
        System.out.println();
    }
}


