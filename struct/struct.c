#include<stdio.h>
#include<string.h>

struct student{
    char name[10];
    int age;
    int year;
};

int main(){
    struct student Lee = {"Jay", 27, 2024};
    struct student Kim = {"John", 26, 2025};
    struct student Park = {"Peter", 24, 2020};

    printf("%s\n", Lee.name);
    printf("%d\n", Kim.age);
    printf("%d\n\n", Park.year);

    Lee.age = 26;

    strcpy(Lee.name, "No Jay");    // array 형태

    printf("%s\n", Lee.name);
    printf("%d\n", Lee.age);
    printf("%d\n\n", Lee.year);

    return 0;

}