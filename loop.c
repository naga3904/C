//write a program to print natural numbers from 10 to 20. when intial loop counter is initialized to zero
#include<stdio.h>

int main(){
    int a=0;
    int i=20;
    while(a<=20){
        if(a>=10){
        printf("The number is %d\n",a);
        }
        a++;
    }
    //do while loop executes the statements inside do for first time and then executes in loop
    do{
        printf("Hello sulemaga!\n");
        i--;
    }while(i>0);
}