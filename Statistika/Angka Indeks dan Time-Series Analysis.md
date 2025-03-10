#### **Angka Indeks**
- angka yg menunjukkan perubahan pada suatu variabel berdasarkan perbedaan waktu, lokasi, atau karakteristik lainnya.
- digunakan untuk mengukur kenaikan atau penurunan, terutama bisnis
- cth: Indeks Harga Konsumen (IHK) /  customer index price untuk mengukur biaya hidup di suatu daerah.
- **Waktu Dasar** dan **Waktu Berjalan** adalah dua titik waktu yang digunakan sebagai perbandingan dalam penghitungan angka indeks.

	cth 
	- Indeks Harga Konsumen memiliki variabel terdiri atas harga barang dan jasa, bobot konsumsi, pola konsumsi rumah tangga
	- Indeks Pembangunan Manusia memiliki variabel terdiri atas harapan hidup, rata" lama sekolah, pengeluaran per kapita 
#### **Jenis Angka Indeks
1. **Angka Indeks Sederhana**
- Menghitung angka indeks (perubahan) utk satu variabel.
	$$It,0​​=pt/p0​​×100 $$
	dmn, pt = nilai variabel periode berjalan (di tahun skrg)
		po = nilai variabel periode dasar (di tahun ini)
	
	cth: thun 2025, harga emas 1.200.000/gram, thun 2020 harga emas 800.000/gram 
		I(2025,2020)=1.200.000/800.000​​×100
		I(2025,2020)=1.5×100
		I(2025,2020)=150
	brrti, harga emas mengalami kenaikan sebesar 50% (150-100)
	
2. **Angka Indeks Agregatif**
- Menghitung angka indeks (perubahan) lebih dari satu variabel, tujuannya menyederhanakan  angka indeks dari berbagai variabel. Variabel dpt bersifat homogen/heterogen

Angka indeks agregatif terdiri atas 2 :
- **Angka Indeks Agregatif Tidak Tertimbang**: angka indeks tidak memperhatikan bobot variabel, menganggap bahwa semua barang sama
	$$It,0​=Σpt/Σp0​​×100$$
		cth: thun 2025, harga beras 12.000/gram, harga gula 18.000/gram, harga minyak 25.000/gram, 
		thun 2020 harga beras 10.000/gram,  harga gula 14.000/gram,harga minyak 20.000/gram, 

	It,0​=12.000 + 18.000 + 25.000/10.000 + 14.000 + 20.000×100
	It,0​=55.000/44.000×100
	It,0​=125
		brrti, terjadi kenaikan 25%
		
- **Angka Indeks Agregatif  Tertimbang**: angka indeks memperhatikan bobot variabel, adanya perhitungan cacah variabel utk mengetahui bobot masing" variabel, menganggap bahwa tiap barang punya bobot yg berbeda (tergantung kondisi) dan hasilnya lebih akurat

	cth : IHK mengukur harga barang dan jasa, tetapi tiap barang punya bobot harga yang berbeda
		beras dan sembako punya bobot yg besar karena lebih sering dibeli
		hp punya bobot lebih ringan karena jarang dibeli
	kalau tidak menggunakkan agregatif tidak tertimbang.. maka angka indeks bisa menjadi tidak akurat

	dapat menggunakkan rumus Laspeyres maupun Paasche
		rumus Laspeyres bobot pada waktu dasar (p0)
		rumus Paasche bobot pada waktu berjalan (pt)
	sehingga, hasil angka indeksnya berbeda
	
	Rumus Laspeyres cenderung menghasilkan angka indeks yang lebih besar daripada rumus Paasche untuk data yang sama, tapi nilai Paasche lebih merepresentasikan kondisi sekarang

	Rumus Laspeyres menggunakan jumlah barang (quantity) pada tahun dasar sebagai bobot
		$$It,0​=∑(pt * q0)/∑(p0​​ * q0)×100$$
	Rumus Paasche menggunakan jumlah barang (quantity) pada tahun berjalan sebagai bobot
$$		It,0​=∑(pt * qt)/∑(p0​​ * qt)×100$$

	Jika IL (Las)>IP (Paa) maka ada efek substitusi, artinya masyarakat mengurangi konsumsi barang yang harganya naik. 
	Namun jika IL (Las)<IP (Paa) , maka ada perubahan pola konsumsi pada barang yang mengalami kenaikan harga , tapi bisa jadi ada faktor lain (jumlah penduduk,jumlah konsumsi)

	Maka, ada cara lain yaitu Indeks Fisher
		Indeks Fisher mengatasi kelemahan Laspeyres (yang cenderung melebih-lebihkan) dan kelemahan Paasche (yang cenderung meremehkan kenaikan harga)
		
	Indeks Fisher juga disebut "indeks ideal" karena lebih akurat 
	Indeks Fisher juga disebut Indeks Harga Rata-rata Geometrik karena merupakan rata-rata geometrik dari Indeks Laspeyres (𝑰𝑳) dan Indeks Paasche(𝑰𝑷).

	IF =√IL * IP
	IF = √123.91 * 123.55 = 123.73

    Jika Indeks > 100, maka ada inflasi (kenaikan harga)
    Jika Indeks < 100, maka ada deflasi (penurunan harga)
    Jika Indeks == 100, maka tidak ada perubahan harga
	    maka, IF tersebut mengalami inflasi (123.73-100 = 23.73)

	- Angka Indeks termausk statistika deskriptif, karena utk meringkas data yg ada dan menyajikan data dalam bentuk yg mudah dipahami (grafik, mean, median, tabel)
	- Angka Indeks Indeks Harga Konsumen (IHK), Indeks Harga Produsen (IHP), dan Indeks Pembangunan Manusia (IPM) utk menggambarkan tren dari waktu ke waktu, BUKAN utk mengambil kesimpulan 
	- Statistika inferensial juga menggunakkan angka indeks utk membuat kesimpulan dari sampel spti uji hipotesis tentang inflasi, membuat model prediksi harga di masa depan berdasarkan tren indeks harga
