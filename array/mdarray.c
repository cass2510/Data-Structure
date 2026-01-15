#include<stdio.h>
int main(){
    int mdarr[2][3][4];
    int num = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                mdarr[i][j][k] = num++;
                printf("mdarr[%d][%d][%d] = %d\n", i, j, k, num);
            }
        }
    }
    return 0;
}