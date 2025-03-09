menggambarkan komponen utama, hubungan (struktur), dan komponen saling berinteraksi satu sama lain, mencakup
- Business Strategy 
- Design
- Quality Attributes
- IT Environment
- Human Dynamics

Software architecture dan design bisa dibagi menjadi 2,
- **Software architecture**, Fase ini fokus pada nonfunctional req yang dibentuk dan dipisahkan berdasarkan functional req.
- **Architecure design**, Fase ini bertujuan untuk memenuhi fungsional req

Software architecture berfungsi sebagai blueprint, yg membantu mengatur kompleksitas sistem dan menentukan bagaimana komponen-komponennya berkomunikasi dan bekerja sama.

Tujuannya adalah memenuhi teknis requirement dan operasional sambil meningkatkan kualitas seperti **kinerja, keamanan,** dan **keandalan**

Architecture melibatkan keputusan penting tentang 
1. **Komponen utama** dan cara mereka terhubung 
2. **Cara komponen bekerja sama** untuk mencapai tujuan sistem.
3. **Penyusunan komponen** menjadi bagian yang lebih besar.
4. **Penyesuaian dengan tujuan bisnis**.

Architecture fokus pada **hal-hal penting** yang berdampak jangka panjang, seperti struktur utama dan kualitas sistem, tanpa membahas detail kecil. Dengan begitu, arsitektur menjadi dasar untuk membuat sistem yang baik dan sesuai kebutuhan.

#### **Architectural Style**
atau **Architectural Pattern**, adalah prinsip yg membentuk suatu aplikasi. **Architectural Style** mendefinisikan kerangka abstrak utk suatu keluarga sistem menentukan bagaimana komponen-komponen sistem diatur 

#### **Architectural Design**

| **Kategori**      | **Gaya Arsitektur**                     | **Deskripsi**                                                                                        |
| ----------------- | --------------------------------------- | ---------------------------------------------------------------------------------------------------- |
| **Communication** | **Message bus**                         | Menggunakkan software yang bisa menerima dan mengirim pesan melalui beberapa saluran komunikasi.     |
|                   | **Service-Oriented Architecture (SOA)** | Aplikasi yang menawarkan dan menggunakan fitur sebagai layanan, dengan kontrak dan pesan yang jelas. |
| **Deployment**    | **Client/server**                       | Sistem dibagi menjadi dua bagian: klien yang req dan server yang resp.                               |
|                   | **3-tier or N-tier**                    | Fungsi sistem dipisahkan ke dalam beberapa bagian, dengan setiap bagian berada di komputer berbeda.  |
| **Domain**        | **Domain Driven Design**                | Fokus pada model bisnis dan mendefinisikan objek bisnis berdasarkan entitas dalam bisnis.            |
| **Structure**     | **Component Based**                     | Aplikasi dipecah menjadi komponen yg bisa digunakan kembali, dengan communication interface yg jelas |
|                   | **Layered**                             | Aplikasi dibagi menjadi beberapa lapisan                                                             |
|                   | **Object oriented**                     | Aplikasi dibagi menjadi objek, di mana setiap objek memiliki data dan perilaku yang relevan          |
#### **Kinds of Architechture**
ini biasanya ada pada suatu perusahaan, kdang disebut  **Office/Factory Architecture**
1. **Business Architecture**
- Fokus pada **strategi bisnis, tata kelola, organisasi, dan proses bisnis utama**.
- Bertujuan untuk menganalisis dan merancang **cara bisnis beroperasi**.

2. **Application Architecture (Software Architecture)**
- Berfungsi sebagai **blueprint** untuk sistem aplikasi yang digunakan perusahaan.
- Menjelaskan **bagaimana aplikasi berinteraksi** satu sama lain dan mendukung proses bisnis.

3. **Information Architecture
- Menentukan **data yang dimiliki perusahaan** (baik data logis maupun fisik).
- Mengatur **cara data disimpan, diakses, dan dikelola**. 

4. **IT Architecture**
- Menentukan **hardware and software** yang membentuk sistem IT perusahaan       
- Membangun **dasar teknologi** untuk mendukung seluruh sistem informasi organisasi.
#### **Architechture Design Process**
Proses desain arsitektur bertujuan untuk memecah sistem menjadi berbagai komponen dan interaksinya agar memenuhi functional req dan non-functional req. Berikut adalah langkah-langkah utama dalam proses desain arsitektur:

1. **Memahami Masalah**
    - Langkah ini sangat penting karena memengaruhi kualitas desain.
    - Tanpa pemahaman yang jelas tentang masalah, sulit untuk menciptakan solusi yang efektif.
    - Banyak proyek gagal karena tidak menyelesaikan masalah bisnis yang valid atau tidak memberikan ROI (Return on Investment) yang nyata.
    
2. **Mengidentifikasi Elemen Desain dan Hubungannya**    
    - Membangun dasar untuk mendefinisikan batasan dan konteks sistem.
    - Memecah sistem menjadi komponen utama berdasarkan persyaratan fungsional.
    - Menggunakan matriks struktur desain (DSM) untuk menunjukkan ketergantungan antara elemen desain.
    - Validasi awal arsitektur dilakukan dengan mendeskripsikan contoh sistem (desain arsitektur berbasis fungsionalitas).
    
3. **Mengevaluasi Desain Arsitektur**
    - Memberikan perkiraan untuk setiap atribut kualitas guna mengumpulkan data kualitatif atau kuantitatif.
    - Mengevaluasi kesesuaian arsitektur dengan persyaratan atribut kualitas.
	    - Jika semua atribut kualitas memenuhi standar, proses desain selesai.
	    - Jika tidak, lanjut ke fase transformasi arsitektur.

