#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

typedef struct {
   string item;
}warehouse;

warehouse stack [MAX_STACK_SIZE];
int top;
warehouse stock;

void initialization (int *top){
    *top = -1;
}

int isEmpty(int top){
    return top == -1;
} 

int isFull(int top){
    return top == MAX_STACK_SIZE - 1;
}

void push (int *top, warehouse stack[], warehouse stock){
    if (!isFull(*top)){
        stack[(*top)++] = stock;
    }
    else{
        cout << "stack is full" << endl;
    }
}

warehouse pop (int *top, warehouse stack[]){
    if (!isEmpty(*top)){
        return stack[(*top)--];
    }
    else{
        cout << "stack is empty" << endl;
    }
}

int main(){
    initialization(&top);
    do{
        cout << "input item (cover with tarpaulin to stop) : ";
        getline(cin,stock.item);
        push(&top,stack, stock);
    } while (stock.item.compare("tarpaulin") != 0);
    
    
    while(!isEmpty(top)){
        stock = pop(&top, stack);
        cout << stock.item << " ";
    }    

    return 0;
}

/*#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

typedef struct {
   int key;
}element;

element stack [MAX_STACK_SIZE];
int top;
element item;

void initialization (int *top){
    *top = -1;
}

int isEmpty(int top){
    return top == -1;
} 

int isFull(int top){
    return top == MAX_STACK_SIZE - 1;
}

void push (int *top, element stack[], element item){
    if (!isFull(*top)){
        stack[(*top)++] = item;
    }
    else{
        cout << "stack is full" << endl;
    }
}

element pop (int *top, element stack[]){
    if (!isEmpty(*top)){
        return stack[(*top)--];
    }
    else{
        cout << "stack is empty" << endl;
    }
}

int main(){
    initialization(&top);
    do{
        push(&top,stack, item);
        cout << "input data (input 0 to stop) : ";
        cin >> item.key;
    } while (item.key != 0);
    
    
    while(!isEmpty(top)){
        item = pop(&top, stack);
        cout << item.key << " ";
    }   

    return 0; 
}*/

/*
#include <iostream>
using namespace std;

#define MAX_STACK_SIZE 100
typedef struct {
    int key;
}element;

element stack [MAX_STACK_SIZE];
int top;
element item;

void init(int *top){
    *top = -1;
}

int stackfull(int top){ 
    return top == MAX_STACK_SIZE-1;
}

int stackempty(int top){
    return top == -1;
}


void push(int *top, element stack[], element item){
    if (!stackfull(*top)){
        stack[(*top)++] = item;
    }
    else{
        cout << "stack is full" << endl;
    }
}

element pop(int *top,element stack[]){
    if(!(stackempty(*top))){
        return stack[(*top)--];
    }
    else{
        cout << "stack is empty" << endl;
    }
}

int main(){
    init(&top);
    cout << "Input data : ";
    cin >> item.key;
    while (item.key != 0){
        push(&top, stack, item);
        cout << "input your data (input 0 to stop) : ";
        cin >> item.key;
    }

    while(!(stackempty(top))){
        item = pop (&top, stack);
        cout << item.key << " ";
    }
return 0;
}
*/