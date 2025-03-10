#include <iostream>
#include <cmath>
using namespace std;

void BubbleSortAscending(int Numbers[], int ArraySize);
void InsertionSortDescending(int Numbers[], int ArraySize);
void SelectionSortAscending(int Numbers[], int ArraySize);
void MergeSortDescending(int Numbers[], int Temp[], int ArraySize);
    void MSort(int Numbers[], int Temp[], int Left, int Right);
    void Merge(int Numbers[], int Temp[], int Left, int Mid, int Right);
void HeapSortDescending(int Numbers[], int ArraySize);
    void ShiftDown(int Numbers[], int Root, int Bottom);
void QuickSortAscending(int Numbers[], int ArraySize);
    void QSort(int Numbers[], int Left, int Right);
void ShellSortAscending(int Numbers[], int ArraySize);

bool SequentialSearch(int Numbers[], int Find, int ArraySize);
bool BinarySearch(int Numbers[], int Find, int ArraySize);
bool InterpolationSearch(int Numbers[], int Find, int ArraySize);

int main(){
    int CodeCount = 0, PowerCount = 0, HPCount = 0;
    int CardsCode[50];
    int CardsPower[50];
    int Temp[50];
    int CardsHP[50];
    int Choice;

    char Login = 'y';
    
    while(Login == 'y'){
        system("cls");
        cout << "==== Sorting RoboFight App ====\n";
        cout << "1. Insert all your RoboFight cards \n";
        cout << "2. Sort all your RoboFight cards\n";
        cout << "3. Find your Robofight cards\n";
        cout << "4. Exit\n";
        cout << "> ";
        cin >> Choice;

        if(Choice == 1){
            int ChoiceInsert;
            cout << "Select the method for inserting your cards\n";
            cout << "1. Insert cards based on Card code\n";
            cout << "2. Insert cards based on Power\n";
            cout << "3. Insert cards based on HP\n";
            cout << "> ";
            cin >> ChoiceInsert;

            switch (ChoiceInsert){
            case 1:
                while (true){
                int CodeCard;
                cout << "Insert your RoboFight's Card code (insert 0 to end) > ";
                cin >> CodeCard;
                    if (CodeCard == 0){
                        break;
                    }
                CardsCode[CodeCount] = CodeCard;
                CodeCount++;
                }
            break;

            case 2:
                while (true){
                int PowerCard;
                cout << "Insert your RoboFight's Power (insert 0 to end) > ";
                cin >> PowerCard;
                    if (PowerCard == 0){
                        break;
                    }
                CardsPower[PowerCount] = PowerCard;
                PowerCount++;
                }
            break;
            
            case 3:
                while (true){
                int HPCard;
                cout << "Insert your RoboFight's HP (insert 0 to end) > ";
                cin >> HPCard;
                    if (HPCard == 0){
                        break;
                    }
                CardsHP[HPCount] = HPCard;
                HPCount++;
                }
            break;

            default:
                cin.ignore();
                cout << "Invalid input\n";
                cin.get();
            break;
            } 
        }
        
        if(Choice == 2){
            int ChoiceSort;
            cout << "Select the method for sorting your cards\n";
            cout << "1. Sorting based on Card code (Ascending)\n";
            cout << "2. Sorting based on Card code (Descending)\n";
            cout << "3. Sorting based on Power (Ascending)\n";
            cout << "4. Sorting based on Power (Descending)\n";  
            cout << "5. Sorting based on HP (Ascending)\n";
            cout << "6. Sorting based on HP (Descending)\n";
            cout << "> ";
            cin >> ChoiceSort;

            switch(ChoiceSort){
                case 1:
                    BubbleSortAscending(CardsCode,CodeCount);
                    cout << "Sorted RoboFight's Card codes:\n";
                    for (int j = 0; j < CodeCount; j++){
                        cout << CardsCode[j] << " ";
                    } 
                    cout << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue";
                    cin.get();
                break;

                case 2:
                    InsertionSortDescending(CardsCode,CodeCount);
                    cout << "Sorted RoboFight's Card codes:\n";
                    for(int j = 0; j < CodeCount; j++){
                        cout << CardsCode[j] << " ";
                    }
                    cout << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue";
                    cin.get();
                break;

                case 3:
                    SelectionSortAscending(CardsPower,PowerCount); 
                    cout << "Sorted RoboFight's Card Power:\n";
                    for (int j = 0; j < PowerCount; j++){
                        cout << CardsPower[j] << " ";
                    }
                    cout << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue";
                    cin.get();
                break;
                
                case 4:
                    MergeSortDescending(CardsPower,Temp,PowerCount);
                    cout << "Sorted RoboFight's Card Power:\n";
                    for (int j = 0; j < PowerCount; j++){
                        cout << CardsPower[j] << " ";
                    }
                    cout << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue";
                    cin.get();
                break;

                case 5:
                    QuickSortAscending(CardsHP,HPCount); 
                    cout << "Sorted RoboFight's Card HP:\n";
                    for (int j = 0; j < HPCount; j++){
                        cout << CardsHP[j] << " ";
                    }
                    cout << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue";
                    cin.get();
                break;
                
                case 6:
                    HeapSortDescending(CardsHP,HPCount); 
                    cout << "Sorted RoboFight's Card HP:\n";
                    for (int j = 0; j < HPCount; j++){
                        cout << CardsHP[j] << " ";
                    }
                    cout << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue";
                    cin.get();
                break;

                default:
                    cin.ignore();
                    cout << "Invalid input\n";
                    cin.get();
                break;
            }
        }

        if(Choice == 3){
            int ChoiceSearch;
            bool Found;
            cout << "Find your RoboFight cards\n";
            cout << "1. Based on Card Code\n";
            cout << "2. Based on Power\n";
            cout << "3. Based on HP\n";
            cout << "> ";
            cin >> ChoiceSearch;

            switch (ChoiceSearch){
            case 1:
                int SearchCode;
                cout << "Find your card code > ";
                cin >> SearchCode;
                Found = SequentialSearch(CardsCode, SearchCode, CodeCount);
                
                if(Found == true){
                    cout << SearchCode << " is found, you have card with code " << SearchCode << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue\n";
                    cin.get();
                }

                else if(Found == false){
                    cout << SearchCode << " is not found, you do not have card with code " << SearchCode << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue\n";
                    cin.get();
                }
            break;
            
            case 2:
                int SearchPower;
                cout << "Find your card power > ";
                cin >> SearchPower;
                BubbleSortAscending(CardsPower, PowerCount);
                Found = BinarySearch(CardsPower, SearchPower, PowerCount);

                if(Found == true){
                    cout << SearchPower << " is found, you have card with power " << SearchPower << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue\n";
                    cin.get();
                }

                else if(Found == false){
                    cout << SearchPower << " is not found, you do not have card with power " << SearchPower << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue\n";
                    cin.get();
                }
            break;
            
            case 3:
                int SearchHP;
                cout << "Find your card HP > ";
                cin >> SearchHP;
                BubbleSortAscending(CardsHP, HPCount);
                Found = InterpolationSearch(CardsHP, SearchHP, HPCount);

                if(Found == true){
                    cout << SearchHP << " is found, you have card with HP " << SearchHP << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue\n";
                    cin.get();
                }

                else if(Found == false){
                    cout << SearchHP << " is not found, you do not have card with HP " << SearchHP << endl << endl;
                    cin.ignore();
                    cout << "Press Enter to continue\n";
                    cin.get();
                }
            break;

            default:
                cin.ignore();
                cout << "Invalid input\n";
                cin.get();
            break;
            }
        }

        if(Choice == 4){
            char Exit;
            cout << "Are you sure to exit the application? (y/n)\n";
            cout << "> ";
            cin >> Exit;

            if(Exit == 'y' || Exit == 'Y'){
                Login = 'n';
            }
                
                
            else{
                Login = 'y';
            }
        }
    }
    return 0; 
}

