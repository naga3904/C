//Print reverse natural number
#include<stdio.h>

int main(){
    int a;
    int j = 0;
    int skip = 5;
    printf("Enter the number => ");
    scanf("%d",&a);
    for( int i=a ; i>0 ; --i ){
        printf("The Number is %d\n",i);
    }
    return 0;
}

//break and continue statement are 