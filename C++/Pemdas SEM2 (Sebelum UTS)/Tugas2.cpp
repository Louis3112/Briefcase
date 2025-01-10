#include <iostream>
using namespace std;

// Double Linked List Cicular (Tanpa Tail)
/*struct Tnode{ //dimana struct Node memiliki member berupa data dan pointer
    int Data; //int data untuk menyimpan data
    Tnode *Next; //pointer next untuk menunjuk pointer selanjutnya 
    Tnode *Prev; //pointer prev untuk menunjuk pointer sebelumnya
};

Tnode *Head; // pointer Head untuk menyimpan alamat pertama dan mengetahui Node pertama dari Linked List

void init(){
    Head = NULL; // menginisiasi baha pointer head kosong dan belum menunjuk Node manapun
}

int isEmpty(){
    return(Head == NULL) ? 1 : 0; //jika Head tidak menunjuk ke Node manapun (NULL), maka Linked List kosong
} // disini saya juga menggunakkan ternary operator

void InsertFront(int NewData){
    Tnode *NewNode, *Help;
    NewNode = new Tnode; //Penambahan node bantu
    NewNode->Data = NewData; // Node baru menyimpan data yang akan dimasukkan
    (*NewNode).Next = NewNode; // Pointer next menunjuk NULL
    (*NewNode).Prev = NewNode; // Pointer prev menunjuk NULL
    
    if(isEmpty() == 1){ //Jika linked list kosong
        Head = NewNode; // node Head menyimpan node baru
        Head->Next = Head; //node selanjutnya kosong
        Head->Prev = Head; //node sebelumnya kosong
    }

    else{
        Help = Head->Prev;  //Pointer Bantu menunjuk pointer Head prev, karena circular
        NewNode->Next = Head; //Node baru berada di belakang Head
        Head->Prev = NewNode; //Pointer sebelum head menunjuk Node baru
        Head = NewNode; //Sehingga, node baru menjadi Head
        Head->Prev = Help; //Pointer Head sebelumnya menunjuk pointer bantu
        Help->Next = Head; //Pointer bantu next menunjuk Head
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void InsertBack(int NewData){
    Tnode *NewNode, *Help;
    NewNode = new Tnode; //Penambahan node bantu
    NewNode->Data = NewData; // Node baru menyimpan data yang akan dimasukkan
    (*NewNode).Next = NewNode; // Pointer next menunjuk NULL
    (*NewNode).Prev = NewNode; // Pointer prev menunjuk NULL
    
    if(isEmpty() == 1){ //Jika linked list kosong
        Head = NewNode; // node Head menyimpan node baru
        Head->Next = Head; //node selanjutnya kosong
        Head->Prev = Head; //node sebelumnya kosong
    }

    else{
        Help = Head->Prev; //Pointer Bantu menunjuk pointer Head prev, karena circular
        Help->Next = NewNode; //Node bantu next menunjuk node baru
        NewNode->Prev = Help; //Node Baru prev menunjuk pointer bantu
        NewNode->Next = Head; //Node Baru next menunjuk pointer Head
        Head->Prev = NewNode; //Node Head prev menunjuk node baru
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void PrintLinkedList(){
    Tnode *Print;
    Print = Head;
    if(isEmpty() == 0){
        cout << "[ ";
        do{ 
            cout << Print->Data << " "; 
            Print = Print->Next;
        }while(Print != Head);
        cout << "]" << endl << endl;
    }
    else{
        cout << "Linked list is empty" << endl << endl; 
    }
}

void DeleteFront() {
    Tnode *DeleteNode; // membuat pointer hapus untuk menunjuk node yang akan dihapus
    int DeletedData; // untuk memberitahu data yang akan dihapus 
    if (isEmpty() == 0) {
        if (Head->Next != Head) {
            DeleteNode = Head;
            DeletedData = Head->Data;
            Head = Head->Next;
            Head->Prev = DeleteNode->Prev; // pointer prev Head diarahkan ke node sebelumnya dari yang dihapus
            DeleteNode->Prev->Next = Head; // pointer next dari node sebelumnya diarahkan ke Head baru
            delete DeleteNode;
        } else {
            DeletedData = (*Head).Data;
            Head = NULL;
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    } else {
        cout << "linked list is empty" << endl;
    }
}

void DeleteBack(){
    Tnode *DeleteNode, *Help;
    int DeletedData;
    if (isEmpty() == 0){
        if(Head->Next != Head){
            Help = Head;
            while (Help->Next->Next != Head){
                Help  = Help->Next;
            }
            DeleteNode = Help->Next;
            DeletedData = DeleteNode->Data;
            Help->Next = Head;
            Head->Prev = Help;
            delete DeleteNode;
        }
        else{
            DeletedData = Head->Data;
            Head = NULL;
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    } else {
        cout << "linked list is empty" << endl;
    }
}

void DeleteAll(){
    Tnode *DeleteNode, *Help;
    int DeletedData;
    
    Help = Head;
    while(Help != NULL){
        DeleteNode = Help;
        Help = Help->Next;
        delete DeleteNode;
    }
    cout << "All data from linked list has been deleted"  << endl;
        Head = NULL;
	  
    }

int main(){
    InsertFront(10);
    PrintLinkedList();
    
    InsertBack(20);
    PrintLinkedList();

    InsertFront(5);
    PrintLinkedList();

    DeleteBack();
    PrintLinkedList();

    DeleteFront();
    PrintLinkedList();

    InsertFront(5);
    PrintLinkedList();

    InsertFront(1);
    PrintLinkedList();

    DeleteAll();
    PrintLinkedList();
}*/

