#include<stdio.h>

typedef struct employee{
    char name[20];
    int salary;
}emp;

int main(){
    emp e1,e2;
    FILE *ptr;
    ptr = fopen("a.txt","w");
    printf("Enter the e1 name\n");
    scanf("%s",&e1.name);
    printf("Enter the e2 name\n");
    scanf("%s",&e2.name);
    printf("Enter the e1 salary\n");
    scanf("%d",&e1.salary);
    printf("Enter the e2 salary\n");
    scanf("%d",&e2.salary);
    fprintf(ptr,"%s  %d\n",e1.name,e1.salary);
    fprintf(ptr,"%s  %d\n",e2.name,e2.salary);
    fclose(ptr);
    return 0;
}  