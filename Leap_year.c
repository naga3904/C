#include<stdio.h>

int main(){
    int year;
    printf("Enter the year to check : ");
    scanf("%d",&year);
    if(year%4 == 0){
        if(year%100 != 0 ){
            printf("It is a leap year!");
        }
        else{
            printf("its not leap year");
        }
    }
    else if(year%400 == 0){
        printf("Its a leap year");
    }
    else{
        printf("It is not a leap year!");
    }
}