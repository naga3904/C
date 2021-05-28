#include<stdio.h>
#include<stdlib.h>
int main()
{
    //here char stores 1bit data so we specify the brackets to  store all the bits
    //char name[] = "John";
    char* name = "John";
    int age = 23;
    printf("My name is %s and iam %d years old",name,age);
    name = "Tejas";
    age = 33;
    printf("My name is %s and iam %d years old",name,age);
    return 0;
}