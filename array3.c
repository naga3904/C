#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr = marks;//if we supply the array of marks to pointer the pointer points to the address of first element in the array
    //we can also manually point it to 0th element &marks[0]
    for(int i=0;i<4;i++){
        printf("Enter the marks %dth student\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++){
        printf("Marks scored by student %d is %d",i+1,marks[i]);
    }
    return 0;
}