#include<stdio.h>
#include<string.h>

struct employee {
    char name[10];
    int year;
    int pay;
};

int main(){
    struct employee Lee;
    struct employee *sptr = &Lee;

    strcpy((*sptr).name, "이순신");
    sptr->year = 2020;
    Lee.pay = 7000;

    printf("이름: %s\n", (*sptr).name);
    printf("연도: %d\n", sptr->year);
    printf("연봉: %d\n", (*sptr).pay);

    return 0;
}