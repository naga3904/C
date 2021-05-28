#include<stdio.h>

typedef struct bank_details{
    int id;
    char name[20];
    float acc_balance;
}Bank;

int main(){
    Bank b[5];
    printf("Enter the details of customers\n");
    for(int i=0;i<5;i++){
        printf("Enter id\n");
        scanf("%d",&b[i].id);
        printf("Enter the name\n");
        scanf("%s",b[i].name);
        printf("Enter the bank balance\n");
        scanf("%f",&b[i].acc_balance);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",b[i].id);
        printf("%s\t",b[i].name);
        printf("%f\n",b[i].acc_balance);
    }
    return 0;
}