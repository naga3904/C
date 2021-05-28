#include<stdio.h>

int addition(int row,int column,int f_mat[row][column],int s_mat[row][column],int o_mat[row][column]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            o_mat[i][j] = f_mat[i][j]+s_mat[i][j];
        }   
    }
}
int subtraction(int row,int column,int f_mat[row][column],int s_mat[row][column],int o_mat[row][column]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            o_mat[i][j] = f_mat[i][j]-s_mat[i][j];
        }   
    }
}
int multiplication(int row1,int column1,int row2,int column2,int f_mat[row1][column1],int s_mat[row2][column2],int o_mat[row1][column2]){
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < column2; j++){
            o_mat[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < column2; j++){
            for(int k=0; k < column1; k++){
                o_mat[i][j] += f_mat[i][k]*s_mat[k][j]; 
            }
        }
    }
}
int transpose_mat(){
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

int main(){
    char operator;
    printf("Enter the operator : ");
    scanf("%c",&operator);
    int row1,column1,row2,column2;
    printf("Enter row1 and column1 and row2 and column2 : \n");
    scanf("%d %d %d %d",&row1,&column1,&row2,&column2);
    int f_mat[row1][column1];
    int s_mat[row2][column2];
    switch (operator)
    {
    case '+':
        if (row1==row2 && column1==column2){
            int o_mat[row1][column1];
            printf("Enter the value of first matrix : ");
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    scanf("%d",&f_mat[i][j]);
                }
            }
            printf("Enter the value of second matrix : ");
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    scanf("%d",&s_mat[i][j]);
                }
            }
            addition(row1,column1,f_mat,s_mat,o_mat);
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    printf("%d\n",o_mat[i][j]);
                }
            }
        }
        else{
            printf("no match of rows and column");
        }
        break;
    case '-':
        if (row1==row2 && column1==column2){
            printf("Enter the value of first matrix : ");
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    scanf("%d",&f_mat[i][j]);
                }
            }
            printf("Enter the value of second matrix : ");
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    scanf("%d",&s_mat[i][j]);
                }
            }
            int o_mat[row1][column1];
            subtraction(row1,column1,f_mat,s_mat,o_mat);
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    printf("%d\n",o_mat[i][j]);
                }
            }
        }
        else{
            printf("no match of rows and column");
        }
        break;
    case '*':
        if (column1==row2){
            int o_mat[row1][column2];
            printf("Enter the value of first matrix : ");
            for(int i=0;i<row1;i++){
                for(int j=0;j<column1;j++){
                    scanf("%d",&f_mat[i][j]);
                }
            }
            printf("Enter the value of second matrix : ");
            for(int i=0;i<row2;i++){
                for(int j=0;j<column2;j++){
                    scanf("%d",&s_mat[i][j]);
                }
            }
            multiplication(row1,column1,row2,column2,f_mat,s_mat,o_mat);
            for(int i=0;i<row1;i++){
                for(int j=0;j<column2;j++){
                    printf("%d\n",o_mat[i][j]);
                }
            }
        }
        else{
            printf("Matrix multiplication is not possible for this rows and columns");
        }
        break;
    case 'T':
        transpose_mat();
        break;
    default:
        printf("blah...blah....blah");
        break;
    }
    return 0;
}