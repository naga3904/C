#include<stdio.h>

int main(){
    float tax=0,income;
    printf("Enter your income\n");
    scanf("%f",&income);
    //i was dumb while writing this program because it asked me to calculate tax between 2 figures. instead of writing 
    //less than or equal to operator i used equal to operator which only works if the income is equal to both the figures iam soooooo dumb
    if(income>250000 && income<=500000){
        tax = tax + 0.05*(income);
    }
    else if(income>500000 && income<=1000000){
        tax = tax + 0.20 * (income);
    }    
    else if(income > 1000000){
        tax = tax + 0.30 * (income);
    }

    printf("%f",tax);
    return 0;
}
