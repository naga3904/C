#include<stdio.h>

int posneg(int arr[10]){
    int number = 0;
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            number++;
        }
    }
    return number;
}

int main(){
    int arr[10];
    int result;
    printf("Enter the elements of array => \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    result = posneg(arr);
    printf("The count of positive integer in the array is %d",result);
    return 0;
}
