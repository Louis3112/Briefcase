import java.time.LocalDate;
// Cornelius Louis Nathan
// TI 23 C - 23051204085

public class Main {
    public static void main(String[] args) {
        AC AC1 = new AC("Panasonic", "AC Split", "1.5 PK", "Cool", 40, 1000, 16, 30, "Medium", 2.5f);

        // 1. Menampilkan informasi AC
        AC1.TampilkanInfoAC();

        System.out.println("__________Behavior AC__________");        
        // 2. Nyalakan AC
        AC1.NyalakanAC();
        
        // 3. Menurunkan suhu
        AC1.TurunkanSuhu(18);
        
        // 4. Menaikkan suhu
        AC1.NaikkanSuhu(28);
        
        // 5. Mengubah mode operasi
        AC1.UbahMode("Dry");
        
        // 6. Mengatur kecepatan aliran udara
        AC1.AturKecepatanAliranUdara("High");
        
        // 7. Mengatur timer
        AC1.AturTimer(3.0f);
        
        // 8. Matikan AC
        AC1.MatikanAC();


        HP HP1 = new HP("Samsung", "Galaxy S23", "6.1 Inch", 8, 128, 48, "Snapdragon 8+ Gen 2", 
        "5G", "Model Sim Ganda", "Android", "Hitam", 6750000);

        // 1. Menampilkan informasi HP
        HP1.TampilkanInfoHP();

        System.out.println("__________Behavior HP__________");
        // 2. Nyalakan HP
        HP1.NyalakanHP();

        // 3. Mengirim pesan
        HP1.KirimPesan("Info Mabar");

        // 4. Menghubungi nomor
        HP1.KirimPanggilan("082140041315");

        // 5. Mengunduh aplikasi
        HP1.UnduhAplikasi("WhatsApp");

        // 6. Menghapus aplikasi
        HP1.HapusAplikasi("Instagram");

        // 7. Isi daya HP
        HP1.IsiDaya();

        // 8. Mengambil gambar
        HP1.AmbilGambar();

        // 9. Mengambil video
        HP1.AmbilVideo();

        // 10. Memutar musik
        HP1.PutarMusik("Nyalakan ApiMu");

        // 11. Mengakses internet
        HP1.AksesInternet("github.com");

        // 12. Matikan HP
        HP1.MatikanHP();

        
        Printer Printer1 = new Printer("Epson", "L3310", "Printer Inkjet", 30, 2400, 
        "USB, Wi-Fi", "Warna", 1, "Scanner");

        // 1. Menampilkan informasi printer
        Printer1.TampilkanInfoPrinter();

        System.out.println("__________Behavior Printer__________");
        // 2. Mencetak dokumen
        Printer1.CetakDokumen("Laporan Proyek");

        // 3. Memindai dokumen
        Printer1.PindaiDokumen("KTP");

        // 4. Mengirim faks
        Printer1.KirimFaks("021123456");

        // 5. Menghubungkan printer ke jaringan
        Printer1.HubungkanJaringan("Wi-Fi");

        // 6. Mengisi ulang Tinta
        Printer1.IsiUlangTinta("Hitam");

        // 7. Membersihkan print head
        Printer1.BersihkanPrintHead();

        // 8. Mengatur resolusi cetak
        Printer1.AturResolusiCetak(1200);

        // 9. Membatalkan pencetakan
        Printer1.BatalkanPencetakan();


        Lampu Lampu1 = new Lampu("Philips", "LED", 10, 220, "Putih", 4500, "Bundar", 
        "Mengatur kecerahan, Timer, Mengganti warna lampu");

        // 1.  Menampilkan informasi lampu
        Lampu1.TampilkanInfoLampu();

        System.out.println("__________Behavior Lampu__________");
        // 2. Menyalakan lampu
        Lampu1.NyalakanLampu();

        // 3. Mengatur kecerahan lampu
        Lampu1.AturKecerahan(75);

        // 4. Mengatur timer lampu
        Lampu1.AturTimer(60);

        // 5. Mengganti warna lampu
        Lampu1.GantiWarnaLampu("Kuning");

        // 6. Memadamkan lampu
        Lampu1.PadamkanLampu();

        Snack Snack1 = new Snack("Chitato", "Keripik kentang", "Indofood", "Asin", "Kentang", 
        200, 60, LocalDate.of(2025, 12, 1));

        // 1. Menampilkan informasi snack
        Snack1.TampilkanInfoSnack();

        System.out.println("__________Behavior Snack__________");
        // 2. Membuka snack
        Snack1.BukaSnack();

        // 3. Mengonsumsi snack
        Snack1.KonsumsiSnack();

        // 4. Menyimpan snack
        Snack1.SimpanSnack();

        // 5. Membagikan snack
        Snack1.BagikanSnack();

        // 6. Membuang snack
        Snack1.BuangSnack();
    }
}
