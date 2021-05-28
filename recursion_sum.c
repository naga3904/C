//recursion for sum of n natural numbers
#include<stdio.h>

int sum(int a);

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("The sum of %d natural numbers is => %d",a,sum(a));
    return 0;
}

int sum(int a){
    if(a>0){
        return a+sum(a-1);
    }
}

//base condition to run recursive function is very important like if else statement