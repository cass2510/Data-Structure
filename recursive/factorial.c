#include<stdio.h>

long int factorial(int n){
    if( n <= 1){
        return (1);
    }
    else
        return n * factorial(n - 1);
}

int main(){
    int i;
    printf("Choose a number\n");
    scanf("%d", &i);

    printf("factorial of %d (%d!) : %d\n", i, i, factorial(i));

    return 0;
}