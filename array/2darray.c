#include<stdio.h>

int main(){
    int i, n = 0;
    int *ptr;
    int sale[2][4] = {{63, 84,140, 130}, {157, 209, 251, 312}};

    ptr = &sale[0][0];
    for(i = 0; i < 8; i++){
        printf("address : %p, sale %d = %d\n", ptr, i, *ptr);
        ptr++;
    }
    return 0;
            // C컴파일러의 행 우선 순서 방법 확인
}