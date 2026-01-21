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
    }
    newNode->llink = NULL;
    newNode->data = x;
    newNode->rlink = NULL;
    return newNode;
}


Deque* createEmptyDeque(Deque* dq){
    dq->front = NULL;
    dq->rear = NULL;
}


int isEmpty(Deque* dq){
    return (dq->front == NULL);
}


void insertFront(Deque* dq, int x){

}


void insertRear(Deque* dq, int x){

}


int deleteFront(Deque* dq){

}


int deleteRear(Deque* dq){

}


int getFront(Deque *dq){

}


int getRear(Deque *dq){

}


void printDeque(Deque *dq){

}


int main(){
    Deque* dq;
    createEmptyDeque(dq);
}