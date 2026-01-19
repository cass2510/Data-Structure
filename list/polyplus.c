#include<stdio.h>

// (지수, 계수)의 집합 데이터가 주어짐

#define MAX_EXP 6
#define INPUT_MAX 5

void sortpoly(int const poly[INPUT_MAX][2], int spoly[MAX_EXP]){

    for(int i = 0; i < MAX_EXP; i++){
        spoly[i] = 0;
    }

    for(int i = 0; i < INPUT_MAX; i++){
        int e = poly[i][0];
        int c = poly[i][1];

        if(0 <= e && e < MAX_EXP){
            spoly[e] += c;
        }
    }
}

void sumpoly(int poly1[INPUT_MAX][2], int poly2[INPUT_MAX][2], int sum[MAX_EXP]){

    int p1[MAX_EXP], p2[MAX_EXP];
    sortpoly(poly1, p1);
    sortpoly(poly2, p2);


    for(int n = 0; n < MAX_EXP; n++){
        sum[n] = p1[n] + p2[n];
    }
}


int main(){

    int poly1[INPUT_MAX][2] = {{2,3},{3,4},{1,2},{5,1},{0,1}};
    int poly2[INPUT_MAX][2] = {{3,2},{2,1},{1,0},{0,1},{4,3}};
    int polysum[MAX_EXP];

    sumpoly(poly1, poly2, polysum);

    int first = 1;
    for(int i = INPUT_MAX; i >= 0; i--){

        if(polysum[i] == 0) continue;

        if(!first) printf(" + ");
        first = 0;

        if(i == 0){
            printf("%d", polysum[i]);
        }
        else if(polysum[i] == 1){
            printf("X");
            if(i != 1){
                printf("^%d", i);
            }
        }
        else{
            printf("%dX", polysum[i]);
            if(i != 1){
                printf("^%d", i);
            }
        }
    }

    return 0;
}
