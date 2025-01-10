// Cornelius Louis Nathan
// TI 23 C - 23051204085

public class HP {
    String Merek;
    String Model;
    String UkuranLayar;
    int RAM;
    int PenyimpananInternal;
    int ResolusiKamera;
    String Chipset;
    String SupportSinyal;
    String ModelSIM;
    String SistemOperasi;
    String Warna;
    double Harga;

    public HP(String Merek, String Model, String UkuranLayar, int RAM, int PenyimpananInternal, 
              int ResolusiKamera, String Chipset, String SupportSinyal, String ModelSIM, 
              String SistemOperasi, String Warna, double Harga) {
        this.Merek = Merek;
        this.Model = Model;
        this.UkuranLayar = UkuranLayar;
        this.RAM = RAM;
        this.PenyimpananInternal = PenyimpananInternal;
        this.ResolusiKamera = ResolusiKamera;
        this.Chipset = Chipset;
        this.SupportSinyal = SupportSinyal;
        this.ModelSIM = ModelSIM;
        this.SistemOperasi = SistemOperasi;
        this.Warna = Warna;
        this.Harga = Harga;
    }

    public void NyalakanHP() {
        System.out.println("HP menyala, siap digunakan.");
        System.out.println();
    }

    public void MatikanHP() {
        System.out.println("HP dimatikan karena sudah tidak digunakan.");
        System.out.println();
    }

    public void KirimPesan(String InputPesan) {
        if (SupportSinyal.equals("4G") || SupportSinyal.equals("5G")) {
            System.out.println("Mengirim pesan: " + InputPesan+ " ");
        } else {
            System.out.println("Tidak bisa mengirim pesan karena tidak ada sinyal.");
        }
        System.out.println();
    }

    public void KirimPanggilan(String InputNomor) {
        if (SupportSinyal.equals("4G") || SupportSinyal.equals("5G")) {
            System.out.println("Menghubungi nomor " + InputNomor);
        } else {
            System.out.println("Tidak bisa menelepon karena tidak ada sinyal.");
        }
        System.out.println();
    }

    public void UnduhAplikasi(String NamaAplikasi) {
        System.out.println("Mengunduh " + NamaAplikasi + " dari internet.");
        System.out.println();
    }

    public void HapusAplikasi(String NamaAplikasi) {
        System.out.println("Aplikasi " + NamaAplikasi + " telah dihapus dari penyimpanan.");
        System.out.println();
    }

    public void IsiDaya() {
        System.out.println("HP sedang diisi daya.");
        System.out.println();
    }

    public void AmbilGambar() {
        System.out.println("Mengambil gambar dengan kamera " + ResolusiKamera + " MP.");
        System.out.println();
    }

    public void AmbilVideo() {
        System.out.println("Merekam video dengan kamera " + ResolusiKamera + " MP.");
        System.out.println();
    }

    public void PutarMusik(String InputLagu) {
        System.out.println("Memutar lagu " + InputLagu);
        System.out.println();
    }

    public void AksesInternet(String InputWebsite) {
        if (SupportSinyal.equals("4G") || SupportSinyal.equals("5G")) {
            System.out.println("Mengakses internet " + InputWebsite);
        } else {
            System.out.println("Tidak bisa mengakses internet karena tidak ada sinyal.");
        }
        System.out.println();
    }

    public void TampilkanInfoHP() {
        System.out.println();
        System.out.println("2. HP");
        System.out.println("Merek: " + Merek);
        System.out.println("Model: " + Model);
        System.out.println("Ukuran Layar: " + UkuranLayar + " Inch");
        System.out.println("RAM: " + RAM + " GB");
        System.out.println("Penyimpanan Internal: " + PenyimpananInternal + " GB");
        System.out.println("Resolusi Kamera: " + ResolusiKamera + " MP");
        System.out.println("Chipset: " + Chipset);
        System.out.println("Support Sinyal: " + SupportSinyal);
        System.out.println("Model SIM: " + ModelSIM);
        System.out.println("Sistem Operasi: " + SistemOperasi);
        System.out.println("Warna: " + Warna);
        System.out.println("Harga: Rp " + Harga);
        System.out.println();
    }
}

