#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,row1,col1,q,r,sum,p;
    int **arr, **arr1, **arr2;
    int i,j, k;

    printf("Enter the number of rows and columns of first matrix \n");
    scanf("%d%d",&row,&col);

    printf("enter the number of rows and columns of 2nd matrix \n");
    scanf("%d%d",&row1,&col1);

    // memory allocation of rows
    arr=(int **)malloc(row * sizeof(int *));
    arr1=(int **)malloc(row1 * sizeof(int *));
    arr2=(int **)malloc(row * sizeof(int*));
    // column 
    for(i=0; i<row; i++) {
        arr[i] = (int *)malloc(sizeof(int) * col);
    }

    for(i=0; i<row1; i++) {
        arr1[i] = (int *)malloc(sizeof(int) * col1);
    }

    for(i=0; i<row; i++) {
        arr2[i] = (int *)malloc(sizeof(int) * col1);
    }


    printf("enter the elements \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d", &arr[i][j]);
    }
    printf("the matrix elements are: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d", arr[i][j]);
    printf("\n");
    }

    printf("enter the elements \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        scanf("%d", &arr1[i][j]);
    }
    printf("the matrix elements are: \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        printf("%d", arr1[i][j]);
    printf("\n");
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr2[i][j] = 0;
            for(k=0;k<col1;k++){
                arr2[i][j] = arr2[i][j] + arr[i][k] * arr1[k][j];
            }
            
        }
    }

if(col==row1)
{
    printf("the matrices are conformable\n\n");
    printf("the product matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col1;j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
} else {
    printf("the matrices are not conformable");
}
    return 0;
}