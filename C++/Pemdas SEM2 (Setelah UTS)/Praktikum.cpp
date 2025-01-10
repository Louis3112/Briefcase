#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>
#include <list>
using namespace std;

struct BookData{
    string CodeBook; // kode buku di perpus
    string Title; // nama judul
    string Author; // nama penulis
    int Year; // tahun rilis
};
vector<BookData> CorneliusLibrary = {
    {"000001", "Bumi", "Tere Liye", 2014},
    {"000002", "Bulan", "Tere Liye", 2015},
    {"000003", "Matahari", "Tere Liye", 2016},
    {"000004", "Bintang", "Tere Liye", 2017},
    {"000005", "Ceros dan Batazoar", "Tere Liye", 2018},
    {"000006", "Komet", "Tere Liye", 2018},
    {"000007", "Komet Minor", "Tere Liye", 2019},
    {"000008", "Selena", "Tere Liye", 2020},
    {"000009", "Nebula", "Tere Liye", 2021},
    {"000010", "Si Putih", "Tere Liye", 2022},
    {"000011", "Clean Code", "Robert Cecil Martin", 2008},
    {"000012", "The Pragmatic Programmer", "Andy Hunt & Dave Thomas", 1999},
    {"000013", "The Rust Programming Language", "Steve Klabnik", 2018},
    {"000014", "Kotlin Programming: From Idea to Production", "JetBrains", 2018},
    {"000015", "C++: The Complete Reference", "Herbert Schildt", 2015},
    {"000016", "Competitive Programming: Algorithms and Techniques", "Cormen, Leiserson, Rivest, Stein", 2009},
    {"000017", "Python Crash Course", "Eric Matthes", 2015},
    {"000018", "Automate the Boring Stuff with Python", "Al Sweigart", 2015},
    {"000019", "Fluent Python", "Luciano Ramalho", 2015},
};

struct TreeBook{ // tree untuk penyimpanan data buku (untuk pencarian author)
    BookData Data;
    TreeBook *Left;
    TreeBook *Right;
};
TreeBook *Author;

struct Graph{ // graph untuk penyaranan buku
    int Books; // jumlah buku yang ada dalam penyaranan
    unordered_map<string,vector<string>> AdjList; // unordered_map untuk merepresentasikan daftar ketetanggaan
};
Graph TereLiyeRecommend;
Graph PythonRecommend;
Graph LearnOtherRecommend;
void AddLine(Graph &Recommendation, string From, string To);
void DFS(const Graph &Recommendation, const string &From);

void Create(TreeBook *&Author); // fungsi membuat tree
int IsEmpty(TreeBook *Author); // fungsi untuk memeriksa apakah tree kosong atau tidak
TreeBook* InsertNode(TreeBook *&Author, BookData &Book); // fungsi untuk menginputkan node ke dalam tree
void DisplayInOrder(TreeBook *Author); // fungsi untuk menampilkan daftar buku secara urut berdasarkan nama depan author 
TreeBook* SearchAuthor(TreeBook *Author, string &TargetedAuthor); // fungsi untuk mencari author buku menggunakkan BST (Binary Search Tree)
TreeBook* DeleteNode(TreeBook *Author,string &TargetedTitle); // fungsi untuk menghapus buku dari tree
TreeBook *FindMax(TreeBook *Author); // fungsi untuk mencari node paling ujung kanan (yang akan membantu fungsi DeleteNode)

void InputBookData(BookData& Book); // fungsi memasukkan data buku baru
string GenerateCodeBook(string Title,string Author,int Year); // fungsi membuat kode buku di perpus
void DeleteBookData(vector<BookData>& Book, string &TargetedTitle); // fungsi menghapus data buku

void SortBooksByTitle(vector<BookData>& CorneliusLibrary); // fungsi untuk mengurutkan buku berdasarkan judul
void QuickSort(vector<BookData>& CorneliusLibrary,int Low, int High); // menggunakkan fungsi quick sort
int Part(vector<BookData>& CorneliusLibrary,int Low, int High); // partisi pada quick sort
void Swap(BookData& i, BookData& j); // pertukaran posisi struct pada quick sort

int BinarySearchByTitle(vector<BookData>& CorneliusLibrary, string &TargetedTitle);// fungsi untuk mencari judul menggunakkan binary search