#### **Time Series Analysis
-  Metode peramalan berdasarkan pola hubungan antara variabel dan waktu, memperhatikan tipe/pola data 
- **Pola Data Time-Series**:
    - **Trend**: Kecenderungan meningkat/menurun dalam jangka panjang.
	    Metode analisis yg tepat
	    1. Metode Moving Average
	    2. Metode Regresi Linear 
	    3. Metode Kuadrat Terkecil
	    
    - **Musiman**: Fluktuasi berulang dalam periode tertentu (mingguan, bulanan).
	    1. Metode Ratio to Moving Average
	    2. Metode Percentage Average
	
    - **Siklis**: Fluktuasi jangka panjang (misalnya siklus ekonomi).
	    1. Metode Spectral Analysis
	    2. Metode Box-Jenkins (ARIMA)

    - **Acak**: Perubahan tidak teratur tanpa pola jelas.
		1. Metode Monte Carlo
		2. Metode Exponential Smoothing
	
	##### **Metode pada Time Series
	1. Moving Average 
		menghaluskan fluktuasi data dan mengidentifikasi tren jangka panjang dengan menghitung rata" nilai pada suatu periode tertentu

			
		terbagi menjadi 3
		1. Simple Moving Average
			cocok untuk tren jangka panjang tanpa banyak perubahan cepat
			menghitung rata-rata dari sejumlah periode sebelumnya
					$$ Ft = At-1 + At-2 + At-3... + At-n / n $$
			dmn, 
				Ft = Peramalan utk periode mendatang 
				n = jumlah periode yg diramalkan
				At-1 = nili data pada periode tersebut 
	
			cth : data 1 = 650, data 2 = 678, data 3 = 720 
				F4 = 720 - 678 - 650 / 3
				F4 = 682.67
				
		2. Weighted Moving Average
			lebih baik untuk memberi bobot lebih besar pada data terbaru (utk menghindari fluktuasi data) dan lebih bagus dari Simple Moving Ave 
			
			Daripada menggunakan bobot 1/4 atau 0.25, untuk 4 periode dalam moving average, dapat digunakan 0.10, 0.20, 0.30, dan 0.40 (catatan: harus dijumlahkan = 1.0)
			pemberian bobot bebas, tapi biasanya yang terbaru akan punya bobot lebih banyak

		$$ Ft = Wt-1*At-1 + Wt-2*At-2 + Wt-3*At-3... + Wt-n*At-n $$
			dmn, 
				Ft = Peramalan utk periode mendatang 
				Wt-1 = bobot data 
				At-1 = nilai data pada periode tersebut 
				
			cth : data 1 = 650, w = 0.5, data 2 = 678, w = 0.3, data 3 = 720, w = 0.2
					F4 = 720x05 - 678x0.3 - 650x0.2
					F4 = 693.4
					
		3. Exponential Moving Average
			berguna untuk analisis data yang berubah cepat (misalnya, harga saham)
			perhitungan lebih sederhana dan persyaratan data lebih sedikit, terutama dalam situasi yang memerlukan penggunaan data dari sejumlah besar periode masa lalu
			$$ Ft = Ft-1 + a(At-1 - Ft-1) $$
			dmn, 
				Ft = Peramalan utk periode mendatang 
				Ft-1 = Peramalan periode sebelumnya
				a = konstanta smooting alpha
				At-1 = nilai data pada periode tersebut 
				
			cth : data 1 = 650, data 2 = 678, data 3 = 720
			andaikan a = 0.1 dan 0.6 (bisa 2 nilai)
			
			karena F1 = A1, maka 
			F1 (a = 0.1) = 650
			F1 (a = 0.6) = 650
			
			maka, 
			F2 (a = 0.1) = 650 + 0.1 (650 - 650) = 650 
			F2 (a = 0.6) = 650 + 0.6 (650 - 650) = 650
			
			F3 (a = 0.1) = 650 + 0.1 (678 - 650) = 652.8
			F3 (a = 0.6) = 650 + 0.6 (650 - 650) = 666.8
			
			F4 (a = 0.1) = 652.8 + 0.1 (720 - 652.8) = 659.5
			F4 (a = 0.6) = 666.8 + 0.6 (720 - 666.8) = 698.72
