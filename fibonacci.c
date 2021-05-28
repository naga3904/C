#include<stdio.h>

int main(){
    int limit;
    int firstnumber = 0;
    int secondnumber = 1;
    int result = 0;
    printf("Enter the limit => ");
    scanf("%d",&limit);
    printf("%d\n",firstnumber);
    printf("%d\n",secondnumber);
    for(int i=0;i<=limit;i++){
        result = firstnumber+secondnumber;
        printf("%d\n",result);
        firstnumber = secondnumber;
        secondnumber = result;
    }
    return 0;
}