bool SequentialSearch(int Numbers[], int Find, int ArraySize){
    int i = 0;
    while (i < ArraySize && Numbers[i] != Find){
        i++;    
    }       
    if (i < ArraySize){
        return true;
    }
    else{
        return false;
    }      
}

bool BinarySearch(int Numbers[], int Find, int ArraySize){
    int Left, Mid, Right;
    Left = 0;
    Right = ArraySize - 1;
    while (Left <= Right){ // Selama awalan, pertengahan, akhiran tidak berada di data yg sama dan Found masih 0
        Mid = (Left + Right) / 2; // Dibuat patokan mid, dimana awalan dan akhiran
        if (Numbers[Mid] == Find){ // Jika Mid menemukan angka yg dicari, maka selesai
            return true;
        }
        else if (Find < Numbers[Mid]){ // Jika data lebih kecil dari Mid
            Right = Mid - 1; // maka ruang pencarian diperkecil ke kiri
        }
        else{ // Jika data lebih besar dari Mid
            Left = Mid + 1; // maka ruang pencarian diperkecil ke kanan
        }
    }
    return false; 
}

/*bool InterpolationSearch(int Numbers[], int Find, int ArraySize){
    int Low = 0, High = ArraySize - 1; // Low dimulai dari awal array, High dimulai dari akhir array
    float Pos1; 
    int Pos;

    do{
        Pos1 = (float)(Find-Numbers[Low])/(Numbers[High]-Numbers[Low]) * (High-Low) + Low; // rumus interpolasi
        Pos = Pos1; // maka dimasukkan dalam index

        if(Numbers[Pos] == Find){ // jika data ditemukan sebelum Find, maka data ditemukan 
            return true; // maka mengembalikan nilai true
        }

        if (Numbers[Pos] > Find){ // Jika hasil interpolasi masih lebih besar, maka High dikurangi hasil interpolasi
            High = Pos - 1;
        }

        else if(Numbers[Pos] < Find){ // Jika hasil interpolasi masih lebih kecil, maka Low dijumlahkan hasil interpolasi
            Low = Pos + 1; 
        }
    } while (Find >= Numbers[Low] && Find <= Numbers[High]); //selama Find berada di range array 
    return false;
}*/

