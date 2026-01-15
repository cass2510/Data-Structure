#include<stdio.h>
#define MAX_SIZE 100

int main(){
    char student[2][3][MAX_SIZE];

    for(int c = 0; c < 2; c++){
        printf("학생%d의 이름: ", c+1);
        fgets(student[c][0], sizeof(student[c][0]), stdin);
        printf("학생%d의 학과: ", c+1);
        fgets(student[c][1], sizeof(student[c][1]), stdin);
        printf("학생%d의 학번: ", c+1);
        fgets(student[c][2], sizeof(student[c][2]), stdin);
    }

    for(int c = 0; c < 2; c++){    
        printf("학생 %d\n", c + 1);
        printf("\t");
        for(int i = 0; student[c][0][i] != '\0'; i++){
            printf("%c", student[c][0][i]);
        }
        printf("\n\t");
        for(int i = 0; student[c][1][i] != '\0'; i++){
            printf("%c", student[c][1][i]);
        }
        printf("\n\t ");
        for(int i = 0; student[c][2][i] != '\0'; i++){
            printf("%c", student[c][2][i]);
        }
        printf("\n");
    }
    return 0;
}