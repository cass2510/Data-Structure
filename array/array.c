#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int main(){
	int arr[MAX_SIZE] = {0};
	arr[0] = 1;
	arr[1] = 2;
	
	int i;
	for(i = 0; i < MAX_SIZE; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
