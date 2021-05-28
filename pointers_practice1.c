//to check wether the adress of i remains same
#include<stdio.h>

int func(int i);

int main(){
    int i;
    printf("The address of i in main function is %u\n",&i);
    func(i);
    return 0;
}

int func(int i){
    printf("The address of i in func is %u",&i);
}

//answer is NO