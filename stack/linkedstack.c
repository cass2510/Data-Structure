#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
} Node;


    //공백 스택 생성

void createEmptyStack(Node **n){
    *n = NULL;
}

    // push 연산

void push(Node **top, int x){
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL){
        perror("malloc");
        return;
    }

    newNode->data = x;
    newNode->link = *top;
    *top = newNode;    
}


    //pop 연산

int pop(Node **top){
    Node *oldNode = *top;        // 체크 필요
    if(*top == NULL){
        perror("Stack Underflow");
        return -1;
    }
    int popped = oldNode->data; 
    *top = oldNode->link;

    free(oldNode);
    printf("Popped Data : %d\n", popped);

    return popped;
}


    //peek 연산

int peek(Node *n){
    Node *currentTop = n;
    
    if(n == NULL){
        printf("Stack Empty");
        return -1;
    }
    printf("Peeked Data : %d\n", currentTop->data);
    return currentTop->data;
}


    //출력 코드

void printStack(Node *top){
    while(top != NULL){
        printf("%d ", top->data);
        top = top->link;
    }
    printf("\n");
}


int main(){
    Node *top = NULL;
    createEmptyStack(&top);

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    printStack(top);

    pop(&top);
    pop(&top);

    printStack(top);

    return 0;
}