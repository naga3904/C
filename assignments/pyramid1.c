#include<stdio.h>
#include<math.h>

int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=rows-i;j++){
            printf("%d",j);
        }
        for(int j=i;j>=0;j--){
            printf("%d",j);
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        // for(int j=0-i;j<=i;j++){
        //     printf("%d",abs(j));
        // }
        printf("\n");
    }
    return 0;
}