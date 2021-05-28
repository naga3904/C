#include<stdio.h>

int main(){
    int age;
    char name[20];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your age : ");
    scanf("%d",&age);
    (age<18) ? printf("You are immature!") : printf("You are mature!");//conditional operation using ternary operator
    return 0;
}