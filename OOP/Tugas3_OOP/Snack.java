import java.time.LocalDate;
// Cornelius Louis Nathan
// TI 23 C - 23051204085

public class Snack {
    String Merek;
    String TipeSnack;
    String AsalPerusahaan;
    String Rasa;
    String BahanUtama;
    int Kalori;
    int KandunganUdara;
    LocalDate TanggalKadaluwarsa;

    public Snack(String Merek, String TipeSnack, String AsalPerusahaan, String Rasa, String BahanUtama, 
                 int Kalori, int KandunganUdara, LocalDate TanggalKadaluwarsa) {
        this.Merek = Merek;
        this.TipeSnack = TipeSnack;
        this.AsalPerusahaan = AsalPerusahaan;
        this.Rasa = Rasa;
        this.BahanUtama = BahanUtama;
        this.Kalori = Kalori;
        this.KandunganUdara = KandunganUdara;
        this.TanggalKadaluwarsa = TanggalKadaluwarsa;
    }

    public void BukaSnack() {
        System.out.println("Snack " + Merek + " dibuka dari kemasannya.");
        System.out.println();
    }

    public void KonsumsiSnack() {
        System.out.println("Snack " + Merek + " dikonsumsi.");
        System.out.println();
    }

    public void SimpanSnack() {
        System.out.println("Snack " + Merek + " disimpan untuk dikonsumsi nanti.");
        System.out.println();
    }

    public void BagikanSnack() {
        System.out.println("Snack " + Merek + " dibagikan kepada orang lain.");
        System.out.println();
    }

    public void BuangSnack() {
        if (LocalDate.now().isAfter(TanggalKadaluwarsa)) {
            System.out.println("Snack " + Merek + " dibuang karena sudah kadaluarsa.");
        } else {
            System.out.println("Snack " + Merek + " dibuang.");
        }
        System.out.println();
    }

    public void TampilkanInfoSnack() {
        System.out.println();
        System.out.println("5. Snack");
        System.out.println("Merek: " + Merek);
        System.out.println("Tipe Snack: " + TipeSnack);
        System.out.println("Asal Perusahaan: " + AsalPerusahaan);
        System.out.println("Rasa: " + Rasa);
        System.out.println("Bahan Utama: " + BahanUtama);
        System.out.println("Kalori: " + Kalori + " kkal");
        System.out.println("Kandungan Udara: " + KandunganUdara + "%");
        System.out.println("Tanggal Kadaluwarsa: " + TanggalKadaluwarsa);
        System.out.println();
    }
}