#### **Metode Evaluasi**
- Evaluasi model regresi = proses mengukur seberapa baik model regresi dapat memprediksi nilai yg diinginkan berdasarkan data yg ada
- Sangat penting utk memastikan model dapat digunakan utk membuat prediksi lbih jauh
- ada RSS (Residual Sum of Squares) dan TSS (Total Sum of Squares)
$$ RSS=∑(yi​−yp​)2 $$
$$ TSS=∑(yi​−yˉ​i​)2 $$
	dmn 
		yi  = nilai asli
		yp = prediksi
		y-i = nilai rata"

	1. Residual Standar Error  (RSE)
		mencari error nilai regresi dalam memprediksi nilai
		didapat dari nilai populasi dan semakin kecil nilainya, semakin bagus
		RSE adalah standard deviation
		$$ RSE=√RSS/n-2 $$
		
	2.  Koefisien Determinasi (R²)
		mengukur seberapa baik model regresi menjelaskan variasi variabel dependen (Y)
		Menunjukkan proporsi keragaman YY yang dapat dijelaskan oleh variabel independen (XX) melalui hubungan linear.
	 
	 - R² memiliki rentang nilai antara **0** hingga **1**.
	- Jika R² mendekati **1**, model regresi semakin baik (variabel X menjelaskan Y dengan baik).
	- Jika R² mendekati **0**, model regresi buruk (variabel X tidak mampu menjelaskan Y). 
$$ R^2= 1 - RSS/TSS $$
	3.  Koefisien Korelasi (R)
		R mengukur kekuatan hubungan antara dua variabel.
		Nilai R selalu berada dalam rentang **-1** hingga **1**.
		
	- **R=1**: Korelasi positif sempurna (hubungan sangat kuat, searah).
	- **R=−1**: Korelasi negatif sempurna (hubungan sangat kuat, berlawanan arah).
	- **R≈0**: Tidak ada korelasi (hubungan sangat lemah atau tidak ada).
$$ R= √R² $$

	4.  Adjusted R Square(R² adj)
		 digunakan dalam regresi linier berganda untuk memperbaiki nilai koefisien determinasi (R2R2) dengan mempertimbangkan jumlah variabel independen (pp) dan ukuran sampel (nn).
		Adjusted R² memberikan penilaian yang lebih akurat tentang seberapa baik model menjelaskan variasi variabel dependen.	
			
		**Rentang Nilai**:
	    - Adjusted R² memiliki rentang nilai antara **0%** hingga **100%**.
	    - Semakin mendekati **100%**, semakin baik model regresi dalam menjelaskan variasi data.
$$ R²adj​=1− (RSS/TSS) * (n-1/n-p-1) $$

	5.  Mean Square Error (MSE)
		metode evaluasi yang mengukur rata-rata kuadrat kesalahan (error) antara nilai aktual dan nilai prediksi.
		Digunakan untuk mengevaluasi kinerja model peramalan atau regresi
	$$ MSE=RSS/n $$
	6.  Root Mean Square Error (RMSE)
		ukuran penyebaran residual. 
		Dengan kata lain, RMSE memberitahukan bahwa seberapa konsentrasi data disekitar garis regresi
			$$ RMSE = √RSS/n $$
	7. Mean Absolute Percentage Error (MAPE)
		metrik evaluasi yang mengukur rata-rata persentase kesalahan absolut antara nilai aktual (yi​) dan nilai prediksi (yi​^​).
	    Berguna ketika ukuran atau skala variabel prediksi penting dalam evaluasi.
	    		$$ MAPE = ∑|yi- yi​^|/yi * 100 persen/n $$
Studi Kasus
\[Y = -0.316 + 0.3 b1 + 1.102 b2\]

| No  | Total Fasilitas | Luas (m²) | Harga (juta rupiah) | Harga (juta rupiah) Prediksi | Kuadrat Residual \((y_i - y_i)^2\) |
| --- | --------------- | --------- | ------------------- | ---------------------------- | ---------------------------------- |
| 1   | 4               | 3         | 5,5                 | 4,188                        | 1,7                                |
| 2   | 6               | 4         | 7                   | 5,888                        | 1,2                                |
| 3   | 5               | 3         | 4                   | 4,487                        | 0,2                                |
| 4   | 5               | 4         | 5                   | 5,589                        | 0,3                                |
| 5   | 7               | 3         | 4,7                 | 5,085                        | 0,1                                |
| 6   | 3               | 4         | 4,5                 | 4,991                        | 0,2                                |
| 7   | 7               | 3         | 5                   | 5,085                        | 0,0                                |
| 8   | 6               | 2         | 3,5                 | 3,684                        | 0,0                                |
| 9   | 3               | 2         | 3                   | 2,787                        | 0,0                                |
| 10  | 3               | 3         | 3,5                 | 3,889                        | 0,2                                |

---
$$ RSS=∑(yi​−yp​)^2 = 4.2 $$
	$$ RMSE = √RSS/n $$	$$ RMSE = √4.2/10 = 0.6 $$
Model Prediksi dikatakan akurat jika kesalahan RMSE mendekati 0.