#include<stdio.h>
int main(){
    int i, j;
    int *ptr;
    ptr = &i;

    *ptr = 10;

    j = *ptr;

    printf("i : %d, j : %d, &ptr: %d, &i = %d", i, j, &ptr, &i);
    printf("&j = %d", &j);
    return 0;
}