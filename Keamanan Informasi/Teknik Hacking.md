Untuk menangkap pencuri, kita harus memahami cara kerja pencuri. Begitu juga dalam keamanan siber, kita perlu memahami teknik yang digunakan oleh hacker.

#### Hacker, Cracker, dan Script Kiddies
   Orang yang suka mengutak-atik komputer, termasuk pemrograman.
-   Black Hat Hacker (Cracker/Attacker/Intruder): Hacker yang merusak.
-   White Hat Hacker: Analis keamanan, konsultan keamanan, atau ethical hacker.
-   Gray Hat Hacker: Bermuka dua, kadang membantu, kadang merusak.
		
 - Cracker: Hacker yang merusak sistem dengan niat jahat.
 - Script Kiddies: Orang yang tidak memiliki keahlian khusus dalam hacking, biasanya hanya download tool hacking dari internet.    

####  Ethical Hackers vs. Crackers
- **Hacker**:    
    - Biasanya adalah programmer yang terus mencari pengetahuan baru.
    - Berbagi informasi yang ditemukan.
    - Tidak berniat merusak data.        
- **Cracker**:
    - Melanggar integritas/kode etik sistem dengan niat jahat.
	    - Menghancurkan data penting atau menyebabkan masalah.

#### Tipe Hacker dan Objectives
- Hacker : utk challenge dan status 
- Spies : utk mengambil info demi keuntungan politik 
- Terrorists :  utk menimbulkan ketakutan  demi keuntungan politik 
- Corprorate Raiders : karyawan suatu perusahaan ngebreach sistem kompetitor utk keuntungan finansial
- Professional Criminals: Menembus sistem untuk keuntungan finansial pribadi
- Vandals: Menembus sistem untuk menyebabkan kerusakan.

#### Fase Hacking
1. **Reconnaissance (Pengintaian)**
	 - Mengumpulkan info target seperti nama domain, IP Address, device, services, ISP
	 - Tools : `nslookup, whois, dig` (perintah pada cmd)
2. **Scanning (Pengintaian)**
	 - Melakukan probing/scanning utk mencari celah, cth : Port Scanning
	 - Tools : `netstat` (tool utk mengamati state server, service, interface, dan siapa yg terhubung), `nmap` (software scanner pling tua tpi msih banyak digunakan), `nessus` (apli utk mengetahui weakness pada suatu komputer (port) atau celah lainq)
 3. **Gaining Access**
	 - Mencoba masuk ke sistem dengan memanfaatkan celah keamanan, 
		 - cth: buffer overflow (Cracker mengirimkan lebih banyak data daripada yang dapat dimuat, sehingga error)
		 - Masuk secara paksa secara fisik
		 - Network enumeration (nullsession) : menggunakkan account name/user id yg sah
		 - SQL injection (Cracker mengirim input dalam bentuk query sehingga bisa masuk)
		 - Password cracking.
			 - Metode cracking password:
			    - **Dictionary Attack**: Mencoba kata-kata dari kamus.
			    - **Brute Force Attack**: Mencoba semua kombinasi karakter.
			    - **Hybrid Attack**: Kombinasi dictionary dan brute force.
			    - **Shoulder Sniffing**: Ngintip
			    - **Dumpster Diving**: Mencari catatan di tmpt sampah
4. **Maintaining Access (Mempertahankan Akses)**:
    - Hacker mempertahankan akses yang telah didapatkan dengan membuat backdoor, rootkit, atau duplikat user.       
    - **Rootkit**: Program komputer untuk mengendalikan komputer tanpa sepengetahuan korban
    - Dapat menyembunyikan proses, file, atau registry entry, event log serta menginterupsi sistem, menginterupsi command debug dan system console.
    - Rootkit terbagi menjadi Rootkit biasa (trojan) dan Rojan Kernel (dalam bentuk device driver)
5. **Covering Tracks (Menutupi Jejak)**:
	- Menghapus log file dan event viewer untuk menghilangkan jejak aktivitas hacking pada firewall, IDS (Intrusion Detection System), apli 
#### **Social Engineering**
Seni dan ilmu memaksa orang untuk memenuhi harapan KITA
Seni dan ilmu memanipulasi orang untuk memberikan informasi sensitif (pada cyber security).
- **Bentuk Social Engineering**:
    - **Telepon**: Meniru seseorang yang berwenang untuk menarik informasi (call scammer)
    - **Dumpster Diving**: Mengumpulkan informasi dari tempat sampah
    - **Online**: Mengirim email palsu yang meminta password (link phising)
    - **Reverse Social Engineering**: Sabotase, iklan, dan bantuan palsu
#### **Port**
Port pada suatu komputer terbagi menjadi 
1. 0 - 1023 (Well Known/Reserved)
	cth :FTP (20 n 21), SSH (22), DNS (53), Telnet (23), SSL (443), HTTP (80)
2. 1024 - 49.151 (Registered)
	cth: MySQL (3306), MSSQL (1433), OpenVPN (1194) 
3. 49.152 - 65.535 (Dynamic)
	cth :apli yg ingin berkomunikasi dengan TCP/UDP
#### **Teknik Port Scanning**
Mencari port mana yang terbuka
- **Open Scanning**: Teknik yang mudah dideteksi, menggunakan 3-way handshake TCP/IP (SYN,SYN+ACK,ACK) (Synchronize-Acknowledge)
- **Half-Open Scanning**: Memutus koneksi sebelum 3-way handshake selesai, sulit dideteksi oleh IDS dan Firewall, target utk SYN Flood/DOS
- **Stealth Scanning**: Scanning yang sulit dideteksi, menggunakan paket dengan flag FIN, ACK, atau Null, hasil kurang akurat
#### **Mengatasi Port Scanning**
- Implementasi **Stateful Packet Filtering Firewall**.
- Blokir port yang tidak digunakan.
- Filter paket ICMP tipe 3 dan 8.
- Lakukan monitoring aktif pada jaringan.
#### **Panduan Mengamankan Password**
- Kombinasikan huruf besar, kecil, angka, dan karakter khusus.
- Hindari kata-kata yang mudah ditebak (kata kamus, nama identitas, informasi personal).
- Gunakan tool yang meminta perubahan password secara berkala.
- Jangan bagikan password melalui email atau media elektronik tanpa enkripsi.
- Jangan menulis password pada media kertas/elektronik
- Edukasi pengguna tentang keamanan password.