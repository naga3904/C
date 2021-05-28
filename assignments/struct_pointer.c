#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    int salary;
};

int main(){
    struct employee e[5];
    //we can use pointers here to point to each element
    struct employee *ptr;
    ptr = &e[0];

    for (int i = 0; i < 5; i++)
    {
        printf("enter id and salary : ");
        scanf("%d %d",&e[i].id,&e[i].salary);
    }
    printf("---------------");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",ptr->id);
        printf("%d",ptr->salary);//this is how u use arrow operator to point
        //you can also use (*ptr).code this way also to get the same result as ptr->code
        ptr++;
    }
    
    return 0;
}