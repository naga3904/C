#include<stdio.h>

int main(){
    FILE *ptr; //here FILE is a built in struct
    char c;
    char sent[100];
    ptr =  fopen("blah.txt","r");
    //fgetc is used to print character by character
    fputc('k',ptr);
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);//this statement  reads next char from file and store in c then the While loop checks wether the c is EOF that is End Of File if not it will print c or it will terminate the loop
    }
    if(ptr==NULL){
        printf("This file doesnot exist in desired location\n");
    }
    else{
    fscanf(ptr,"%[^\n]s",&sent);//fscanf is used to read the file
    ptr = fopen("blah1.txt","w");
    fprintf(ptr,"%s",sent);//fprintf is used to write to file
    fclose(ptr);//closing the function is must
    }
    return 0;
}