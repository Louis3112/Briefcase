package Tutorial;
// java adalah salah satu bahasa pemrograman yg populer, mempunyai slogan "Write Once, Run Anywhere"
// fun fact : kalau misalkan nama program/nama class berubah, maka 2 2nya harus berganti (jika bkn vscode, maka hrus disamakan namanya)

import java.util.Scanner; // import class (library dalam c++) untuk menerima input dari user
public class Catatan{ // class <class name>, nama class harus huruf besar (tanpa public, program dapat berjalan dengan benar), shingga kalau dirun namanya Program.main()
    // semua statement harus berada di dalam suatu class
    // class andaikan sebuah blueprint coding
    // object adalah nama objek yg kita gunakan pada blueprint kita 

    static void welcome(){
        System.out.println("Hello World");
    }
    
    static void welcomeName(String name){
        System.out.println("Welcome, " + name);
    }

    public static void main(String[] args){ // <modifier> <return type> <method name> (<parameter>)
    // public artinya method dapat diakses diluar class, sehingga JVM (Java Virtual Machine) dapat run main
    // static artinya method tidak perlu mengakses instance/object, sehingga hanya perlu dipanggil biasa maka program dapat berjalan (dan diperlukan agar method dapat dipanggil dalam main)
    // void artinya method tidak mereturn nilai 
    // string[] args artinya string akan dijalankan oleh program 
    // main adalah starting point dari Java Program, sehingga JVM akan run dari sini 

        Scanner sc = new Scanner(System.in); // sc itu nama object untuk input, new Scanner untuk memberitahu kalau ada object baru, dan menggunakkan parentheses () 
        System.out.println("Hello World"); // mengeluarkan output Hello World, dan disebut sebagai statement, harus ditutup semicolon (titik koma)
        //println langsung menambahkan line baru, tidak perlu endl
        System.out.println();

        System.out.print("Hello "); // Java itu case-sensitive (harus ditulis sesuai huruf besar huruf kecil), sama seperti C++
        System.out.println ("World"); // Jika tdk menggunakkan println, maka outputnya akan sebaris
        
        String Name= "Louis"; // string huruf besar karena string anggapannya adalah class pada Java
        int Age = 19; // "The value of the local variable Age is not used itu bukan error" , tpi warning aja kalau misalkan variabelnya gak dipake
        double Weight = 65.6; // double memakan lebih banyak memori, tetapi lebih akurat (disarankan untuk hasil pembagian atau currency)
        float Height = 169.7f; // float harus menggunakkan f diblkg, jika tidak maka error 
        char Grade = 'A'; // int, double, float, char, boolean adalah tipe data primitif
        boolean isOnline = true;
        System.out.println("Hello" + " " + Name);
        System.out.println();

        int x = 5;
        int y = 8;
        System.out.println(x+y);

        // tapi jika
        int a = 7;
        int b = 6;
        double result = a + b;
        System.out.println(result); // maka outputnya 13.0

        String FirstName = "Louis";
        String LastName = "Nathan";
        String FullName1 = FirstName + LastName; // maka digabung menjadi LouisNathan, tapi supaya tidak ribet, bisa tambahin spasi di salah satu string 
        String FullName2 = FirstName + " " + LastName; // supaya ada jarak, maka akan menjadi Louis Nathan
        System.out.println(FullName1);
        System.out.println(FullName2);
        System.out.println();

        String InputName = sc.nextLine(); // disini kita bisa menginputkan string, nextLine karena artinya program menerima semua input sampai Line selesai 
        System.out.println("Name: " + InputName); // kalau di c++, bisa langsung cout << "Name: " << InputName

        int Year = sc.nextInt(); // untuk menginputkan int
        System.out.println("Born: " + Year);

        double NowWeight = sc.nextDouble();
        System.out.println("Weight: " + NowWeight);
        System.out.println();
        sc.close(); // sbnrnya ada warning kalau sc tidak ditutup, maka dilakukan seperti ini
        
        if(Weight > 0){ // cara menggunakkan condisional juga sama dengan C++
            if(Weight < 50){
                System.out.println("Very Underweight");
            }
            else if (Weight > 50 && Weight < 60){
                System.out.println("Underwight");
            }
            else if (Weight > 60 && Weight < 80){
                System.out.println("Stable");
            }
            else if (Weight > 80 && Weight < 90){
                System.out.println("Obese");
            }
            else if (Weight > 90){
                System.out.println("Very Obese");
            }
        }        
        else {
            System.err.println("Weight Error");
        }
        // dapat juga menggunakkan switch case, sama seperti ketika menggunakkan c++
        // penggunaan if, for dan while juga sama seperti di c++

        int[] numbers = new int[5]; // untuk java, bisa juga menggunakkan int numbers[], tetapi setelah itu tidak harus menggunakkan new tipe data[banyaknya data]
        // kalau di c++ tinggal int numbers[5];

        // untuk pengaturan indeks sama aja, tdak ada yg berbeda

        char[] alphabets = {'a','b','c','d','e'}; // brrti tidak perlu new int
        System.out.println(alphabets.length); // maka menampilkan ukuran arr alphabets 

        // string str = "Louis Nathan";
        // System.out.println(str.length()); // maka menampilkan ukuran string (banyaknya char)

        for(int i = 0; i < alphabets.length; i++){
            System.out.print(alphabets[i] + " "); // maka menampilkan secara urut alphabets
        }
        /* for(int i : alphabets){ // atau secara singkat menggunakkan ini, yg artinya for each i in alphabets
            System.out.print(i); // maka menampilkan secara urut alphabets
        } */
        
        String [][] Point = {
            {"Alpha", "Bravo", "Charlie"},
            {"Delta", "Echo", "Fanta"}};
        System.out.println(Point[1][0]); // maka outputnya Delta, karena dihitung baris dulu, baru kolom

        for(int i = 0; i < Point.length; i++){ // i mengambil ukuran baris
            for(int j = 0; j < Point[i].length;j++){ // j mengambil ukuran kolom, mengapa Point[i].length, karena mengambil banyaknya ukuran elemen dalam suatu baris
                System.out.print(Point[i][j] + " "); // maka menampilkan semua elemen dalam Point
            }
        }
        
        /* atau bisa menggunakkan 
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 3; j++){
                    System.out.print(Point[i][j] + " ");
                }
            }
        */
        
        /* untuk array 3d
            String[][][] Point = {
            {
                {"Alpha1", "Bravo1", "Charlie1"},
                {"Delta1", "Echo1", "Fanta1"}
            },

            {
                {"Alpha2", "Bravo2", "Charlie2"},
                {"Delta2", "Echo2", "Fanta2"}
            }
        };
            Point[0][1][0] = Delta1
            [] pertama menjelaskan array mana yg diambil, apakah yg pertama atau kedua 
            [] kedua menjelaskan baris 
            [] ketiga menjelaskan kolom 

            for(int i = 0; i < Point.length; i++){
                for(int j = 0; j < Point[i].length; j++){
                    for(int k = 0; k < Point[i][j].length; k++){
                        System.out.print(Point[i][j][k] + " ");
                    }
                    System.out.println();
                }
                System.out.println();
            }
         */

        // dalam Java, terdapat method(), method() sama seperti fungsi. Tapi kalau method harus berhubungan pada suatu class dan berhubungan dengan object
        // sedangkan fungsi dapat bergerak secara bebas 
        // println() dan print() adalah method 

        // method harus diletakkan diluar public static void main , tapi harus di dalam class 
        welcome(); // dan bisa dipanggil seperti biasa 
        welcomeName("Louis"); // method juga mengandung parameter, dan bisa terdiri atas 1 atau 2 parameter
    }
}