// Double Linked List Linear (Tanpa Tail)
/*struct Tnode{ //dimana struct Node memiliki member berupa data dan pointer
    int Data; //int data untuk menyimpan data
    Tnode *Next; //pointer next untuk menunjuk pointer selanjutnya 
    Tnode *Prev; //pointer prev untuk menunjuk pointer sebelumnya
};

Tnode *Head; // pointer Head untuk menyimpan alamat pertama dan mengetahui Node pertama dari Linked List

void init(){
    Head = NULL; // menginisiasi baha pointer head kosong dan belum menunjuk Node manapun
}

int isEmpty(){
    return(Head == NULL) ? 1 : 0; //jika Head tidak menunjuk ke Node manapun (NULL), maka Linked List kosong
} // disini saya juga menggunakkan ternary operator

void InsertFront(int NewData){
    Tnode *NewNode; //Pembuatan node baru 
    NewNode = new Tnode; //Penambahan node bantu
    NewNode->Data = NewData; // Node baru menyimpan data yang akan dimasukkan
    (*NewNode).Next = NULL; // Pointer next menunjuk NULL
    (*NewNode).Prev = NULL; // Pointer prev menunjuk NULL

    if(isEmpty() == 1){ //Jika linked list kosong
        Head = NewNode; // node Head menyimpan node baru
        Head->Next = NULL; //node selanjutnya kosong
        Head->Prev = NULL; //node sebelumnya kosong
    }
    else{ //jika linked list tidak kosong
        NewNode->Next = Head;  //Node baru dimasukkan di depan head 
        Head->Prev = NewNode;  //Node baru menjadi head
        Head = NewNode; // Node baru menjadi hHead
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void InsertBack(int NewData){
    Tnode *NewNode, *Help; //Pembuatan node baru dan node bantu untuk mencari node terakhir
    NewNode = new Tnode; //Penambahan node bantu
    NewNode->Data = NewData; // Node baru menyimpan data yang akan dimasukkan
    (*NewNode).Next = NULL; // Pointer next menunjuk NULL
    (*NewNode).Prev = NULL; // Pointer prev menunjuk NULL
    
    if(isEmpty() == 1){
        Head = NewNode;
        Head->Next = NULL;
        Head->Prev = NULL;
    }
    
    else{
        Help = Head;
        while (Help->Next != NULL){
            Help = Help->Next;
        }
        Help->Next = NewNode; //node baru dimasukkan ke belakang pointer help 
        NewNode->Prev = Help;
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void PrintLinkedList(){
    Tnode *Print; 
    Print = Head; 
    if(isEmpty() == 0){
        cout << "[ ";
    while(Print != NULL){ 
        cout << Print->Data << " "; 
        Print = Print->Next;
        }
        cout << "]" << endl << endl;
    }
    
    else{
        cout << " linked list is empty" << endl << endl; 
    }
}

void DeleteFront(){
    Tnode *DeleteNode; //membuat pointer hapus untuk menunjuk node yang akan dihapus
    int DeletedData; // untuk memberitahu data yang akan dihapus 
    if (isEmpty() == 0){
        if(Head->Next != NULL){//jika pointer next pada head bukan null
            DeleteNode = Head; //maka pointer hapus menunjuk head
            DeletedData = DeleteNode->Data; //data yang akan dihapus disimpan oleh int DeleteData
            Head = Head->Next; //menunjuk pointer head selanjutnya
            Head->Prev = NULL; //pointer head sebelumnya diabaikan (head awal) 
            delete DeleteNode; //maka penghapusan bisa dilakukan 
        }
        else{ 
            DeletedData = (*Head).Data;  //data yang akan dihapus disimpan oleh int DeleteData
            Head = NULL; //pointer head dikosongkan 
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteBack(){
    Tnode *DeleteNode; //membuat pointer hapus untuk menunjuk node yang akan dihapus
    int DeletedData; // untuk memberitahu data yang akan dihapus 
    if(isEmpty() == 0){
        if (Head->Next != NULL){ //jika pointer next pada head bukan null
            DeleteNode = Head; //maka pointer hapus menunjuk head
            while (DeleteNode->Next != NULL){ //melakukan perulangan untuk mencari node paling terakhir
                DeleteNode = DeleteNode->Next;
            }
            DeletedData = DeleteNode->Data; //data yang akan dihapus disimpan oleh int DeleteData
            DeleteNode->Prev->Next = NULL; //pointer next dan prev menunjuk null untuk menghapus node
            delete DeleteNode; //maka penghapusan node bisa dilakukan
        }
        else{
            DeletedData = (*Head).Data;  //data yang akan dihapus disimpan oleh int DeleteData
            Head = NULL; //pointer head dikosongkan 
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteAll(){
    Tnode *Help, *DeleteNode; //membuat pointer hapus untuk menunjuk node yang akan dihapus, dan pointer bantu untuk menelusuri node-node selanjutnya
    if(isEmpty() == 0){
        Help = Head; //Pointer help dimulai dari head 
        while (Help != NULL){ //selama pointer help tidak kosong 
            DeleteNode = Help; //pointer delete bersiap untuk menghapus node tersebut
            Help = Help->Next; //pointer help bergeser ke node selanjutnya
            delete DeleteNode; //melakukan penghapusan node 
        }
        cout << "All data from linked list has been deleted" << endl;
        Head = NULL; //node head dikosongkan
    }
    else{
        cout << "linked list is empty" << endl;
    }
}
int main(){
    InsertFront(10);
    PrintLinkedList();
    
    InsertBack(20);
    PrintLinkedList();

    InsertFront(5);
    PrintLinkedList();

    DeleteBack();
    PrintLinkedList();

    DeleteFront();
    PrintLinkedList();

    InsertFront(5);
    PrintLinkedList();

    InsertFront(1);
    PrintLinkedList();

    DeleteAll();
    PrintLinkedList();
}*/

