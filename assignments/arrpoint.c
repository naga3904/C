#include<stdio.h>

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int *ptr;
//     ptr = arr;
//     if(*ptr+2 == arr[2])
//         printf("The numbers are true %d",*ptr+2);
//     else
//         printf("The numbers are false");
//     return 0;
// }

int main(){
    int number,result;
    int array[10];
    printf("Enter the number of choice : ");
    scanf("%d",&number);
    for(int i=1;i<=sizeof(array)/sizeof(int);i++){
        result = number*i;
        array[i-1] = result;
    }
    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",number,i+1,array[i]);
    }
    return 0;
}