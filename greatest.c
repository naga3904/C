#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the 4 numbers : \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("The numbers are => %d %d %d %d \n",a,b,c,d);
    if(a>b && a>c && a>d){
        printf("a = %d is greatest of 4 numbers",a);
    }
    else if(b>a && b>c && b>d){
        printf("b = %d is the greatest of 4 numbers",b);
    }
    else if(c>a && c>b && c>d){
        printf("c = %d is the greatest of 4 numbers",c);
    }
    else if(d>a && d>c && d>b){
        printf("d = %d is the greatest of 4 numbers",d);
    }
    return 0;
}