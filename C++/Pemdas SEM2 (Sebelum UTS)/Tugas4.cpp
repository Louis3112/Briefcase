#include <iostream>
#define MAX_QUEUE_SIZE 5 //pembatasan maksimal queue
using namespace std;

typedef struct{ 
    int Key; //pendefinisian member queue untuk menyimpan data
}Element;
Element Queue[MAX_QUEUE_SIZE]; //pendefinisian struct queue 

void Init(int *Front, int *Length){
    *Front = *Length = 0; //menginisiasi bahwa front dan length dimulai dari 0 
}

int QueueEmpty(int Length){
    return Length == 0; //jika panjang dari queue kosong, maka queue kosong
}

int QueueFull(int Length){
    return Length == MAX_QUEUE_SIZE; //jika panjang dari queue sama dengan batas maksimal, maka queue penuh
}

void Enqueue(int Front, int *Length, Element Queue[], Element Item){
    int Where; //pembuatan variabel where untuk meletakkan data pada queue
    if (!QueueFull(*Length)) { //jika queue tidak penuh
        Where = Front + *Length; //where digunakan untuk menghitung letak data dimasukkan, dengan menghitung dari awal dan panjang queue
        Queue[Where % MAX_QUEUE_SIZE] = Item; //data yang baru diletakkan pada queue, dengan urutan Where % batas maksimal (hasilnya berupa bilangan itu sendiri)
        (*Length)++; //menambah panjang queue karena dimasukkan data baru
    }
}

Element Dequeue(int *Front, int *Length, Element Queue[]){
    int Where; //pembuatan variabel where untuk mengambil data yang akan diambil
    if(!(QueueEmpty(*Length))){ //jika queue tidak kosong
        Where = *Front; //variabel where mengambil alamat front
        *Front = (Where+1) % MAX_QUEUE_SIZE; //front berpindah posisi ke tempat selanjutnya 
        (*Length)--; //panjang queue dikurangi
        return Queue[Where]; //mengembalikan nilai pertama dalam queue
    }
}

void PrintQueue(Element Queue[], int Front, int Length){
    for (int i = 0; i < Length;i++){  
        cout << Queue[Front + i % MAX_QUEUE_SIZE].Key << " "; //menampilkan semua data pada queue satu per satu 
    }
    cout << endl;
}

int main (){
    int Front,Length; // mendeklarasikan front dan length, front untuk queue paling depan, length untuk panjang queue
    Element Item; //mendeklarasikan item.key untuk menyimpan data

    Init(&Front, &Length); //inisiasi front dan length
    Item.Key = 0;

    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        Enqueue(Front, &Length, Queue, Item);
        Item.Key++;
        PrintQueue(Queue, Front, Length);
    }
    
    for (int i = 0; i < MAX_QUEUE_SIZE;i++){
        PrintQueue(Queue, Front, Length);
        Item = Dequeue(&Front, &Length, Queue);
    }
return 0;    
}

/*#include <iostream>
#define MAX_QUEUE_SIZE 5 //pembatasan maksimal queue
using namespace std;

typedef struct{ 
    int key; //pendefinisian member queue untuk menyimpan data
}element;
element queue[MAX_QUEUE_SIZE]; //pendefinisian struct queue 

void init(int *front, int *length){
    *front = *length = 0; //menginisiasi bahwa front dan length dimulai dari 0 
}

int QueueEmpty(int length){
    return length == 0; //jika panjang dari queue kosong, maka queue kosong
}

int QueueFull(int length){
    return length == MAX_QUEUE_SIZE; //jika panjang dari queue sama dengan batas maksimal, maka queue penuh
}

void enqueue(int front, int *length, element queue[], element item){
    int where; //pembuatan variabel where untuk meletakkan data pada queue
    if (!QueueFull(*length)) { //jika queue tidak penuh
        where = front + *length; //where digunakan untuk menghitung letak data dimasukkan, dengan menghitung dari awal dan panjang queue
        queue[where % MAX_QUEUE_SIZE] = item; //data yang baru diletakkan pada queue, dengan urutan Where % batas maksimal (hasilnya berupa bilangan itu sendiri)
        (*length)++; //menambah panjang queue karena dimasukkan data baru
    }
}

element dequeue(int *front, int *length, element queue[]){
    int where; //pembuatan variabel where untuk mengambil data yang akan diambil
    if(!(QueueEmpty(*length))){ //jika queue tidak kosong
        where = *front; //variabel where mengambil alamat front
        *front = (where+1) % MAX_QUEUE_SIZE; //front berpindah posisi ke tempat selanjutnya 
        (*length)--; //panjang queue dikurangi
        return queue[where]; //mengembalikan nilai pertama dalam queue
    }
}

void PrintQueue(element queue[], int front, int length){
    for (int i = 0; i < length;i++){  
        cout << queue[front + i % MAX_QUEUE_SIZE].key << " "; //menampilkan semua data pada queue satu per satu 
    }
    cout << endl;
}

int main (){
    int front,length; // mendeklarasikan front dan length, front untuk queue paling depan, length untuk panjang queue
    element item; //mendeklarasikan item.key untuk menyimpan data

    init(&front, &length); //inisiasi front dan length
    item.key = 0;

    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        enqueue(front, &length, queue, item);
        item.key++;
        PrintQueue(queue, front, length);
    }
    
    for (int i = 0; i < MAX_QUEUE_SIZE;i++){
        PrintQueue(queue, front, length);
        item = dequeue(&front, &length, queue);
    }
return 0;    
}*/

