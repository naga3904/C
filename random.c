#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//in order to generate the random number we have rand and srand function in C. srand is used to seed the random number
//seeding means its just like giving the range for rand function to generate the number between the range
//in python its a one function... its like random(0,3) means it generates the numbers between 0 and 3
int main(){
    int number;
    int NO_OF_GUESSES = 5;
    int ATTEMPTS = 1;
    int GUESSED_NUMBER;
    srand(time(0));
    //this generates the random number between 1 to 20
    number = rand()%20+1;
    printf("WELCOME TO GUESS THE NUMBER GAME\n");
    printf("---------------------------------\n");
    printf("PLEASE CHOOSE WISELY YOU HAVE 5 CHANCES TO GUESS THE NUMBER\n");
    printf("------------------------------------------------------------\n");
    printf("THE NUMBER RANGES BETWEEN 0 TO 20\n");
    printf("----------------------------------\n");
    while(NO_OF_GUESSES){
        printf("Enter the number => \n");
        scanf("%d",&GUESSED_NUMBER);
        if(number>GUESSED_NUMBER){
            printf("THE NUMBER IS GREATER THAN YOU GUESS\n");
            printf("-------------------------------------\n");
        }
        else if(number<GUESSED_NUMBER){
            printf("HE NUMBER IS SMALLER THAN YOU GUESS\n");
            printf("-------------------------------------\n");
        }
        else if(number == GUESSED_NUMBER){
            printf("YOU GUESSED IT RIGHT!\n");
            printf("---------------------\n");
            printf("YOU GUESSED IN %d ATTEMPTS\n",ATTEMPTS);
            printf("--------------------------\n");
            break;
        }
        NO_OF_GUESSES--;
        ATTEMPTS++;
        printf("YOU HAVE %d GUESSES LEFT\n",NO_OF_GUESSES);
        printf("--------------------------\n");
        if(NO_OF_GUESSES == 0){
            printf("YOU EXHAUSTED ALL THE LIMITS\n");
            printf("-----------------------------\n");
        }
    }
    return 0;
}