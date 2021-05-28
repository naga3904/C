# include<stdio.h>
#include<string.h>

void slice(char *str,int m,int n){
    int j=0;
    for(int i=m;i<=n;i++){
        str[j] = str[i];
        j++;
    }
    str[j] = '\0';//adding this at the end is very important because if we dont add it we wil get some garbage value
}
//we can also do this using while loop

int main(){
    char str[50];
    int m,n;
    printf("Enter the string\n");
    scanf("%[^\n]s",&str);
    printf("Enter the start value\n");
    scanf("%d",&m);
    printf("Enter the end value\n");
    scanf("%d",&n);
    slice(str,m,n);
    printf("%s",str);
    return 0;
}