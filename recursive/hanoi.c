#include<stdio.h>

void movedisc(int n, char start, char target, char mid){
    if(n == 1){
        printf("%d번 원반을 %c에서 %c로 이동\n", n, start, target);
        return;
    }
    
    movedisc(n-1, start, mid, target);

    printf("%d번 원반을 %c에서 %c로 이동\n", n, start, target);

    movedisc(n-1, mid, target, start);
}

int main(){
    int n;

    printf("원반의 개수를 입력하세요 : \n");
    scanf("%d", &n);

    printf("\n이동 과정 : \n");

    movedisc(n, 'A', 'C', 'B');

    return 0;
}