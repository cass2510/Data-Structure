#include<stdio.h>

#define MAX_STACK_SIZE 100

    // 0개 이상의 원소를 가진 유한 순서 리스트가 데이터로 주어짐

typedef struct Stack{
    int data[MAX_STACK_SIZE];
    int top;
} Stack;


    // 빈 스택 생성

void createEmptyStack(Stack *s){
    s->top = -1;
}


    // 스택이 비었는지 확인

int isEmpty(Stack *s){
    return s->top <= 0;
}


    // 스택이 가득 찼는지 확인

int isFull(Stack *s){
    return s->top + 1 >= MAX_STACK_SIZE;
}


    // 스택에 원소 push

void push(Stack *s, int x){
    if(isFull(s)){
        perror("Stack Overflow");
        return;
    }
    s->data[++(s->top)] = x;
    printf("\n\nPushed Data : %d\nCurrent Top : %d\n\n", x, s->top);
}


    // 스택에서 원소 pop

int pop(Stack *s){
    if(isEmpty(s)){
        perror("Stack Underflow");
    }
    int popped = s->data[(s->top)--];
    printf("\n\nPopped Data : %d\nCurrent Top : %d\n\n", popped, s->top);
    return popped;
    
}


    // 현재 top의 원소 peek

int peek(Stack *s){
    if(isEmpty(s)){
        perror("Stack Empty");
    }
    printf("\n\nPeeked Data : %d\nCurrent Top : %d\n\n", s->data[s->top], s->top);
    return s->data[s->top];
}


    // 출력 코드

void printStack(Stack *s){
    if(isEmpty(s)){
        printf("Stack Empty");
    }
    printf("STACK [ ");
    for(int i = 0; i <= s->top; i++){
        printf("%d ", s->data[i]);
    }
    printf("]\nCurrent top = %d\n\n", s->top);
}


int main(){
    Stack s;
    createEmptyStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printStack(&s);

    pop(&s);

    peek(&s);

    push(&s, 50);

    printStack(&s);

    return 0;
}