#include<stdio.h>

int main(){
    int i,j;
    int num=1;
    for(i=0;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d",j+i);
        }
        for(j=0;j<=i;j++){
            printf("%d",j+i);
        }
        printf("\n");
    }
}