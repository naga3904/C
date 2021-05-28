#include<stdio.h>

int main(){
    int a;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a>0){
        int mod = a % 10;
        sum = sum+mod;
        a = a/10;
    }
    printf("%d",sum);
    return 0;
}