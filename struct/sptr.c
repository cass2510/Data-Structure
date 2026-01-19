#include<stdio.h>
#include<string.h>

struct employee {
    char name[10];
    int age;
    int year;
};

int main(){

    struct employee Kim;
    struct employee *sptr = &Kim;

    strcpy(sptr->name, "Jay");
    sptr->age = 27;

    (*sptr).year = 2024;        // 이 형태도 가능

    printf("%s\n", Kim.name);
    printf("%d\n", Kim.age);

    printf("%d\n", sptr->year);

    return 0;
}