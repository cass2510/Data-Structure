#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int *ptr1 = &i;

    char *ptr2 = (char *)malloc(100);

    char *ptr3 = "Hello";

    char A[100];
    char *ptr4 = A;

    char B[100];
    char *ptr5 = &B[0];

    printf("%d\n%d\n%d\n%d\n%d\n", ptr1, ptr2, ptr3, ptr4, ptr5);

    return 0;
}