bool InterpolationSearch(int Numbers[], int Find, int ArraySize){
    int Low = 0, High = ArraySize - 1;
    float Pos1; 
    int Pos;

    do{
        Pos1 = (float)(Find - Numbers[Low]) / (Numbers[High] - Numbers[Low]) * (High - Low) + Low; // rumus interpolasi
        Pos = static_cast<int>(Pos1); // konversi ke integer

        // Penanganan batas jika Pos di luar rentang array
        if (Pos < Low || Pos > High) {
            return false;
        }

        if (Numbers[Pos] == Find){ // jika data ditemukan sebelum Find, maka data ditemukan 
            return true;
        }

        if (Numbers[Pos] < Find){ // Jika hasil interpolasi masih lebih kecil, maka Low dijumlahkan hasil interpolasi
            Low = Pos + 1; 
        } else { // Jika hasil interpolasi masih lebih besar, maka High dikurangi hasil interpolasi
            High = Pos - 1;
        }
    } while (Find >= Numbers[Low] && Find <= Numbers[High]); // selama Find berada di range array 

    return false; // Jika loop selesai dan elemen tidak ditemukan, kembalikan false
}


void BubbleSortAscending(int Numbers[], int ArraySize){
    int i,j,temp;
    for(i = ArraySize-1; i >= 0; i--){//sistem decrement, semakin kecil i, maka array yg belakang sudah dicek
        for(j = 1; j <= i;j++){ //melakukan pengecekan dari depan ke belakang
            if(Numbers[j-1] > Numbers[j]){ //jika terdapat angka yang lebih besar di depan indeks j
                temp = Numbers[j-1]; // maka terjadi pertukaran
                Numbers[j-1] = Numbers[j];
                Numbers[j] = temp; 
            }
        }
    }
}