int main(){
TereLiyeRecommend.Books = 10;
PythonRecommend.Books = 3;
LearnOtherRecommend.Books = 3;
AddLine(TereLiyeRecommend, "Bumi", "Bulan");
AddLine(TereLiyeRecommend, "Bulan", "Matahari");
AddLine(TereLiyeRecommend, "Matahari", "Bintang");
AddLine(TereLiyeRecommend, "Bintang", "Ceros dan Batazoar");
AddLine(TereLiyeRecommend, "Ceros dan Batazoar", "Komet");
AddLine(TereLiyeRecommend, "Komet", "Komet Minor");
AddLine(TereLiyeRecommend, "Komet Minor", "Selena");
AddLine(TereLiyeRecommend, "Selena", "Nebula");
AddLine(TereLiyeRecommend, "Nebula", "Si Putih");

AddLine(PythonRecommend, "Python Crash Course", "Automate the Boring Stuff with Python");
AddLine(PythonRecommend, "Python Crash Course", "Fluent Python");
AddLine(PythonRecommend, "Automate the Boring Stuff with Python", "Python Crash Course");
AddLine(PythonRecommend, "Automate the Boring Stuff with Python", "Fluent Python");
AddLine(PythonRecommend, "Fluent Python", "Python Crash Course");
AddLine(PythonRecommend, "Fluent Python", "Automate the Boring Stuff with Python");

AddLine(LearnOtherRecommend, "C++: The Complete Reference", "The Rust Programming Language");
AddLine(LearnOtherRecommend, "C++: The Complete Reference", "Kotlin Programming: From Idea to Production");
AddLine(LearnOtherRecommend, "The Rust Programming Language", "C++: The Complete Reference");
AddLine(LearnOtherRecommend, "The Rust Programming Language", "Kotlin Programming: From Idea to Production");
AddLine(LearnOtherRecommend, "Kotlin Programming: From Idea to Production", "C++: The Complete Reference");
AddLine(LearnOtherRecommend, "Kotlin Programming: From Idea to Production", "The Rust Programming Language");

for(auto& i : CorneliusLibrary){
    string GeneratingCodeBook= GenerateCodeBook(i.Title,i.Author,i.Year);
    i.CodeBook = GeneratingCodeBook;    
}

Create(Author);
for(auto& i : CorneliusLibrary){
    InsertNode(Author,i);
}
    int Login;

    char Home = 'y';
    while(Home == 'y'){
        system("cls");
        cout << "=========================\n";
        cout << "     Cornelius Library   \n";  
        cout << "=========================\n";
        cout << "1. Login as Librarian\n";
        cout << "2. Login as Visitor\n";
        cout << "0. Exit\n";
        cout << "> ";
        cin >> Login;
        cin.ignore();

        switch (Login){
        case 1:{
            char LoginLibrarian = 'y';
            while (LoginLibrarian == 'y'){
                int Input;
                cout << "\n=========================\n";
                cout << "   Dashboard Librarian   \n";
                cout << "=========================\n";
                cout << "1. Transaction Menu\n";
                cout << "2. Insert new book\n";
                cout << "3. Sort books\n";
                cout << "4. Find book\n";
                cout << "5. Delete book\n";
                cout << "0. Exit\n";
                cout << "> ";
                cin >> Input;   
                cin.ignore();

                switch(Input){
                    case 1:{

                    }
                    break;

                    case 2:{
                        char Choice = 'y';
                        while(Choice == 'y'){
                            BookData Book;
                            InputBookData(Book);
                            CorneliusLibrary.push_back(Book);
                            
                            Author = InsertNode(Author,Book);

                            cout << "Insert another book? (y/n)\n";
                            cout << "> ";
                            cin >> Choice;
                            cin.ignore();
                        }
                    }
                    break;

                    case 3:{
                        int InputSort;
                        cout << "   1. Sort books based on title\n";
                        cout << "   2. Sort books based on author\n";
                        cout << "   > ";
                        cin >> InputSort;
                        cin.ignore();
                        
                        switch (InputSort){
                            case 1:{
                                SortBooksByTitle(CorneliusLibrary);
                                cout << "List of the sorted books based on title\n\n";
                                for(size_t i = 0; i < CorneliusLibrary.size(); i++){
                                    cout << "Book " << i + 1 << endl;
                                    cout << "    | " << CorneliusLibrary[i].Title << " | written by | " << CorneliusLibrary[i].Author << " |\n";
                                    cout << "    released in " <<  CorneliusLibrary[i].Year << " with code book " << CorneliusLibrary[i].CodeBook << "\n\n";
                                }
                            }
                            break;
                            
                            case 2:{
                                cout << "List of the sorted books based on author\n\n";
                                DisplayInOrder(Author);
                            }
                            break;

                            default:

                            break;
                        }    
                        cout << "Press enter to continue\n";
                        cin.get();
                    }
                    break;

                    case 4:{
                        int InputFind;
                        cout << "   1. Find book based on title\n";
                        cout << "   2. Find book based on author\n";
                        cout << "   > ";
                        cin >> InputFind;
                        cin.ignore();

                        switch(InputFind){
                            case 1:{
                                string TargetedTitle;
                                SortBooksByTitle(CorneliusLibrary);
                                cout << "\nFind the title\n";
                                cout << "> ";
                                getline(cin, TargetedTitle);

                                int FoundTitle = BinarySearchByTitle(CorneliusLibrary, TargetedTitle);

                                if(FoundTitle != -1){
                                    cout << "\nBook was Found\n\n";
                                    cout << "Code Book: " << CorneliusLibrary[FoundTitle].CodeBook << endl;
                                    cout << "Title: " << CorneliusLibrary[FoundTitle].Title << endl;
                                    cout << "Author: " << CorneliusLibrary[FoundTitle].Author << endl;
                                    cout << "Year: " << CorneliusLibrary[FoundTitle].Year << endl; 
                                }
                                else{
                                    cout << "\nBook was not found\n";
                                }
                            }
                            break;
                            
                            case 2:{
                                string TargetedAuthor;
                                cout << "\nFind the author\n";
                                cout << "> ";
                                getline(cin, TargetedAuthor);

                                TreeBook *FoundAuthor = SearchAuthor(Author,TargetedAuthor);
                                if(FoundAuthor != nullptr){
                                    cout << "\nBook was found\n\n";
                                    cout << "Code Book: " << FoundAuthor->Data.CodeBook << endl;
                                    cout << "Title: " << FoundAuthor->Data.Title << endl;
                                    cout << "Author: " << FoundAuthor->Data.Author << endl;
                                    cout << "Year: " << FoundAuthor->Data.Year << endl; 
                                }
                                else{
                                    cout << "\nBook was not found\n";
                                }
                            }
                            break;

                            default:

                            break;
                    }
                    cout << "\nPress enter to continue\n";
                    cin.get();
                }
                break;

                case 5:{
                    string TargetedTitle;
                    cout << "\nInput the title\n";
                    cout << "> ";
                    getline(cin, TargetedTitle);
                    
                    DeleteBookData(CorneliusLibrary,TargetedTitle);
                    DeleteNode(Author,TargetedTitle);

                    cout << "\nPress enter to continue\n";
                    cin.get();
                }
                break;
                case 0:
                    char Exit;
                    cout << "\nExit librarian mode? (y/n)\n";
                    cout << "> ";
                    cin >> Exit;    

                    if(Exit == 'y' || Exit == 'Y'){
                        LoginLibrarian = 'n';
                    }  
                    else{
                        LoginLibrarian = 'y';
                    }
                break;

                default:

                break;
            } 
        }
    }
    break;

    case 2:{
            char LoginVisitor = 'y';
            while (LoginVisitor == 'y'){
                int Input;
                cout << "\n===================================\n";
                cout << "    Welcome to Cornelius Library   \n";
                cout << "====================================\n\n";
                cout << "What would you like to do today?\n";
                cout << "1. See all of our collection\n";
                cout << "2. Find the book you want to borrow\n";
                cout << "0. Exit\n";
                cout << "> ";
                cin >> Input;
                cin.ignore();

                switch (Input){   
                case 1:{
                    SortBooksByTitle(CorneliusLibrary);
                    cout << "List of the sorted books based on title\n\n";
                    for(size_t i = 0; i < CorneliusLibrary.size(); i++){
                        cout << "Book " << i + 1 << endl;
                        cout << "    | " << CorneliusLibrary[i].Title << " | written by | " << CorneliusLibrary[i].Author << " |\n";
                        cout << "    released in " <<  CorneliusLibrary[i].Year << " with code book " << CorneliusLibrary[i].CodeBook << "\n\n";
                        }
                        
                    cout << "\nPress enter to continue\n";
                    cin.get();
                    }
                break;
                
                case 2:{
                    int InputFind;
                        cout << "   1. Find the book based on title\n";
                        cout << "   2. Find the book based on author\n";
                        cout << "   > ";
                        cin >> InputFind;
                        cin.ignore();

                        switch(InputFind){
                            case 1:{
                                string TargetedTitle;
                                SortBooksByTitle(CorneliusLibrary);
                                cout << "\nWhat title are you looking for \n";
                                cout << "> ";
                                getline(cin, TargetedTitle);

                                int FoundTitle = BinarySearchByTitle(CorneliusLibrary, TargetedTitle);

                                if(FoundTitle != -1){
                                    cout << "\nWe found the title you are looking for!!!\n\n";
                                    cout << "Code Book: " << CorneliusLibrary[FoundTitle].CodeBook << endl;
                                    cout << "Title: " << CorneliusLibrary[FoundTitle].Title << endl;
                                    cout << "Author: " << CorneliusLibrary[FoundTitle].Author << endl;
                                    cout << "Year: " << CorneliusLibrary[FoundTitle].Year << endl; 
                                }
                                else{
                                    cout << "\nUnfortunately, we did not find the title you are looking for...\n";
                                }

                                cout << "\nPress enter to continue\n";
                                cin.get();
                            }
                            break;
                            
                            case 2:{
                                string TargetedAuthor;
                                cout << "\nWho is the author you are looking for\n";
                                cout << "> ";
                                getline(cin, TargetedAuthor);

                                TreeBook *FoundAuthor = SearchAuthor(Author,TargetedAuthor);
                                if(FoundAuthor != nullptr){
                                    cout << "\nWe found the author you are looking for!!!\n\n";
                                    cout << "Code Book: " << FoundAuthor->Data.CodeBook << endl;
                                    cout << "Title: " << FoundAuthor->Data.Title << endl;
                                    cout << "Author: " << FoundAuthor->Data.Author << endl;
                                    cout << "Year: " << FoundAuthor->Data.Year << endl; 
                                }
                                else{
                                     cout << "\nUnfortunately, we did not find the author you are looking for...\n";
                                }

                                cout << "\nPress enter to continue\n";
                                cin.get();
                            }
                            break;

                            default:

                            break;
                        
                        }
                }
                break;

                case 0:{
                    char Exit;
                    cout << "\nAre you sure you want to exit the application (y/n)\n";
                    cout << "> ";
                    cin >> Exit;    

                    if(Exit == 'y' || Exit == 'Y'){
                        cout << "Thank you for visiting Cornelius Library\n";
                        cout << "Have a nice day !! \n";
                        LoginVisitor = 'n';
                    }  
                    else{
                        LoginVisitor = 'y';
                    }
                }
                break;

                default:
                
                break;
            }
        }
    }
    break;

    case 0:{
        char Exit;
        cout << "\nExit library? (y/n)\n";
        cout << "> ";
        cin >> Exit;    

        if(Exit == 'y' || Exit == 'Y'){
                Home = 'n';
            }  
            else{
                Home = 'y';
            }
        }
    break;
    

    default:

    break;
    }

    }
    return 0;
}
void AddLine(Graph &Recommendation, string From, string To){ // fungsi menambah edge ke dalam graph
    Recommendation.AdjList[From].push_back(To); // terdapat garis penghubung antara buku satu dengan buku yang lain
}
void DFS(const Graph &Recommendation, const string &From){ // fungsi DFS (Depth First Search) pada graph menggunakkan stack
    unordered_map<string,bool> Read; // membuat unordered_map untuk melacak node yang telah dikunjungi

    for(const auto &Pair : Recommendation.AdjList){ // inisialisasi semua node sebagai belum dikunjungi
        Read[Pair.first] = false;
    }
    stack<string> ToRead; // stack untul melacak node yang akan dikunjungi
    ToRead.push(From); // masukkan node awal ke dalam stack 

    while(!ToRead.empty()){ // selama stack tidak kosong
        string Current = ToRead.top();
        ToRead.pop(); // ambil node dari stack

        if(!Read[Current]){ // jika ada node yang belum dikunjungi
            Read[Current] = true; // maka dikunjungi 
            cout << Current << "  --->  "; // dan mengeluarkan node saat ini

            for(const string &Next : Recommendation.AdjList.at(Current)){ 
                if(!Read[Next]){ // jika ada tetangga yang belum dikunjungi, maka masukkan ke dalam stack
                    ToRead.push(Next);
                }
            }
        }
    }
}