//Single Linked List Circular (Dengan Tail)
/*struct Tnode{
    int Data;
    Tnode *Next;
};
Tnode *Head;
Tnode *Tail;

void init(){
    Head = Tail = NULL;
}

int isEmpty(){
    return (Tail == NULL) ? 1 : 0;
}

void InsertFront(int NewData){
    Tnode *NewNode, *Help; // Pembuatan node baru dan node bantu
    NewNode = new Tnode;  //Penambahan node bantu
    NewNode->Data = NewData; // Node baru menyimpan data yang akan dimasukkan
    (*NewNode).Next = NewNode; //Pointer next menunjuk dirinya sendiri

    if(isEmpty() == 1){ //Jika linked list kosong
        Head = NewNode; //Node head menyimpan node baru
        Tail = NewNode; //Node Tail juga menyimpan node baru
        Head->Next = Head; //Pointer next pada head menunjuk dirinya sendiri
        Tail->Next = Tail; //Pointer next pada tail menunjuk dirinya sendiri
    }
    else{ //Jika linked list tidak kosong
        NewNode->Next = Head; //Node baru dimasukkan di depan head 
        Head = NewNode; //Node baru menjadi head
        (*Tail).Next = Head; //Pointer tail menunjuk Head, agar menjadi circular 
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}
 
void InsertBack(int NewData){
    Tnode *NewNode, *Help;
    NewNode = new Tnode;
    NewNode->Data = NewData;
    (*NewNode).Next = NewNode;

    if(isEmpty() == 1){
        Head = NewNode; //Node head menyimpan node baru
        Tail = NewNode; //Node Tail juga menyimpan node baru
        Head->Next = Head; //Pointer next pada head menunjuk dirinya sendiri
        Tail->Next = Tail; //Pointer next pada tail menunjuk dirinya sendiri
    }
    else{
        Tail->Next = NewNode;
        Tail = NewNode;
        Tail->Next = Head;  //Pointer tail menunjuk Head, agar menjadi circular
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void PrintLinkedList(){
    Tnode *Print;
    Print = Head;
    if(isEmpty() == 0){
        cout << "[ ";
        do{ 
            cout << Print->Data << " "; 
            Print = Print->Next;
        }while(Print != Tail->Next);
        cout << "]" << endl << endl;
    }
    else{
        cout << "Linked list is empty" << endl << endl; 
    }
}

void DeleteFront(){
    Tnode *DeleteNode; //Membuat pointer hapus 
    int DeletedData; //untuk memberitahu data yang dihapus 
    if(isEmpty() == 0){ //jika linked list tidak kosong
        if(Head != Tail){ //jika node Head dan Tail berbeda
            DeleteNode = Head;//pointer delete menunjuk Head
            Head = Head->Next;
            DeletedData = Head->Data;//data yang dihapus akan disimpan oleh
            (*Tail).Next = Head; //pointer next Tail menunjuk head, agar circular
            delete DeleteNode;
        }
        else { //jika node Head dan Tail sama
            DeletedData = Head->Data; 
            Head = Tail = NULL; //Node head dan tail dikosongkan 
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteBack(){
    Tnode *DeleteNode, *Help; //Membuat pointer hapus dan pointer help untuk mencari node terakhir 
    int DeletedData; //untuk memberitahu data yang dihapus 
    if(isEmpty() == 0){ //jika linked list tidak kosong
        if(Head != Tail){
            Help = Head; //pointer bantu dimulai dari head
            while (Help->Next != Tail){ //melakukan perulangan untuk mencari node terakhir sebelum tail
                Help = Help->Next;
            }
            DeleteNode = Tail; // pointer hapus menunjuk tail yang akan dihapus 
            Tail = Help; //node tail menunjuk ke node help 
            DeletedData = DeleteNode->Data; //data yang akan dihapus disimpan oleh int DeletedData
            (*Tail).Next = Head; //pointer next pada Tail menunjuk head
            delete DeleteNode; //menghapus node 
        }
        else{
            DeletedData = Head->Data; //data yang akan dihapus disimpan oleh int DeletedData
            Head = Tail = NULL; //Node Head dan Tail dikosongkan
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteAll(){
    Tnode *Help, *DeleteNode; //membuat pointer hapus untuk menunjuk node yang akan dihapus, dan pointer bantu untuk menelusuri node-node selanjutnya
    if(isEmpty() == 0){
        Help = Head; //Pointer help dimulai dari head 
        while (Help->Next != Head){ //selama pointer help tidak kosong 
            DeleteNode = Help; //pointer delete bersiap untuk menghapus node tersebut
            Help = Help->Next; //pointer help bergeser ke node selanjutnya
            delete DeleteNode; //melakukan penghapusan node 

        }    
        Head = Tail = NULL; //node head dan tail dikosongkan
    }
    else{
        cout << "linked list is empty" << endl;
    }
}
int main(){
    InsertFront(10);
    PrintLinkedList();

    InsertFront(5);
    PrintLinkedList();

    InsertBack(20);
    PrintLinkedList();

    DeleteFront();
    PrintLinkedList();

    InsertBack(30);
    PrintLinkedList();

    DeleteBack();
    PrintLinkedList();

    DeleteAll();
    PrintLinkedList();
}*/

