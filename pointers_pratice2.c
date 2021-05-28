#include<stdio.h>

int multiplier(int *ptr);

int main(){
    int number;
    printf("Enter the number => ");
    scanf("%d",&number);
    printf("The number is %d",number);
    multiplier(&number);
    printf("The bumber increased by 10 is %d",number);
    return 0;
}

int multiplier(int *ptr){
    *ptr = *ptr + 10;
    //here we dont need to return any vaalue because its a call by reference and and targets 
    //the address hence it will be automatically updated
}