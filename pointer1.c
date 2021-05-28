#include<stdio.h>

int main(){
    int i = 32;
    int *j = &i; // this staores the address of i in pointer j
    printf("The value of i is %d\n",i);
    printf("The address of i is %u\n",&i);
    printf("The value stored in j is %d\n",*j);
    printf("The address stored in j is %d\n",j);
    printf("The address of j is %u",&j);//j's address is different than the address stored in it
    return 0;
}