void InsertionSortDescending(int Numbers[], int ArraySize){ 
    int i,j,index;
    for (i = 1; i < ArraySize; i++){ // sistem increment
            index = Numbers[i]; //index menyimpan anggota ke i
            j = i; // j menyesuaikan urutan ke i
            while ((j > 0) && (Numbers[j-1] < index)){ //jika nomor sebelum j lebih besar dari angka index
                Numbers[j] = Numbers[j-1]; //maka nomor yg lebih besar akan "diinsertkan" ke urutan j, sehingga angka yg lebih besar "digeser" ke sebelah kanan
                j = j - 1; //j dikurangi 1 agar mengecek anggota sebelumnya, siapa tau ada yg lebih besar lagi
            }
            Numbers[j] = index; // jika memang tidak ada lagi, maka angka index dimasukkan ke urutan j
    }
}

void SelectionSortAscending(int Numbers[], int ArraySize){
    int i,j, min, temp;
    for(i = 0;i < ArraySize -1;i++){
        min = i; // angka min diambil paling depan dulu
            for(j = i+1; j < ArraySize; j++){ // j mencari angka terkecil
                if(Numbers[j] < Numbers[min]){ // jika ada angka yg lebih kecil dri min
                    min = j; // maka angka tersebut ditetapkan sbagai min
                }
                    temp = Numbers[i]; //jika sudah, maka dilakukan pertukaran angka
                    Numbers[i] = Numbers[min]; //angka paling depan dalam array adalah angka terkecil     
        }
    }
}

//parameter array, array sementara, ukuran array
void MergeSortDescending(int Numbers[], int Temp[], int ArraySize){ //fungsi untuk memulai proses pengurutan
        MSort(Numbers, Temp, 0, ArraySize-1); 
    }
    void MSort(int Numbers[], int Temp[], int Left, int Right){ //parameter array, array sementara, index left, right untuk array
        int Mid;
        if(Right > Left){ // pembagian array menjadi setengah, dengan melihat Arraysize dibandingkan dengan Left (0)
            Mid = (Right + Left) / 2; //membagi Array menjadi setengah
            MSort(Numbers, Temp, Left, Mid); 
            MSort(Numbers, Temp, Mid+1, Right); //dilakukan hingga 1 array tersisa 2 member
            Merge(Numbers, Temp, Left, Mid+1, Right); 
        }
    }
    //parameter array, array sementra, index left, mid, right untuk array 
    void Merge(int Numbers[], int Temp[], int Left, int Mid, int Right){ 
        int i, Left_End, Num_Elements, Tmp_Pos; 
        Left_End = Mid - 1; // menandakan bagian akhir dari array kiri, Numbers[3]
        Tmp_Pos = Left;
        Num_Elements = Right - Left + 1; // menentukan jumlah elemen yg akan ditulis
        while((Left <= Left_End) && (Mid <= Right)){ //melakukan pengurutan
            if(Numbers[Left] >= Numbers[Mid]){ // jika angka pada array kiri lebih besar dari angka pada array kanan
                Temp[Tmp_Pos] = Numbers[Left]; // maka angka yg lebih besar akan dimasukkan pada array sementara (sebagai pengurutan)
                Tmp_Pos = Tmp_Pos + 1;      
                Left = Left +1;
            }
            else{ // jika angka pada array kanan lebih besar dari angka pada array kanan     
                Temp[Tmp_Pos] = Numbers[Mid];  // maka angka yg lebih besar akan dimasukkan pada array sementara (sebagai pengurutan)      
                Tmp_Pos = Tmp_Pos + 1;
                Mid = Mid + 1;
            }
        }  
        while(Left <= Left_End){ //menggabungkan 2 bagian array menjadi 1 bagian, selama Numbers[0] blm mendekati Numbers[3]
            Temp[Tmp_Pos] = Numbers[Left];  
            Left = Left + 1;  
            Tmp_Pos = Tmp_Pos + 1;
            }  
        while (Mid <= Right){ //menggabungkan 2 bagian array menjadi 1 bagian
            Temp[Tmp_Pos] = Numbers[Mid];  
            Mid = Mid + 1 ; 
            Tmp_Pos = Tmp_Pos + 1;
            }
        
        for (i = 0; i <= Num_Elements; i++){ // pengcopyan array yang terurut dri Temp[] ke Numbers[]
            Numbers[Right] = Temp[Right];    
            Right = Right - 1;  
            } 
        }

