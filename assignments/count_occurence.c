#include<stdio.h>


int main(){
    char str[50];
    int i=0;
    int count=0;
    char ch;
    printf("Enter the string : \n");
    scanf("%[^\n]s",&str);
    printf("Enter the character to count : ");
    scanf("%s",&ch);
    while(1){
        if(str[i]==ch){
            count++;
        }
        i++;
        if(str[i] == '\0'){
            break;//you can break the while loop this way or we can use pointer to point to the item in char list
        }
    }
    //remember 1 thing u cannot use sizeof operator on strings passed into function because it only gives the size of charaacter pointer
    printf("%d",count);
}