/*#include <iostream>
#define MAX_QUEUE_SIZE 10
using namespace std;

typedef struct {
    int key;
} element;

element queue[MAX_QUEUE_SIZE];
int front;
int length;
element item;
void initialization(int *front, int *length){
    *front = *length = 0;
}

int isEmpty(int length){
    return length == 0;
}

int isFull (int length){
    return length == MAX_QUEUE_SIZE;
}

void enqueue(int front, int *length, element queue[], element item){
    int where;
    if(!isFull(*length)){
        where = front + *length;
        queue[ where % MAX_QUEUE_SIZE ] = item;
        (*length)++;
    }
    else {
        cout << "queue is full" << endl;
    }
}

element dequeue(int *front, int *length, element queue[]){
    int where;
    if(!isEmpty(*length)){
        where = *front;
        *front = (where+1) % MAX_QUEUE_SIZE;
        (*length)--;
        return queue[where];
    }
    else {
    cout << "queue is empty" << endl;
    }
}

void PrintQueue(element queue[], int front, int length){
    for (int i =  0; i < length; i++){
        cout << queue[(front+i) % MAX_QUEUE_SIZE].key << " ";
    }
    cout << endl;
}
int main(){
    initialization(&front, &length);
    element item;
    item.key = 0;

    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        enqueue(front, &length, queue, item);
        item.key++;
    }
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        cout << "Dequeued elements: " << dequeue(&front, &length, queue).key << endl;
    }

return 0;
}*/

/*#include <iostream>
#define MAX_QUEUE_SIZE 5 //pembatasan 
using namespace std;

typedef struct{
    int key;
}element;

void init(int *front, int *length){
    *front = *length = 0;
}

int QueueEmpty(int length){
    return length == 0;
}

int QueueFull(int length){
    return length == MAX_QUEUE_SIZE;
}

void enqueue(int front, int *length, element queue[], element item){
    int where;
     if (!QueueFull(*length)) {
        where = front + *length;
        queue[where % MAX_QUEUE_SIZE] = item;
        (*length)++;
    }
}

element dequeue(int *front, int *length, element queue[]){
    int where;
    if(!(QueueEmpty(*length))){
        where = *front;
        *front = (where+1) % MAX_QUEUE_SIZE; 
        (*length)--;
        return queue[where];
    }
}

void PrintQueue(element queue[], int front, int length){
    for (int i = 0; i < length;i++){
        cout << queue[front + i % MAX_QUEUE_SIZE].key << " ";
    }
    cout << endl;
}

int main (){
    element queue[MAX_QUEUE_SIZE];
    int front,length;
    element item;

    init(&front, &length);
    item.key = 0;

    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        enqueue(front, &length, queue, item);
        item.key++;
        PrintQueue(queue, front, length);
    }
    
    for (int i = 0; i < MAX_QUEUE_SIZE;i++){
        PrintQueue(queue, front, length);
        item = dequeue(&front, &length, queue);
    }
return 0;    
}
}*/