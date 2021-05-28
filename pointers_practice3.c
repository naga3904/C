#include<stdio.h>

int average(int a,int b,int *sum,int *avg);

int main(){
    int a,b;
    int sum=0;
    int avg=0;
    printf("Enter the values of a and b => ");
    scanf("%d %d",&a,&b);
    printf("The value of sum aand average before the function is %d and %d\n",sum,avg);
    average(a,b,&sum,&avg);
    printf("The value of sum aand average after the function is %d and %d",sum,avg);
    return 0;
}

int average(int a, int b, int *sum,int *avg){
    *sum = a + b;
    *avg = (a+b)/2; 
}