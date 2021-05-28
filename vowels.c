#include<stdio.h>

int main(){
    int i;
    char user_char,comapared_char;
    char vowels[5] = {'a','e','i','o','u'};
    printf("Enter the character \n");
    scanf("%c",&user_char);
    for(i=0;i<sizeof(vowels);i++){
        if(user_char == vowels[i]){
            comapared_char = user_char;
        }
    }
    if(comapared_char == user_char){
        printf("The character entered by user is %c and its a vowel",comapared_char);
    }
    else{
        printf("The character entered by user is %c and its not a vowel",user_char);
    }
}