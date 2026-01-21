#include<stdio.h>

#define MAX_QUEUE_SIZE 100

	// 0개 이상의 원소를 가진 유한 순서 리스트가 데이터로 주어짐

typedef struct{
	int data[MAX_QUEUE_SIZE];
	int front;			//삭제
	int rear;			//삽입
} queue;


	//공백 큐 생성

void createQueue(queue *q){
	q->front = -1;
	q->rear = -1;
}


	//공백 상태 검사

int isEmpty(queue *q){
	if(q->front == q->rear){
		return 1;
	}
	else return 0;
}


	//포화 상태 검사

int isFull(queue *q){
	if(q->rear == MAX_QUEUE_SIZE - 1){
		return 1;
	}
	else return 0;
}

	//삽입(enQueue)
		
void enQueue(queue *q, int x){
	if(isFull(q)){
		perror("Queue Full\n");
		return;
	}
	q->data[++(q->rear)] = x;
	printf("Enqueued Data : %d, Current front : %d, Current rear : %d\n", q->data[q->rear], q->front, q->rear);
}


	//삭제(deQueue)

int deQueue(queue *q){
	if(isEmpty(q)){
		perror("Queue Empty\n");
		return -1;
	}
	int deQueued = q->data[q->front];
	q->data[q->front] = 0;

	if(q->front == q->rear){
		q->front = -1;
		q->rear = -1;
	} 
	else{
		q->front++;
	}

	printf("Dequeued Data : %d, Current front : %d, Current rear : %d\n", deQueued, q->front, q->rear);
	return deQueued;
}


	//출력 코드

void printQueue(queue *q){
	if(isEmpty(q)){
		printf("Queue Empty\n");
	}
	else{
		printf("Front : %d |", q->front);
		for(int i = q->front + 1; i <= q->rear; i++){
			printf(" %d |", q->data[i]);
		}
		printf(" Rear : %d\n", q->rear);
	}
}


int main(){
	queue q;
	createQueue(&q);

	enQueue(&q, 10);
	enQueue(&q, 20);
	enQueue(&q, 30);
	enQueue(&q, 40);

	printQueue(&q);

	deQueue(&q);
	deQueue(&q);

	printQueue(&q);

	return 0;
}