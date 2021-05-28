//printing the odd number of stars
/*

*
***
*****

*/
#include<stdio.h>

int main(){
    int i,j;
    int num;
    printf("Enter the number => ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=0;j<=2*(i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}