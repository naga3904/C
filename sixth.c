#include<stdio.h>

int main(){
    int number;
    int x=2,y=3,z=3,k=1;
    printf("Enter the number => ");
    scanf("%d",&number);
    if(number%97==0){
        printf("The number is divisible by 97\n");
    }
    else{
        printf("The number is not divisible\n");
    }
    float result = 3*x/y-z+k;
    printf("The result is => %f",result);
}