#include<stdio.h>

int main(){
    int i = 34;
    int *ptr;
    ptr = &i;
    printf("The value pointed by pointer is %d",*ptr);
    printf("The value of ptr is %u",ptr);
    ptr++;
    printf("The value pointed by pointer is %d",*ptr);
    printf("The value of ptr is %u",ptr);
    return 0;
}