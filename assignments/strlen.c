//customised string length function
#include<stdio.h>

int main(){
    int number=0;
    char string[50];
    printf("Enter the string : ");
    scanf("%[^\n]s",&string);
    printf("%s\n",string);
    while(1){
        number++;
        if(string[number]=='\0'){
            break;
        }
    }
    printf("%d",number);
    return 0;
}