4. **Transformasi Desain Arsitektur**    
    - Dilakukan jika desain tidak memenuhi persyaratan atribut kualitas.
    - Mengubah desain hingga memenuhi req dengan mempertahankan fungsionalitas domain.
    - Menerapkan operator desain seperti dekomposisi, replikasi, kompresi, abstraksi, dan pembagian resource
    - Desain dievaluasi kembali, dan proses diulang jika diperlukan.
    - Transformasi biasanya meningkatkan beberapa atribut kualitas sementara yang lain mungkin terpengaruh negatif.

#### **Architechture Model**
Software Architecture harus menggambarkan komponen-komponennya, koneksi antar komponen, interaksi yang terjadi, serta konfigurasi penerapan semua komponen tersebut. Berikut adalah beberapa cara untuk mendefinisikan arsitektur perangkat lunak:
	1. **UML (Unified Modeling Language)**
     - UML adalah alat berbasis objek yang digunakan untuk pemodelan dan desain perangkat lunak
	- Membantu memvisualisasikan struktur dan perilaku sistem

	2. **Model Tampilan Arsitektur (Model 4+1)**
    - Model ini merepresentasikan functional req dan non-functional req dari aplikasi perangkat lunak.
    - Menyediakan pandangan yang berbeda (seperti logis, proses, fisik, dan pengembangan) untuk memahami sistem secara menyeluruh.
        
	3. **ADL (Architecture Description Language)**
    - ADL digunakan untuk mendefinisikan arsitektur perangkat lunak secara formal dan semantik.
    - Memberikan deskripsi yang jelas dan terstruktur tentang arsitektur sistem.

#### **Diagram Struktural**
Diagram struktural menggambarkan aspek statis dari suatu sistem, yaitu bagian-bagian yang membentuk struktur utama dan bersifat stabil.  Terdiri atas  : 
- Class diagram  
- Object diagram
- Component diagram
- Deployment diagram
- Package diagram
- Composite structure

#### **Contoh Software Architecture
1. **Layered Architecture Pattern**
	Pola arsitektur yang banyak digunakan dalam pengembangan perangkat lunak karena kemudahan pengembangan dan perawatannya.
	
	### 6 Lapisan Utama dalam Sistem Informasi:
	 1. User Interface  (tampilan UI, bisa browser atau CLI)
	 2. Presentation (Layout, input)
	 3. Application (App. Controllers, services, logika aplikasi dan flowwork)
	 4. Domain Model (Domain services, Value Objects, logika inti aplikasi)
	 5. Persistance (Query object, ORM, mengelola akses ke data)
	 6. Data (Database server, Search Server, 3rd party API)
	
	Digunakan utk
	- Aplikasi bisnis biasa yang lebih dari sekedar CRUD
	- Aplikasi fast development dengan pengalaman development team yang beragam.
	- Aplikasi memiliki standar pengujian dan pemeliharaan yang jelas.

2. **Microkernel Architecture Pattern**
	Pola arsitektur untuk aplikasi yang memerlukan fleksibilitas, kustomisasi, dan kemampuan beradaptasi terhadap perubahan. Terdiri atas plug-in component (functional tambahan) dan core system. Sehingga memudahkan development dan maintainance
	
	Digunakan utk
	- Aplikasi yang memerlukan fleksibilitas dan kustomisasi.
	- Aplikasi dengan flowwork kompleks.
	- Aplikasi yang menggabungkan, memproses, dan mengirim data dari berbagai sumber.

3. **Microservices Architecture Pattern**
	Pola ini membagi sistem menjadi beberapa aplikasi kecil dan independen (microservice) yang bekerja sama dalam satu sistem besar.
	
	Setiap microservice memiliki tanggung jawab sendiri dan hanya berkomunikasi dengan layanan lain melalui API Gateway, sehingga apabila client mengakses suatu microservices, maka microservice tersebut terkoneksi dengan microservice lain .
		
	Digunakan utk 
	1. Aplikasi Web dan Bisnis yang Berkembang Pesat
	2. Data center dengan border yang Jelas
	3. Startup Web dengan Komponen Kecil
	4. Development team yang Tersebar di Seluruh Dunia

4. **Event-based Architecture Pattern**
	Pola arsitektur yang digunakan untuk mengembangkan sistem yang sangat skalabel dengan memanfaatkan event sebagai pemicu. Sistem bereaksi terhadap event seperti input user atau perubahan data, lalu diproses secara asinkron

	Cara kerja :
	Event Data ---> Publisher ---> Event Data Score ---> Subscriber ---> Database, File System, Apps (Multicast)

	Digunakan utk 
	1. User interface
	2. Aplikasi yang memiliki dataflow asinkron
	3. Aplikasi kompleks yang memerlukan dataflow yang lancar dan akan didevelop lagi

5.  **Space-based Architecture Pattern**
	Pola arsitektur yang dirancang untuk mengatasi masalah konkurensi dan skalabilitas, terutama pada aplikasi dengan volume user yang tidak dapat diprediksi. Menghilangkan bottleneck database tradisional dengan menyimpan dan memproses data dalam memori terdistribusi

	Cara kerja :
	Data disimpan dalam **memori terdistribusi** di beberapa server, sehingga adanya pemrosesan paralel dan skalabilitas tinggi.
	**Processing Unit** <--> **Processing Unit** <--> **Processing Unit** 
				<-- **Virtualized Middleware** -->
	
	**Virtualized Middleware:** Lapisan middleware yang mengatur grid seperti Messaging Grid, Data Grid, Processing Grid, dan Deployment Manager
	
	Digunakan utk
	- Social media
	- Aplikasi dengan big data seperti log user dan clickflow
	- Aplikasi dengan low-rated data yg dapat hilang
	