#include<stdio.h>

int main(){
    int a;
    int num = 0;
    printf("Enter the number please => ");
    scanf("%d",&a);
    printf("The natural numbers in range of %d is\n",a);
    do{
        printf("%d\n",num);
        num++;
    }while(num<=a);
}