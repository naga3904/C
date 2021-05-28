//prograam to calculate factorial of given number!
#include<stdio.h>

int main(){
    int number;
    long result = 1;
    printf("Enter the factorial number => ");
    scanf("%d",&number);
    int i = number;
    // for(i=1;i<=number;i++){
    //     result = result*i;
    // }
    while(number>0){
        result = result*number;
        number--;
    }
    printf("The factorial of number %d is %ld",number,result);
    return 0;
} 