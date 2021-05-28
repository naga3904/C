//switch statement in C
#include<stdio.h>
#include<math.h>
//remember that always the character has to be inputted first and then the rest of the data has to be inputted
int main(){
    char operator;
    int firstnum;
    int secondnum;
    int result;
    printf("Enter the operator\n");
    scanf("%c",&operator);
    printf("Enter Your firstnum");
    scanf("%d",&firstnum);
    printf("Enter the second num");
    scanf("%d",&secondnum);
    switch(operator){
        case '+':
            printf("You chose addition => \n ");
            result = firstnum+secondnum;
            printf("Addition of %d and %d is %d",firstnum,secondnum,result);
            break;
        case '-':
            printf("You chose substraction => \n ");
            if(firstnum>secondnum){
                result = firstnum-secondnum;
                printf("subtraction of %d and %d is %d",firstnum,secondnum,result);
            }
            else{
                result = secondnum-firstnum;
                printf("subtraction of %d and %d is %d",secondnum,firstnum,result);
            }
            break;
        case '*':
            printf("You chose multiplication => \n");
            result = firstnum*secondnum;
            printf("Multiplication of %d and %d is %d",firstnum,secondnum,result);
            break;
        case '/':
            printf("You chose division => \n");
            if(secondnum==0){
                printf("Division of %d and %d is infinity",firstnum,secondnum);
            }
            else{
                result = firstnum/secondnum;
                printf("Division of %d and %d is %d",firstnum,secondnum,result);
            }
            break;
        case '^':
            printf("You chose Power => \n");
            result = pow(firstnum,secondnum);
            printf("Power of %d and %d is %d",firstnum,secondnum,result);
            break;
        default:
            printf("Error! operator is incorrect!");
    }
}
