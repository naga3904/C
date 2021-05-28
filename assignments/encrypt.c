#include<stdio.h>
#include<string.h>

//encrypt the msg
void encrypt(char *str){
    int n = strlen(str);
    for(int i=0;i<n;i++){
        str[i] = str[i]+1;
    }
}

//decrypt the msg
void decrypt(char *str){
    int n = strlen(str);
    for(int i=0;i<n;i++){
        str[i] = str[i]-1;
    }
}
//first let us get the ascii value of character
int main(){
    char str[50];
    printf("Enter the sentence \n");
    scanf("%[^\n]s",&str);
    encrypt(str);
    printf("%s\n",str);
    decrypt(str);
    printf("%s\n",str);
    return 0;
}