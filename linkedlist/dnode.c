#include<stdio.h>
#include<stdlib.h>

typedef struct Dnode{
    struct Dnode *llink;
    int data;
    struct Dnode *rlink;
} Dnode;


// 노드 생성

Dnode *newDnode(){
    Dnode *n = malloc(sizeof(n));
    if(n == NULL){
        perror("malloc");
        return NULL;
    }
    n->llink = NULL;
    n->rlink = NULL;
    return n;
}

// 노드 메모리 회수

void returnNode(Dnode *n){
    free(n);
}


// 노드 삽입

void insertNode(Dnode **DL, Dnode *pre, int x){
    Dnode *n = newnode();
    n->data = x;

    n->rlink = pre->rlink;
    pre->rlink = n;

    n->llink = pre;
    n->rlink->llink = n;
}


    // 노드 삭제

void deleteNode(Dnode **DL, Dnode *old){
    old->llink->rlink = old->rlink;
    old->rlink->llink = old->llink;
    returnNode(old);
}


int main(){
    Dnode *head = NULL;
    
}