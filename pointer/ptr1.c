#include<stdio.h>
int main(){
    int i = 10;
    int j = 20;
    
    int *ptr_i = &i;

    int *ptr_j;
    ptr_j = &j;

    printf("i = %d, j = %d\n", i, j);
    printf("&i = %d, &j = %d\n\n", ptr_i, ptr_j);

    *ptr_i = 30;
    j = *ptr_i;
    printf("i = %d, j = %d\n", i, j);

    return 0;
}