void Create(TreeBook *&Author){ // fungsi membuat tree
    Author = nullptr; 
}
int IsEmpty(TreeBook *Author){ // fungsi untuk memeriksa apakah tree kosong atau tidak
    if (Author == nullptr) return 1; // apabila kosong, maka mengembalikan nilai 1 
    else return 0;
}
TreeBook* InsertNode(TreeBook *&Author,  BookData &Book){  // fungsi untuk menginputkan node ke dalam tree
    if(Author == nullptr){ //jika Root masih kosong
        TreeBook *NewNode = new TreeBook; // maka membuat Root baru pertama
        NewNode->Data = Book;
        NewNode->Left = nullptr;
        NewNode->Right = nullptr;
        Author = NewNode; 
    }
    
    else if (Book.Title < Author->Data.Title){ // jika urutan huruf depan lebih kecil dari root, maka melakukan pencarian ke kiri
        Author->Left = InsertNode(Author->Left, Book);
    } 

    else if (Book.Title > Author->Data.Title){ // jika urutan huruf depan lebih besar dari root, maka melakukan pencarian ke kanan
        Author->Right = InsertNode(Author->Right, Book);
    }
    return Author;
}
void DisplayInOrder(TreeBook *Author){ // fungsi untuk menampilkan daftar buku secara urut berdasarkan nama depan author 
    if(Author == nullptr) return;

    DisplayInOrder(Author->Left); 
    cout << Author->Data.Title << " written by " << Author->Data.Author << endl;
    cout << "released in " << Author->Data.Year << " with code book " << Author->Data.CodeBook << endl << endl;
    DisplayInOrder(Author->Right);
}
TreeBook* SearchAuthor(TreeBook *Author, string &TargetedAuthor){ // fungsi untuk mencari author buku menggunakkan BST (Binary Search Tree)
    if(Author == nullptr) return nullptr;
    
    else if(TargetedAuthor < Author->Data.Author) return SearchAuthor(Author->Left,TargetedAuthor); // jika urutan huruf depan lebih kecil dari root, maka melakukan pencarian ke kiri
    else if(TargetedAuthor > Author->Data.Author) return SearchAuthor(Author->Right,TargetedAuthor); // jika urutan huruf depan lebih kecil dari root, maka melakukan pencarian ke kiri

    else return Author; // jika ditemukan, maka langsung mengembalikan data buku
}
TreeBook* DeleteNode(TreeBook *Author,string &TargetedTitle){ // fungsi untuk menghapus data buku
    if(Author == nullptr) return nullptr; // jika Root kosong, maka mengembalikan nilai kosong

    else if(TargetedTitle < Author->Data.Title){ // jika data yang dicari urutan hurufnya lebih kecil dari Root
        Author->Left = DeleteNode(Author->Left,TargetedTitle); // maka bergeser ke sebelah kiri
    }
    else if(TargetedTitle > Author->Data.Title){ // jika data yang dicari urutan hurufnya lebih kecil dari Root
        Author->Right = DeleteNode(Author->Right,TargetedTitle); // maka bergeser ke sebelah kanan
    }

    // jika data memang sudah ditemukan 
    else{ // jika Root memiliki 1 child saja
        if(Author->Left == nullptr){ // jika Root tidak memiliki child di sebelah kiri 
            TreeBook *Temp = Author->Right; // maka Temp akan menyimpan child sebelah kanan
            delete Author; // menghapus data
            return Temp; // maka Temp disambungkan kembali terhadap binary tree
        }
        if(Author->Right == nullptr){ // jika Root tidak memiliki child di sebelah kanan 
            TreeBook *Temp = Author->Left; // maka Temp akan menyimpan child sebelah kiri
            delete Author; // menghapus data
            return Temp; // maka Temp disambungkan kembali terhadap binary tree
        }
        
        else{ //jika Root memiliki 2 child 
            TreeBook *Temp = FindMax(Author->Left); // maka data nilai digantikan dengan nilai terbesar dari left subtree
            Author->Data = Temp->Data; // data disimpan di Temp 
            Author->Left = DeleteNode(Author->Left,Temp->Data.Title); // maka dilakukan penghapusan 
        }
    }
    return Author; // mengembalikan tree 
}
TreeBook *FindMax(TreeBook *Author){
    if(Author == nullptr) return nullptr;
    else{
        if(Author->Right == nullptr) return Author;
        else return FindMax(Author->Right);
    }
}
void InputBookData(BookData& Book){ // fungsi memasukkan data buku baru
    cout << "\nInsert title of the Book\n";
    cout << "> ";
    getline(cin, Book.Title);
    cout << endl;

    cout << "Insert author of the Book\n";
    cout << "> ";
    getline(cin, Book.Author);
    cout << endl;

    cout << "Insert year released of the Book\n";
    cout << "> ";
    cin >> Book.Year;
    cin.ignore();
    
    Book.CodeBook = GenerateCodeBook(Book.Title,Book.Author,Book.Year); // membuat kode buku berdasarkan judul, penulis, tahun

    cout << "\nCode Book: " << Book.CodeBook << endl;
    cout << "Title: " << Book.Title << endl;
    cout << "Author: " << Book.Author << endl;
    cout << "Year: " << Book.Year << endl << endl;

    cout << Book.Title << " has been inputted into database\n";
}
string GenerateCodeBook(string Title,string Author,int Year){ // fungsi membuat kode buku di perpus
    // mengambil huruf depan dari Title dan Author
    char FirstTitleChar = Title[0];
    char FirstAuthorChar = Author[0];

    // mengubah huruf depan menjadi angka
    int FirstTitleValue = FirstTitleChar - 'A' + 1;
    int FirstAuthorValue = FirstAuthorChar - 'A' + 1;

    // mengambil 2 digit terakhir dari tahun rilis
    int Last2DigitYear = Year % 100;

    string GeneratedCode = to_string(FirstTitleValue) + to_string(FirstAuthorValue) + to_string(Last2DigitYear); // penggabungan 1 kode unik
    while (GeneratedCode.length() < 6){ // kode harus memiliki panjang 6 char
        GeneratedCode = '0' + GeneratedCode;
    }

    return GeneratedCode;
}
void DeleteBookData(vector<BookData>& Book, string &TargetedTitle){ // fungsi menghapus data buku
    for(size_t i = 0; i < Book.size(); i++){ // iterasi pencarian judul buku yang akan dihapus
        if(Book[i].Title == TargetedTitle){ // jika telah ditemukan
            Book.erase(Book.begin() + i); // maka dilakukan proses penghapusan
            cout << endl << TargetedTitle << " has been deleted from database\n";
            return;
        }
    }
    cout << endl << TargetedTitle << " was not found\n"; // jika memang tidak ditemukan, maka tidak terjadi penghapusan
}

