#include<stdio.h>
#include<stdlib.h>      //malloc

    //삽입 : 노드 생성 - 새 값 저장 - 새 링크값 지정 - 앞 노드와 연결
    //삭제 : 삭제 노드의 앞 노드 찾기 - 앞 노드에 삭제 노드의 링크값 저장
    //      - 삭제 노드 앞 노드와 삭제 노드 다음 노드 연결

typedef struct Node{
    int data;
    struct Node* link;
} Node;


Node *getNode(){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        perror("malloc");
        return NULL;
    }
    n->link = NULL;
    return n;
}

    //노드 메모리 회수

void returnNode(Node *n){
    free(n);
}


    //첫 노드로 삽입

void insertFirstNode(Node **L, int x){
    Node *n = getNode();

    n->data = x;
    n->link = *L;
    *L = n;
}


    //중간 노드로 삽입

void insertMiddleNode(Node **L, Node *pre, int x){
    Node *n = getNode();
    n->data = x;

    if(*L == NULL){
        *L = n;
    }
    else{
        n->link = pre->link;
        pre->link = n;
    }
}

    //마지막 노드로 삽입

void insertLastNode(Node **L, int x){
    Node *n = getNode();

    n->data = x;

    if(*L == NULL){
        *L = n;
        return;
    }

    Node *temp = *L;
        while(temp->link != NULL){
            temp = temp->link;
        }

    temp->link = n;
}


    //노드 삭제 (pre가 가리키는 노드의 다음 노드 삭제)

void deleteNode(Node **L, Node *pre){
    if(*L == NULL){
        perror("Error");
    }
    else{
        Node *old = pre->link;
        if(old == NULL){
            return;
        }
        pre->link = old->link;
        returnNode(old);
    }
}

    //노드 탐색

Node *searchNode(Node **L, int x){
    Node *temp = *L;
    while(temp != NULL){
        if(temp->data == x){
            printf("%d Found. Node address : %p\n\n", temp->data, temp->link);
            return temp;
        }
        else{
            temp = temp->link;
        }
    }
    printf("Node Not Found");
    return NULL;
}

    //출력 테스트 코드

void printList(Node *head){
    for(Node *p = head; p != NULL; p = p->link){
        printf("DATA : %d, LINK : %p ->\n", p->data, p->link);
    }
    printf("\n");
}


int main(){
    Node *head = NULL;

    insertFirstNode(&head, 10);
    insertMiddleNode(&head, head, 30);
    insertLastNode(&head, 50);

    printList(head);

    searchNode(&head, 30);

    insertMiddleNode(&head,head->link, 40);

    printList(head);

    deleteNode(&head, head->link->link);

    printList(head);

    //  리스트 역순 재배열

    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;

    printList(head);

    return 0;
}