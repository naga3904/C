#include<stdio.h>

int main(){
    int multiply[3][10];
    int num[3];
    printf("Enter the number => ");
    for(int i=0;i<3;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            multiply[i][j] = num[i]*(j+1);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d x %d = %d\n",num[i],j+1,multiply[i][j]);
        }
        printf("---------------------------\n");
    }
}