//Single Linked List Circular (Tanpa Tail)
/*struct Tnode{
    int Data;
    Tnode *Next;
};
Tnode *Head;

void init(){
    Head = NULL;
}

int isEmpty(){
    return (Head == NULL) ? 1 : 0; 
}

void InsertFront(int NewData){
    Tnode *NewNode, *Help; 
    NewNode = new Tnode; 
    NewNode->Data = NewData; 
    (*NewNode).Next = NewNode; 
    if(isEmpty() == 1){ 
        Head = NewNode; 
        Head->Next = Head; 
    }
    else{ 
        Help = Head; 
        while (Help->Next != Head){
            Help = Help->Next; 
        }
        NewNode->Next = Head; 
        Head = NewNode;
        Help->Next = Head; 
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void InsertBack(int NewData){
    Tnode *NewNode, *Help; //Pembuatan node baru dan pointer bantu untuk mencari node paling terakhir
    NewNode = new Tnode; //penambahan node baru
    NewNode->Data = NewData; 
    (*NewNode).Next = NewNode;  //pointer next menunjuk ke node baru lagi, agar membentuk circular

    if(isEmpty() == 1){ 
        Head = NewNode; 
        Head->Next = Head; 
    }
    else{ //jika linked list tidak kosong
        Help = Head; 
        while (Help->Next != Head){ //pointer help mencari node paling terakhir, yang menunjuk ke head
            Help = Help->Next; 
        }
        Help->Next = NewNode; //node baru dimasukkan ke belakang pointer help 
        NewNode->Next = Head; //node baru menunjuk head, agar membentuk circular
    }
    cout << (*NewNode).Data << " inserted behind of the linked list" << endl;
}

void PrintLinkedList(){
    Tnode *Print;
    Print = Head;
    if(isEmpty() == 0){
        cout << "[ ";
        do{ 
            cout << Print->Data << " "; 
            Print = Print->Next;
        }while(Print != Head);
        cout << "]" << endl << endl;
    }
    else{
        cout << "Linked list is empty" << endl << endl; 
    }
}

void DeleteFront(){
    Tnode *DeleteNode, *Help; 
    int DeletedData;
    if(isEmpty() == 0){ 
        DeleteNode = Head;  
        DeletedData = Head->Data; 
        if(Head->Next != Head){
            Help = Head;
            while(Help->Next != Head){ 
                Help = Help->Next;
            }
                Head = Head->Next;
                delete DeleteNode;
                Help->Next = Head;
        }
        else{ 
            Head = NULL; 
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteBack(){
    Tnode *DeleteNode, *Help; 
    int DeletedData; 
    if(isEmpty() == 0){ 
        if(Head->Next != Head){ 
            Help = Head; 
            while (Help->Next->Next != Head){ 
                Help = Help->Next;
            }
            DeleteNode = Help->Next; 
            DeletedData = DeleteNode->Data; 
            Help->Next = Head;
            delete DeleteNode;
        }
        else{
            DeletedData = (*Head).Data;
            Head == NULL;
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteAll(){
    Tnode *DeleteNode, *Help; 
    if(isEmpty() == 0){
        Help = Head;
        while ((*Help).Next != Head){ 
            DeleteNode = Help;
            Help = Help->Next; 
            delete DeleteNode;
        }
       cout << "All data from linked list has been deleted" << endl;
       Head = NULL; 
    }
    else{
        cout << "Linked list has already empty" << endl;
    }
}

int main(){
    InsertFront(10);
    PrintLinkedList();

    InsertFront(5);
    PrintLinkedList();

    InsertBack(20);
    PrintLinkedList();

    DeleteFront();
    PrintLinkedList();

    InsertBack(30);
    PrintLinkedList();

    DeleteBack();
    PrintLinkedList();

    DeleteAll();
    PrintLinkedList();
}



//Single Linked List Linear (Tail dan Head)
/*struct Tnode {
    int Data;
    Tnode *Next;
};

Tnode *Head;
Tnode *Tail;

void init(){
    Head = NULL; 
    Tail = NULL;
}

int isEmpty(){
    return (Tail == NULL) ? 1 : 0;  
}

void InsertFront(int NewData){
    Tnode *NewNode = new Tnode;
    NewNode->Data = NewData; 
    (*NewNode).Next = NULL;

    if(isEmpty() == 1){
        Head = Tail= NewNode; 
        Tail->Next = NULL; 
    }
    else{
        NewNode->Next = Head; 
        Head = NewNode;
    }

    cout << (*NewNode).Data << " has been inputed into linked list" << endl;
}

void InsertBack(int NewData){
    Tnode *NewNode = new Tnode; 
    NewNode->Data = NewData;
    (*NewNode).Next = NULL;
    
    if (isEmpty() == 1){ 
        Head = Tail = NewNode;
        Head->Next = NULL;
    }
    else{
        Tail->Next = NewNode;
        Tail = NewNode; 
    }
    cout << (*NewNode).Data << " has been inputed into linked list" << endl;
}

void PrintLinkedList(){
    Tnode *Print; 
    Print = Head; 
    if(isEmpty() == 0){
        cout << "[ ";
    while(Print != NULL){ 
        cout << Print->Data << " "; 
        Print = Print->Next; ;
        }
        cout << " ]" << endl << endl;
    }
    
    else{
        cout << " linked list is empty" << endl << endl; 
    }
}

void DeleteFront(){
    Tnode *DeleteNode;
    int DeletedData;

    if(isEmpty() == 0){
        if(Head != Tail){
            DeleteNode = Head;
            DeletedData = (*DeleteNode).Data;   
            Head= Head->Next; 
            delete DeleteNode; 
        }
        else{ 
            DeletedData = Tail->Data; 
            Head = Tail = NULL; 
        }
        cout << DeletedData << " deleted from the linked list" << endl;
    }
    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteBack(){
    Tnode *DeleteNode, *Help; 
    int DeletedData; 

    if(isEmpty() == 0){ 
        Help = Head;
        if(Head != Tail){
            while(Help->Next != Tail){ 
                Help = Help->Next;
            }
            DeleteNode = Tail;
            Tail = Help;
            DeletedData = DeleteNode->Data; 
            Help->Next = NULL; 
            delete DeleteNode;
        }

    else{
            DeletedData = Tail->Data;
            Head = Tail = NULL; 
        }
        cout << DeletedData << " has been deleted from linked list" << endl;
    }

    else{
        cout << "linked list is empty" << endl;
    }
}

void DeleteAll(){
    Tnode *DeleteNode, *Help;
    int DeletedData;
    
    Help = Head;
    while(Help != NULL){
        DeleteNode = Help;
        Help = Help->Next;
        delete DeleteNode;
    }
    cout << "All data from linked list has been deleted"  << endl;
        Head = Tail = NULL;
	  
    }
    


int main(){
InsertFront(10);
PrintLinkedList();

InsertBack(30);
PrintLinkedList();

DeleteBack();
PrintLinkedList();

DeleteFront();
PrintLinkedList();

InsertFront(5);
PrintLinkedList();

InsertBack(50);
PrintLinkedList();

DeleteAll();
PrintLinkedList();
}*/

