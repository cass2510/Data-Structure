#include<stdio.h>

int main(){
       char string1[] = "Dreams come true!";
       char *ptr;
       ptr = &string1[0];

       printf("%p, %p\n", (void *)string1, (void *)ptr);

       printf("%s\n", string1);
       printf("\n");

       for(int i = 7; string1[i] != '\0'; i++){
        printf("%c", string1[i]);
       }
       printf("\n");

       for(char *p = ptr + 7; *p != '\0'; p++){
        printf("%c", *p);
       }
       printf("\n");
       
       char *ptr2 = string1;
       while (*ptr2 != '\0'){
        ptr2++;
       }
       ptr2--;
       for(; ptr2 >= &string1[0]; ptr2--){
            printf("%c", *ptr2);
       }
       printf("\n\n");
       
       printf("Peace ");
       char *ptr3 = string1;
       for(char *p = ptr3 + 7; *p != '\0'; *p++){
        printf("%c", *p);
       }

       return 0;
}