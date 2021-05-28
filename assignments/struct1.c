#include<stdio.h>
#include<string.h>
//here you define a struct aa custom data type
struct employee
{
    int emp_code;
    char name[20];
    float salary;
};//here semicolon is important

int main(){
    struct employee e[5];
    //here you use that struct custom datatype
        // struct employee e1;
        // e1.emp_code = 1;
        // // e1.name = "naga"; --> this method wont work therefore we use strcpy
        // strcpy(e1.name,"Nagabhushan");
        // e1.salary = 2000.5;

        // printf("%s\n",e1.name);
        // printf("%d\n",e1.emp_code);
        // printf("%f\n",e1.salary);
    //the above struct was for 1 employee

    //let us create a array of employees
    for(int i=0;i<5;i++){
        scanf("%d",&e[i].emp_code);
        scanf("%[^\n]s",&e[i].name);
        scanf("%f",&e[i].salary);
    }

    printf("The details of 5 employees are : ")
    for(int i=0;i<5;i++){
        printf("%d",e[i].emp_code);
        printf("%s",e[i].name);
        printf("%f",e[i].salary);
    }
}
