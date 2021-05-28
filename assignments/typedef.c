#include<stdio.h>

//here in this example we will see the use of typedef keyword which is used to give alias name for struct
//so that we dont have to write struct Employee everywhere when i have to refer to structure datatype
typedef struct Employee{
    int id;
    char name[20];
    int salary;
} emp;

int main(){
    emp e[5];
    printf("Enter the details of 5 employees : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %d",&e[i].id,&e[i].name,&e[i].salary);
    }
    for(int i=0;i<5;i++){
        printf("Employee id: %d\nEmployee name: %s\nEmployee salary:%d\n",e[i].id,e[i].name,e[i].salary);
        printf("---------\n");
    }
    return 0;
}