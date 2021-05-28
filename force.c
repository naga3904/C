//force of attraction between two bodies
#include<stdio.h>
#include <math.h>
#define GRAVITATIONAL_CONSTANT 6.67*pow(10,-11)
//in #define we dont include semicolon

float force_of_attraction(float m1,float m2,float r);

int main(){
    float m1,m2,r;
    printf("Enter the mass of body 1 in Kg's => ");
    scanf("%f",&m1);
    printf("Enter the mass of body 2 in kg's => ");
    scanf("%f",&m2);
    printf("Enter the distance between 2 bodies => ");
    scanf("%f",&r);
    printf("The force between 2 body is => %f",force_of_attraction(m1,m2,r));
    return 0;
}

float force_of_attraction(float m1,float m2,float r){
    float result = GRAVITATIONAL_CONSTANT*m1*m2/pow(r,2);
    return result;
}