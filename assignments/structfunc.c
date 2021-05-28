//In this example we will see how can we define a function of type struct xyz Which returns a stuct xyz
//yes u heard me right SINCE THE STRUCT IS THE CUSTOM DATA TYPE we can create the instance of that custom data type
// eg: we create int func1() void func2() where is int and void are datatypes similarly struct here is also a customised user datatype

#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}Vector1;

Vector1 total_vector(Vector1 v1,Vector1 v2){
    Vector1 sum;
    sum.x = v1.x+v2.x;
    sum.y = v1.y+v2.y;
    return sum;
}

int main(){
    Vector1 v1,v2,sum;
    printf("Enter the x values of v1 and v2 => ");
    scanf("%d %d",&v1.x,&v2.x);
    printf("Enter the y values of v1 and v2 => ");
    scanf("%d %d",&v1.y,&v2.y);
    sum = total_vector(v1,v2);
    printf("X => %d\n",sum.x);
    printf("Y => %d\n",sum.y);
    return 0;
}