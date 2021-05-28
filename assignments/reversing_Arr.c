#include<stdio.h>

int arr_reverse(int *ptr,int n);

int main(){
    int arr[10];
    int n=10;
    int *ptr;
    ptr = arr;
    printf("Enter the elements of the array : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    arr_reverse(ptr,n);
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

int arr_reverse(int *ptr,int n){
    int temp;
    //here we made n/2 because if we pass n then it will rereverse and come back to its original format
    for(int i=0;i<(int)n/2;i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
}