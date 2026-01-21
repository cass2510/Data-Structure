#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    struct Node *llink;
    int data;
    struct Node *rlink;
} Node;


typedef struct Deque{
    Node *front;
    Node *rear;
} Deque;


void returnNode(Node* old){
    free(old);
}


Node* createNode(int x){
    Node* newNode = malloc(sizeof(Node));
    if(newNode == NULL){
        perror("malloc\n");
        return NULL;
    }
    newNode->llink = NULL;
    newNode->data = x;
    newNode->rlink = NULL;
    return newNode;
}


void createEmptyDeque(Deque* dq){
    dq->front = NULL;
    dq->rear = NULL;
}


int isEmpty(Deque* dq){
    return (dq->front == NULL);
}


void insertFront(Deque* dq, int x){
    Node* newNode = createNode(x);
    if(isEmpty(dq)){
        dq->front = newNode;
        dq->rear = newNode;
    } else {
        newNode->rlink = dq->front;
        newNode->rlink->llink = newNode;
        dq->front = newNode;
    }
    printf("Front inserted : %d\n", x);
}


void insertRear(Deque* dq, int x){
    Node* newNode = createNode(x);
    if(isEmpty(dq)){
        dq->front = newNode;
        dq->rear = newNode;
    } else {
        newNode->llink = dq->rear;
        newNode->llink->rlink = newNode;
        dq->rear = newNode;
    }
    printf("Rear inserted : %d\n", x);
}


int deleteFront(Deque* dq){
    if(isEmpty(dq)){
        perror("Deque Empty\n");
        return -1;
    }
    Node* oldNode = dq->front;
    int deleted = oldNode->data;

    dq->front = oldNode->rlink;
    if(dq->front == NULL){
        dq->rear = NULL;
    } else {
        dq->front->llink = NULL;
    }

    returnNode(oldNode);
    printf("Front Deleted : %d\n", deleted);
    return deleted;
}


int deleteRear(Deque* dq){
    if(isEmpty(dq)){
        perror("Deque Empty\n");
        return -1;
    }
    Node *oldNode = dq->rear;
    int deleted = oldNode->data;

    dq->rear = oldNode->llink;
    if(dq->rear == NULL){
        dq->front = NULL;
    } else {
        dq->rear->rlink = NULL;
    }

    returnNode(oldNode);
    printf("Rear Deleted : %d\n", deleted);
    return deleted;
}


int getFront(Deque *dq){
    if(isEmpty(dq)){
        printf("Deque Empty\n");
        return -1;
    }
    int frontData = dq->front->data;
    printf("Current Front Data : %d\n", frontData);
    return frontData;
}


int getRear(Deque *dq){
    if(isEmpty(dq)){
        printf("Deque Empty\n");
        return -1;
    }
    int rearData = dq->rear->data;
    printf("Current Rear Data : %d\n", rearData);
    return rearData;
}


void printDeque(Deque *dq){
    if(isEmpty(dq)){
        printf("Deque Empty\n");
        return;
    }
    printf("\nDeque | ");
    Node *print = dq->front;

    while(print != NULL){
        printf("%d | ", print->data);
        print = print->rlink;
    }
    printf("\n\n");
}



int main(){
    Deque dq;
    createEmptyDeque(&dq);

    insertFront(&dq, 10);
    insertFront(&dq, 20);
    insertRear(&dq, 30);

    printDeque(&dq);

    deleteFront(&dq);
    deleteRear(&dq);

    printDeque(&dq);

    insertRear(&dq, 40);
    insertFront(&dq, 50);
    insertFront(&dq, 60);

    printDeque(&dq);

    getFront(&dq);
    getRear(&dq);

    return 0;

}