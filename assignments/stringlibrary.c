#include<stdio.h>
#include<string.h>

int main(){
    char *str = "Hello world";
    char str2[20];
    //strlen gives the length of a string excluding the null character
    int a = strlen(str);
    printf("The length of string is %d\n",a);
    //used to copy the string strcpy(destination,source)
    strcpy(str2,str);
    printf("Now the str2 is given by %s\n",str2);
    //let us see concatination strcat
    strcat(str2,str);
    printf("The conactenated string is %s\n",str2);
    //comparision betweeen 2 strings using strcmp
    //it returns 0 if the strings are same and return 1 if the strings are not same 
    int val = strcmp(str2,str);
    printf("The value of val is %d\n",val);
    char name[50];
    printf("Enter your full name: ");
    scanf("%[^\n]s",name);
    printf("%s",name);
    return 0;
}