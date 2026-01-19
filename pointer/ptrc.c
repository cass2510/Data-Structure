#include<stdio.h>
int main(){
    char *ptrArray[2] = {"Korea", "Seoul"};

    char **ptrptr;
    ptrptr = ptrArray;

    printf("%p\n", (void*)&ptrArray[0]);
    printf("%p\n\n", (void *)&ptrArray[1]);

    printf("%c\n", *ptrArray[0]);
    printf("%s\n", ptrArray[0]);
    printf("%c\n", *ptrArray[1]);
    printf("%s\n\n", ptrArray[1]);

    printf("%p\n", &ptrptr);
    printf("%d\n", ptrptr);
    printf("%p\n", (void *)*ptrptr);
    printf("%c\n", **ptrptr);

    printf("%s\n\n", *ptrptr);    // Korea

    printf("%s\n", *(ptrptr + 1));    // Seoul

    return 0;
}