void SortBooksByTitle(vector<BookData>& CorneliusLibrary){ // fungsi untuk mengurutkan buku berdasarkan judul
    int Total = CorneliusLibrary.size(); // menghitung banyaknya buku yang ada dalam perpus
    QuickSort(CorneliusLibrary,0,Total-1);
}
void QuickSort(vector<BookData>& CorneliusLibrary,int Low, int High){ // menggunakkan fungsi quick sort
    if(Low < High){ 
        int Pivot = Part(CorneliusLibrary,Low,High); // partisi pada quick sort

        QuickSort(CorneliusLibrary,Low,Pivot - 1); // rekursif quick sort
        QuickSort(CorneliusLibrary,Pivot + 1,High); // rekursif quick sort
    }   
}
int Part(vector<BookData>& CorneliusLibrary,int Low, int High){ // partisi pada quick sort
    string Pivot = CorneliusLibrary[High].Title; // buku paling terakhir pada perpus dijadikan pivot 
    int i = Low - 1;

    for(int j = Low; j < High; j++){ 
        if(CorneliusLibrary[j].Title < Pivot){ // jika terdapat judul yang secara urutan huruf lebih kecil dari Pivot
            i++;
            Swap(CorneliusLibrary[i], CorneliusLibrary[j]); // maka ditukar 
        }
    }
    Swap(CorneliusLibrary[i+1], CorneliusLibrary[High]); // pertukaran pivot ke posisi yang benar
    return i + 1;
}
void Swap(BookData& i, BookData& j){ // pertukaran posisi struct pada quick sort
    BookData Temp = i;
    i = j;
    j = Temp;
}

int BinarySearchByTitle(vector<BookData>& CorneliusLibrary, string &TargetedTitle){ // fungsi untuk mencari judul menggunakkan binary search
    int Left = 0;
    int Right = CorneliusLibrary.size() - 1;

    while(Left <= Right){
        int Middle = (Left + Right) / 2;

        if(CorneliusLibrary[Middle].Title == TargetedTitle) return Middle; // judul ditemukan
        if(CorneliusLibrary[Middle].Title < TargetedTitle) Left = Middle + 1; // judul yang dicari berada di sebelah kanan
        else Right = Middle - 1; // judul yang dicari berada di sebelah kiri
    }
    return -1; // jika judul tidak ditemukan
}