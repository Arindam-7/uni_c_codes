// Write a C program which dynamically allocates memory for two matrices, orders of which is given by the user, and reads the values of elements of the matrices from the user. The program creates a third matrix which is obtained by multiplying the two input matrices. Your program should check for conformity of multiplication of the two matrices given by the user.

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
// 	int r1,r2,c1,c2,i,j,k;

// 	printf("Enter the no. of rows and coloumns for first matrix: \n ");
// 	scanf("%d %d",&r1,&c1);
// 	printf("Enter the no. of rows and coloumns for second matrix: \n ");
// 	scanf("%d %d",&r2,&c2);
	
// 	if(r2!=c1)
// 	{
// 		printf("Matrices are not compatible to be multiplied! \n");
// 		return 0;
// 	}
	
// 	int **mat1 = (int**)calloc(r1,sizeof(int*));  //dynamically initializing 
// 	for(i=0;i<r1;i++) 
//     mat1[i]=(int*)calloc(c1,sizeof(int));

// 	int **mat2 =(int**)calloc(r2,sizeof(int*));
// 	for(i=0;i<r2;i++)   
//     mat2[i]=(int*)calloc(c2,sizeof(int));
    
//     int **mat3=(int**)calloc(r1,sizeof(int*));
//  	for(i=0;i<r1;i++)
//     mat3[i]=(int*)calloc(c2,sizeof(int));

// 	printf("Enter the values of 1st matrix: \n");
// 	for(i=0;i<r1;i++)
// 	{
// 		for(j=0;j<c1;j++)
// 		scanf("%d",&mat1[i][j]);
// 	}
	
// 	printf("Enter the values of 2nd matrix: \n");
// 	for(i=0;i<r2;i++)
// 	{
// 		for(j=0;j<c2;j++)
// 		scanf("%d",&mat2[i][j]);
// 	}
	
// 	for(i=0;i<r1;i++)  //multiplying the matrix
// 	{
//         for(j=0;j<c2;j++)
// 		{
//                 mat3[i][j]=0;
//                 for(k=0;k<c1;k++)
//                     mat3[i][j]+= mat1[i][k]*mat2[k][j];
// 		}
// 	}
	
// 	printf("The matrix after multiplication is :\n");
// 	for(i=0;i<r1;++i)
// 	{
// 		for(j=0;j<c2;++j)
// 		printf("%d ",mat3[i][j]);
	
// 		printf(" \n");
// 	}
	
// 	return 0;
// }

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

    // memory allocation 
    arr=(int **)malloc(row * sizeof(int *));
    arr1=(int **)malloc(row1 * sizeof(int *));
    arr2=(int **)malloc(row * sizeof(int*));

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