/*void HeapSortDescending(int Numbers[], int ArraySize){
    int i, Temp;
    for(i = (ArraySize/2)-1; i >= 0; i--){ 
        ShiftDown(Numbers, i, ArraySize); // proses pembuatan heap ke bawah, hingga i = 0
    } 

    for(i = ArraySize-1; i >= 1; i--){ 
        Temp = Numbers[0];  // proses pemindahan anggota heap paling besar ke array paling belakang 
        Numbers[0] = Numbers[i];
        Numbers[i] = Temp;
        ShiftDown(Numbers,0,i); // lalu dirapikan lagi dengan fungsi ShiftDown
    }
}

    void ShiftDown(int Numbers[], int Root, int Bottom){ // Root menunjukkan subtree, Bottom menunjukkan akar paling dasar dari subtree
        int Done, MaxChild, Temp;
        Done = 0;
        while ((Root * 2 <= Bottom) && (!Done)){ // selama semua root belum punya anak 2 akar dan iterasi blm selesai
            if(Root * 2 == Bottom){ // pengecekkan apakah node root adalah node terakhir yg tdk punya akar atau akarnya hanya 1 
                MaxChild = Root * 2;
            }
            else if(Numbers[Root * 2] > Numbers[Root * 2 + 1]){ // pengecekan perbandingan nilai dari 2 anak akar tersebut 
                MaxChild = Root * 2; 
            }
            else{
                MaxChild = Root * 2 + 1; // nilai terbawah dalam array akan disimpan dalam MaxChild
            }

            if(Numbers[Root] < Numbers[MaxChild]){ // jika terdapat nilai anak yg lebih kecil dari nilai parentnya 
                Temp = Numbers[Root]; // maka terjadi pertukaran nilai
                Numbers[Root] = Numbers[MaxChild];
                Numbers[MaxChild] = Temp;
                Root = MaxChild; //sehingga, nilai yg terkecil akan berada di bawah 
            }

            else{
                Done = 1;
            }
        }     
    }*/

void HeapSortDescending(int Numbers[], int ArraySize){ //revisi
    int i, Temp;
    for (i = (ArraySize / 2) - 1; i >= 0; i--){
        ShiftDown(Numbers, i, ArraySize - 1);
    }

    for (i = ArraySize - 1; i >= 1; i--){
        Temp = Numbers[0];
        Numbers[0] = Numbers[i];
        Numbers[i] = Temp;
        ShiftDown(Numbers, 0, i - 1);
    }
}

void ShiftDown(int Numbers[], int Root, int Bottom){
    int Done = 0, MaxChild, Temp;
    while ((Root * 2 <= Bottom) && (!Done)){
        if (Root * 2 == Bottom || Numbers[Root * 2] >= Numbers[Root * 2 + 1]) { 
            MaxChild = Root * 2;
        } 
        else {
            MaxChild = Root * 2 + 1;
        }

        if (Numbers[Root] < Numbers[MaxChild]) {
            Temp = Numbers[Root];
            Numbers[Root] = Numbers[MaxChild];
            Numbers[MaxChild] = Temp;
            Root = MaxChild;
        } 
        else {
            Done = 1;
        }
    }
}

