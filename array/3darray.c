#include<stdio.h>

int main(){
    int i, n = 0;
    int *ptr;
    int sale[2][2][4] = {{{63, 84,140, 130}, {157, 209, 251, 312}},
                        {{59, 80, 130, 135},{149, 187, 239, 310}}};

    ptr = &sale[0][0][0];
    for(i = 0; i < 16; i++){
        printf("address : %p, sale %d = %d\n", ptr, i, *ptr);
        ptr++;
    }
    return 0;
            // C컴파일러의 면 우선 순서로 저장 확인
}