//Single Linked List Linear
/*struct Tnode{
    int Data;
    Tnode *Next; 
};

Tnode *Head; 

void init(){
    Head = NULL; 
}

int isEmpty(){
    return (Head == NULL) ? 1 : 0; 
} 

void InsertFront(int NewData){
    Tnode *NewNode = new Tnode;
    NewNode->Data = NewData;
    NewNode->Next = NULL; 
    
    if(isEmpty() == 1){ 
        Head = NewNode; 
        (*Head).Next = NULL; 
    }
    else{ 
        (*NewNode).Next = Head;
        Head = NewNode; 
    }
    cout << (*NewNode).Data << " inserted in front of the linked list" << endl;
}

void InsertBack(int NewData){
    Tnode *NewNode = new Tnode; 
    Tnode *Help;
    NewNode->Data = NewData;
    NewNode->Next = NULL;

    if (isEmpty() == 1){
        Head = NewNode;
        Head->Next = NULL;
    }
    else{
        Help = Head; 
        while(Help->Next != NULL){
            Help = Help->Next;
        }
        Help->Next = NewNode;
    }
    cout << (*NewNode).Data << " inserted behind of the linked list" << endl;
}

void PrintLinkedList(){
    Tnode *Print = Head;
    if(isEmpty() == 0){
        cout << "[ ";
        while (Print != NULL){ 
            cout << Print->Data << " "; 
            Print = Print->Next;
        }
        cout << "]";
        cout << endl << endl;
    }
    else{ 
        cout << "Linked list is empty" << endl << endl;
    }
}

void DeleteFront(){
    Tnode *DeleteNode; 
    int DeletedData; 

    if(isEmpty()== 0){
        if((*Head).Next != NULL){ 
            Head->Next = Head; 
            DeleteNode = Head; 
            DeletedData = Head->Data; 
            delete DeleteNode; 
        }
        else{
            DeletedData = Head->Data; 
            Head = NULL; 
        }
        cout << DeletedData << " deleted from in front of the linked list" << endl; 
    }
    else{
        cout << "Linked list is empty" << endl;
    }
}

void DeleteBack(){
    Tnode *DeleteNode, *Help; 
    int DeletedData; 

    if(isEmpty() == 0){ 
        if((*Head).Next != NULL){ 
            Help = Head;
            while (Help->Next->Next != NULL){ 
                Help = Help->Next;
            }
            DeleteNode = Help->Next;
            DeletedData = DeleteNode->Data; 
            Help->Next = NULL; 
            delete DeleteNode;
        }
        else{
            DeletedData = Head->Data;
            Head = NULL;
        }

        cout << DeletedData << " deleted from behind of the linked list" << endl;
    }
    else{
        cout << "Linked list is empty" << endl;
    }
}

void DeleteAll(){
    Tnode *DeleteNode, *Help;
    Help = Head; 
    if (isEmpty() == 0){
        while (Help != NULL){ 
            DeleteNode = Help; 
            Help = Help->Next; 
            delete DeleteNode;
        }
        cout << "All data from linked list has been deleted" << endl;
        Head = NULL;
    }
    else{
        cout << "Linked list has already empty" << endl;
    }   
}

int main(){
InsertFront(10);
PrintLinkedList();

DeleteBack();
PrintLinkedList();

InsertBack(30);
PrintLinkedList();

DeleteFront();
PrintLinkedList();

InsertFront(5);
PrintLinkedList();

InsertBack(50);
PrintLinkedList();

DeleteAll();
PrintLinkedList();
}
}*/

