#include<stdio.h>

int main(){
    int number;
    int multiplier1 = 1;
    int multiplier2 = 10;
    printf("Enter the number => ");
    scanf("%d",&number);
    while(multiplier1<=10){
        int product = number*multiplier1; 
        printf("%d x %d = %d\n",number,multiplier1,product);
        multiplier1++;
    }
    printf("\n");
    while(multiplier2>0){
        int product_reverse = number * multiplier2;
        printf("%d x %d = %d\n",number,multiplier2,product_reverse);
        multiplier2--;
    }
    return 0;
}