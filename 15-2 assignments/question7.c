// Write a C program which accepts a matrix and prints its transpose.

#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the rows and coloumns of matrix respectively: \n");
    scanf("%d %d",&r,&c);

    int a[r][c], tra[c][r];
    printf("Enter the elements of matrix: \n");

    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j) 
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (i= 0; i<r; ++i)
    {
        for (j= 0; j<c; ++j)
        {
            tra[j][i] = a[i][j];
        }
    }

    printf("The original matrix is:\n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }

    printf("\n The transpose of matrix is: \n");
    for(i=0;i<c;++i)
    {
        for(j=0;j<r;++j)
        printf("%d ",tra[i][j]);
        printf("\n");
    }
    
    return 0;
}