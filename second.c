//area of the circle and cylinder
#include<stdio.h>
int main(){
    int radius;
    float pi;
    float height;
    printf("Enter the radius of a circle : ");
    scanf("%d",&radius);
    printf("Enter the pi value : ");
    scanf("%f",&pi);
    float circle_area = radius*radius*pi;
    printf("The area of this circle is %f",circle_area);
    printf("\nEnter the height of a cylinder : ");
    scanf("%f",&height);
    float cylinder_area = (2*pi*radius*height)+(2*pi*radius*radius);
    printf("The area of cylinder is %f",cylinder_area); 
    return 0;
}