#include<stdio.h>

int main(){
    char c;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt","r");
    ptr2 = fopen("b.txt","w");
    c = fgetc(ptr1);
    //EOF  => END OF FILE
    while(c!=EOF){
        fprintf(ptr2,"%c",c);
        fprintf(ptr2,"%c",c);
        c = fgetc(ptr1);
    }
    return 0;
}