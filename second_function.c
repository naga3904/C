//calculate the area of circle 
#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the value of a side \n");
    scanf("%d",&side);
    int area = pow(side,2);
    //pow function is a double data type so if we are using it directly inside the print statement then we 
    //then we have to use the %f 
    printf("The value of the area is %d",area);
    return 0;
}