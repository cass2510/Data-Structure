#include<stdio.h>
#include<string.h>

struct employee{
    char name[10];
    int age;
};

int main(){
    struct employee Kim = {"Jay", 27};
    struct employee team[2];

    struct employee *sptr1, *sptr2;

    sptr1 = &Kim;
    sptr2 = team;   // team[0]

    team[1] = Kim;  // Kim을 team 1에 대입

    strcpy((*sptr2).name, "Lee");
    sptr2->age = 25;
    team[1].age = 26;

    printf("%s, %d\n", Kim.name, Kim.age);
    printf("%s, %d\n", (*sptr2).name, sptr2->age);
    printf("%s, %d\n", team[1].name, team[1].age);

    return 0;
}