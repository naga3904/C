//write a program to calculate the sum of first n natural numbers using while for and do-while loop
#include<stdio.h>

int main(){
    int number1;
    int number2;
    int number3;
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    printf("Enter the range of natural numbers => ");
    scanf("%d %d %d",&number1,&number2,&number3);
    while(number1>0){
        result1 = result1+number1;
        number1--;
    }
    for(int i=0;i<=number2;i++){
        result2 = result2+i;
    }
    do{
        result3 = result3+number3;
        number3--;
    }while(number3>0);
    printf("%d\n",result1);
    printf("%d\n",result2);
    printf("%d\n",result3);
    return 0;
}