void QuickSortAscending(int Numbers[], int ArraySize){ // Fungsi QuickSort
        QSort(Numbers, 0, ArraySize-1); 
    }

    void QSort(int Numbers[], int Left, int Right){
        int Pivot, LeftHold, RightHold; // LeftHold dan RightHold berfungsi untuk menyimpan posisi kiri dan kanan sebelum partisi
        LeftHold = Left, RightHold = Right, Pivot = Numbers[Left]; // Pivot dimulai angka array paling kiri

        while (Left < Right){ // Proses partisi
            while ((Numbers[Right] >= Pivot) && (Left < Right)){ // melakukan pengecekan apakah ada angka yg lebih kecil lagi
                Right--;
            }   
            if(Left != Right){ // jika memang ada
                Numbers[Left] = Numbers[Right]; // maka terjadi pertukaran elemen
                Left++;
            }

            while ((Numbers[Left] <= Pivot) && (Left < Right)){ // melakukan pengecekan apakah ada angka yg lebih kecil lagi
                Left++;
            }
            if (Left != Right){  // jika memang ada
                Numbers[Right] = Numbers[Left]; // maka terjadi pertukaran elemen
                Right--;
            }
        }

        Numbers[Left] = Pivot; // mengembalikan pivot ke posisi semula
        Pivot = Left; // mengembalikan pivot ke posisi semula
        Left = LeftHold; // mengembalikan nilai left ke posisi semula
        Right = RightHold; // mengembalikan nilai right ke posisi semula

        if (Left < Pivot){ // jika msih ada elemen yg lebih kecil
            QSort(Numbers, Left, Pivot-1);
        }
        if (Right > Pivot){ // jika msih ada elemen yg lebih besar
            QSort(Numbers, Pivot+1, Right);
        } 

        //base case terjadi apabila Left == Right == Pivot          
    }


/*==== Sorting RoboFight App ====
1. Insert all your RoboFight cards 
2. Sort all your RoboFight cards
3. Find your Robofight cards
4. Exit
> 3
Find your RoboFight cards
1. Based on Card Code
2. Based on Power
3. Based on HP
> 1

Find your card code > 147
147 is found, you have card with code 147

Press Enter to continue


==== Sorting RoboFight App ====
1. Insert all your RoboFight cards 
2. Sort all your RoboFight cards
3. Find your Robofight cards
4. Exit
> 3
Find your RoboFight cards
1. Based on Card Code
2. Based on Power
3. Based on HP
> 1
Find your card code > 100
100 is not found, you do not have card with code 100

Press Enter to continue

==== Sorting RoboFight App ====
1. Insert all your RoboFight cards 
2. Sort all your RoboFight cards
3. Find your Robofight cards
4. Exit
> 3
Find your RoboFight cards
1. Based on Card Code
2. Based on Power
3. Based on HP
> 2
Find your card power > 5000 
5000 is found, you have card with power 5000

Press Enter to continue

==== Sorting RoboFight App ====
1. Insert all your RoboFight cards 
2. Sort all your RoboFight cards
3. Find your Robofight cards
4. Exit
> 3
Find your RoboFight cards
1. Based on Card Code
2. Based on Power
3. Based on HP
> 2
Find your card power > 7750
7750 is not found, you do not have card with power 7750

Press Enter to continue

==== Sorting RoboFight App ====
1. Insert all your RoboFight cards 
2. Sort all your RoboFight cards
3. Find your Robofight cards
4. Exit
> 3 
Find your RoboFight cards
1. Based on Card Code
2. Based on Power
3. Based on HP
> 3
Find your card HP > 5000 
5000 is found, you have card with HP 5000

Press Enter to continue

==== Sorting RoboFight App ====
1. Insert all your RoboFight cards 
2. Sort all your RoboFight cards
3. Find your Robofight cards
4. Exit
> 3 
Find your RoboFight cards
1. Based on Card Code
2. Based on Power
3. Based on HP
> 3
Find your card HP > 5000 
10000 is found, you have card with HP 10000

Press Enter to continue*/

