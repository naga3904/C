#include<stdio.h>

int main(){
    float P,T,R,SI;
    printf("Enter the Principle value : ");
    scanf("%f",&P);
    printf("Enter the Rate fo interest value : ");
    scanf("%f",&R);
    printf("Enter the Time Period value : ");
    scanf("%f",&T);
    SI = (P*T*R)/100;
    printf("The simple interest value is => %f",SI);
    return 0;
}

