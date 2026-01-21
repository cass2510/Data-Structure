#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
} Node;


typedef struct linkedQueue{
    Node *front;
    Node *rear;
} linkedQueue;


void returnNode(Node* old){
    free(old);
}


Node* createNode(int x){
    Node *newNode = malloc(sizeof(Node));       //Node 만큼의 초기화되지 않은 메모리 할당
    if(newNode == NULL){
        perror("malloc\n");
        return NULL;
    }
    newNode->data = x;                          //newNode 타입이 Node* 이므로
    newNode->link = NULL;                       //컴파일러가 더미 데이터를 Node 구조체의 시작 주소로 해석
    return newNode;
}


void makeEmptyQueue(linkedQueue* lq){
    lq->front = NULL;
    lq->rear = NULL;
}


int isEmpty(linkedQueue* lq){
    return (lq->front == NULL);
}


void enQueue(linkedQueue* lq, int x){
    Node* newNode = createNode(x);
    if(isEmpty(lq)){
        lq->front = newNode;
        lq->rear = newNode;
    }
    else{
        lq->rear->link = newNode;
        lq->rear = newNode;
    }
    printf("Enqueued Data : %d\n", lq->rear->data);
    return;
}


int deQueue(linkedQueue* lq){
    int x;
    if(isEmpty(lq)){
        perror("Linked Queue Empty\n");
        return -1;
    }
    else{
        Node* oldNode = lq->front;
        x = oldNode->data;
        lq->front = lq->front->link;
        if(isEmpty(lq)){
            lq->rear = NULL;
        }
        returnNode(oldNode);
        printf("DeQueued Data : %d\n", x);
        return x;
    }
}


int peek(linkedQueue* lq){
    if(isEmpty(lq)){
        perror("Linked Queue Empty\n");
        return -1;
    }
    else{
        printf("Peeked Data : %d\n", lq->front->data);
        return lq->front->data;
    }
}


void printLinkedQueue(linkedQueue* lq){
    if(isEmpty(lq)){
        printf("Linked Queue Empty\n");
        return;
    }
    printf("Linked Queue | ");
    Node *print = lq->front;
    while(print != NULL){
        printf("%d ", print->data);
        print = print->link;
    }
    printf("|\n");
    return;
}


int main(){
    linkedQueue lq;
    makeEmptyQueue(&lq);

    enQueue(&lq, 10);
    enQueue(&lq, 20);
    enQueue(&lq, 30);

    peek(&lq);

    printLinkedQueue(&lq);

    deQueue(&lq);
    deQueue(&lq);
    deQueue(&lq);

    printLinkedQueue(&lq);

    enQueue(&lq, 40);
    enQueue(&lq, 50);

    printLinkedQueue(&lq);

    return 0;
}