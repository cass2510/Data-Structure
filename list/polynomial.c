#include<stdio.h>

// (지수, 계수)의 집합 데이터가 주어짐

void makepoly(int poly[5][2], int coef[6]){
    for(int i = 0; i < 5; i++){
        coef[i] = 0;
    }
    
    for(int n = 0; n < 5; n++){
        int e = poly[n][0];
        int c = poly[n][1];
        coef[e] = c;                //1차원 배열의 index를 차수로 사용
    }
}


int main(){

    int p[5][2] = {{2,3},{3,4},{1,2},{5,1},{0,1}};
    int coef[6];

    makepoly(p, coef);

    for(int i = 5; i >= 0; i--){

        if(coef[i] == 0) continue;
        
        printf("%d^%d", coef[i], i);
        
        if(i > 0){
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}
