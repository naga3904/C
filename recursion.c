#include<stdio.h>

int factorial(int a);

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("The factorial of the %d is %d",a,factorial(a));
    return 0;
}

int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
//in recursion only the first return statement returns the value to main function and rest of the return operations
//just run within the recursive function