#include<stdio.h>

int main(){
    int sale[4] = {157, 209, 251, 312};

    for(int i = 0; i < 4; i++){
        printf("%d분기 판매량, %d, %p\n", i+1, sale[i], &sale[i]);
    }

    return 0;
}