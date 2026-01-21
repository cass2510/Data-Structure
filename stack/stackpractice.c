#include<stdio.h>

#define MAX_SIZE 100

typedef struct{
	int data[MAX_SIZE];
	int top;
} Stack;

void initStack(Stack *s){
	s -> top = -1;
	printf("top = %d\n\n", s->top);
}

int isEmpty(Stack *s){
	return s->top == -1;
}

int isFull(Stack *s){
	return s->top == MAX_SIZE -1;
}

void printStack(Stack *s){
	printf("Current Stack state : [");
	if (isEmpty(s)){
		printf("Empty");
	} else {
		int i;
		for(i = 0; i <= s->top; i++){
			printf("%d  ",s->data[i]);
		}
	}
	printf("]\n\n");
}

void push(Stack *s, int value){
	if(isFull(s)){
		printf("Stack overflow");
		return;
	}
	s->top++;
	s->data[s->top] = value;
	printf("Pushed value : %d, Current top : %d\n\n", value, s->top);
	printStack(s);
}

int pop(Stack*s){
	if(isEmpty(s)){
		printf("Stack underflow");
		return -1;
	}
	int value = s->data[s->top--];
	printf("Popped value : %d, Current top: %d\n\n", value, s->top);
	printStack(s);
	return value;
}

int peek(Stack*s){
	if(isEmpty(s)){
		printf("Stack is Empty");
		return -1;
	}
	printf("Peeked value : %d\n\n", s->data[s->top]);
	return s->data[s->top];
}


int main(){
	Stack s;
	initStack(&s);
	
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	 
	int peek;
	
	pop(&s);
	
	return 0;
}
