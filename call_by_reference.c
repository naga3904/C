//call by reference
#include<stdio.h>

int wrong_swap(int a,int b);
int swap(int *a,int *b);

int main(){
    int a;
    int b;
    printf("Enter the value of a => ");
    scanf("%d",&a);
    printf("Enter the value of b => ");
    scanf("%d",&b);
    // wrong_swap(a,b);//here in this function the logic is correct and we can also print out the result which we can do inside this function
    //but the value of a and b in main() remains same so if i want to swap the values in main then i have to use swap function that is a example o call by reference
    swap(&a,&b);
    printf("The swapped value of a and b are %d and %d",a,b);
    return 0;
}

int wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    // we cannot return multiple values in c but fortunately we can use arrays structs or pointers to achive this  
}

int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}