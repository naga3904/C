#include<stdio.h>

int main(){
    int number;
    FILE *fptr;
    fptr = fopen("tables.txt","w");
    printf("Enter the number\n");
    scanf("%d",&number);
    for (int i = 1; i <=10; i++){
        fprintf(fptr,"%d x %d = %d\n",number,i+1,number*(i+1));
    }
    fclose(fptr);
    return 0;
}