#include<stdio.h>


int main(){
        int f_mat[2][3];
        int o_mat[3][2];
        printf("Enter the values of f_mat :\n");
        for(int i=0;i<2;i++){
            for (int j=0; j<3; j++)
            {
                scanf("%d",&f_mat[i][j]);
            }
        }
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<2; j++)
            {
                o_mat[i][j] = f_mat[j][i];
            }
            
        }
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<2; j++)
            {
                printf("%d\n",o_mat[i][j]);
            }
            
        }
    return 0;
}