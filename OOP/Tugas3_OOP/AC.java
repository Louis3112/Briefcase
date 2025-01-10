// Cornelius Louis Nathan
// TI 23 C - 23051204085

public class AC {
    String Merek;
    String Tipe;
    String Kapasitas;
    String ModeOperasi;
    int TIngkatKebisingan;
    int KonsumsiDaya;
    int SuhuMin;
    int SuhuMax;
    String KecepatanAliranUdara;
    float Timer;

    public AC(String Merek, String Tipe, String Kapasitas, String ModeOperasi, int TIngkatKebisingan, 
              int KonsumsiDaya, int SuhuMin, int SuhuMax, String KecepatanAliranUdara, float Timer) {
        this.Merek = Merek;
        this.Tipe = Tipe;
        this.Kapasitas = Kapasitas;
        this.ModeOperasi = ModeOperasi;
        this.TIngkatKebisingan = TIngkatKebisingan;
        this.KonsumsiDaya = KonsumsiDaya;
        this.SuhuMin = SuhuMin;
        this.SuhuMax = SuhuMax;
        this.KecepatanAliranUdara = KecepatanAliranUdara;
        this.Timer = Timer;
    }

    public void NyalakanAC() {
        System.out.println("AC menyala untuk mendinginkan ruangan");
        System.out.println();
    }

    public void MatikanAC() {
        System.out.println("AC dimatikan karena sudah tidak digunakan");
        System.out.println();
    }

    public void TurunkanSuhu(int InputSuhu) {
        if (InputSuhu < SuhuMin) {
            System.out.println("Suhu terlalu rendah! Suhu minimal adalah " + SuhuMin + "°C");
        } else {
            System.out.println("Suhu diturunkan ke " + InputSuhu + "°C");
        }
        System.out.println();
    }

    public void NaikkanSuhu(int InputSuhu) {
        if (InputSuhu > SuhuMax) {
            System.out.println("Suhu terlalu tinggi! Suhu maksimal adalah " + SuhuMax + "°C");
        } else {
            System.out.println("Suhu dinaikkan ke " + InputSuhu + "°C");
        }
        System.out.println();
    }

    public void UbahMode(String InputMode) {
        if (InputMode.equals("Cool") || InputMode.equals("Fan") || InputMode.equals("Dry") || InputMode.equals("Auto") || InputMode.equals("Hot")) {
            this.ModeOperasi = InputMode;
            System.out.println("Mode operasi diubah ke " + InputMode);
        } else {
            System.out.println("Mode operasi tidak valid!");
        }
        System.out.println();
    }

    public void AturKecepatanAliranUdara(String InputKecepatan) {
        if (InputKecepatan.equals("Low") || InputKecepatan.equals("Medium") || InputKecepatan.equals("High")) {
            this.KecepatanAliranUdara = InputKecepatan;
            System.out.println("Kecepatan aliran udara diatur ke " + InputKecepatan);
        } else {
            System.out.println("Kecepatan aliran udara tidak valid!");
        }
        System.out.println();
    }

    public void AturTimer(float InputWaktu) {
        this.Timer = InputWaktu;
        System.out.println("Timer diatur ke " + InputWaktu + " jam");
        System.out.println();
    }

    public void TampilkanInfoAC() {
        System.out.println();
        System.out.println("1. AC");
        System.out.println("AC Merek: " + Merek);
        System.out.println("Tipe: " + Tipe);
        System.out.println("Kapasitas: " + Kapasitas);
        System.out.println("Mode Operasi: " + ModeOperasi);
        System.out.println("Tingkat Kebisingan: " + TIngkatKebisingan + " dB");
        System.out.println("Konsumsi Daya: " + KonsumsiDaya + " Watt");
        System.out.println("Suhu Min: " + SuhuMin + "°C");
        System.out.println("Suhu Max: " + SuhuMax + "°C");
        System.out.println("Kecepatan Aliran Udara: " + KecepatanAliranUdara);
        System.out.println("Timer: " + Timer + " jam");
        System.out.println();
    }
}

