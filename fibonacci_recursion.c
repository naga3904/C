#include<stdio.h>

int fibonacci_recur(int limit,int a,int b);

int main(){
    int limit;
    int firstnumber = 0;
    int secondnumber = 1;
    printf("Enter the limit=> ");
    scanf("%d",&limit);
    printf("%d\n",0);
    printf("%d\n",1);
    fibonacci_recur(limit,firstnumber,secondnumber);
    return 0;
}

int fibonacci_recur(int limit,int a,int b){
    int result = 0;
    if(limit>0){
        result = a+b;
        a = b;
        b = result;
        printf("%d\n",result);
        fibonacci_recur(limit-1,a,b);
    }
}