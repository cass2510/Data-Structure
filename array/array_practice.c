#include<stdio.h>
int main(){
	int i;
	printf("Choose a number: ");
	scanf("%d", &i);

	int arr[10];
	for(int j = 1; j <= 9; j++){
		arr[j] = i * j;
	}

	for(int j = 1; j <=9; j++){
		printf("%d * %d = %d", i, j, arr[j]);
	}
	return 0;
}