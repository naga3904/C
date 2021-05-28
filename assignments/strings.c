#include<stdio.h>
#include<stdio.h>

//ok so let us see all possible things about strings here
int main(){
    //1. all strings will have a null character '\0' at the end to denote the end of the string
    char str[6] = {'N','a','g','a','b','\0'};
    for(int i=0;i<6;i++){
        printf("%c",str[i]);
    }
    //2.convinient way is
    char str2[] ="Hello world";
    printf("%s\n",str2);
    //3. using character pointer
    char *ptr = "Harry potter";
    printf("%s\n",ptr);

    //inputing strings
    char str3[40];
    printf("Enter the name");
    scanf("%s",str3);
    printf("%s\n",str3);//problem with this method is that if it encounters a space between strings it will terminate

    //inorder to reduce the above limitation we use gets and puts
    // char str4[40];
    // printf("Enter the name");
    // scanf("%[^\n]%*c", str4);
    // return 0;

    // we can also use gets and fgets
    //while aassigning the char with new input we cannot work it out with ptr[] but we can work it out with *ptr
    //eg
    // char ptr[] = "Harry potter";
    // ptr = "shubham";
    // printf("%s",ptr);//this is not possible

    char *blah = "Haarry potter";
    blah = "SHubham";
    printf("%s",blah);//this type of reassignment is possible
}