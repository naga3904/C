#include<stdio.h>

int main(){
    float celcius;
    printf("Enter the celcius value : ");
    scanf("%f",&celcius);
    float farhenite = (celcius*9/5)+32;
    printf("The value of celcius in farhenite is => %f",farhenite);
    return 0;
}