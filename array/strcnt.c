#include<stdio.h>
int main(){
    char str[100];
    printf("문자열을 입력하세요 : ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    return 0;
}