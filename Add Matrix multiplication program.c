#include <stdio.h>
int main() {
    int i,j,row,col;
    printf("enter the value of row and col:");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the matrix A\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the matrix B\n");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           printf("the output is");
           printf("%d\n",c[i][j]);
        }
    }
    
}
