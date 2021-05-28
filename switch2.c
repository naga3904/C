#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks you scored => ");
    scanf("%d",&marks);
    switch(marks/10){
        //here what we are doing is we are dividing the marks by 10 so that we get a integer value 
        //i.e if we divide 95/10 we get 9.5 but since the integer division yeilds integer in C we get 9 and that 
        //case statement gets exewcuted
        case 10:
        case 9:
            printf("You scored %d marks\n",marks);
            printf("You scored an A grade");
            break;
        case 8:
            printf("You scored %d marks\n",marks);
            printf("You scored B grade");
            break;
        case 7:
            printf("You scored %d marks\n",marks);
            printf("You scored C grade");
            break;
        case 6:
            printf("You scored %d marks\n",marks);
            printf("You scored D grade");
            break;
        case 5:
            printf("You scored %d marks\n",marks);
            printf("You scored E grade");
            break;
        case 4:
            printf("You scored %d marks\n",marks);
            printf("You scored an E- grade");
            break;
        default:
            printf("You scored %d marks\n",marks);
            printf("You failed this exam");
    }
}