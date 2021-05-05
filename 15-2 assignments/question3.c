// Write a menu-driven program for accepting values in two square matrix of 3x3 dimension and generate their  sum, difference and product.

#include<stdio.h>
#include<stdlib.h>
int main () 
{
	int a1[3][3], a2[3][3], i, j, k, sum[3][3], diff[3][3], mul[3][3],option;
	printf ("\nEnter elements of 1st matrix:\n");
  	for (i = 0; i < 3; i++)  
    { 
		for (j = 0; j < 3; j++)	  
		scanf ("%d", &a1[i][j]);  
	} 
	printf ("\nEnter elements of 2nd matrix:\n");
  	for (i = 0; i < 3; i++)
  	{  
		for (j = 0; j < 3; j++)
		scanf ("%d", &a2[i][j]);	    
	}
 	for (i = 0; i < 3; i++)
    { 
		for (j = 0; j < 3; j++)
		{	
			sum[i][j] = a1[i][j] + a2[i][j];
			diff[i][j] = a1[i][j] - a2[i][j];
			mul[i][j] = 0;
			for (k = 0; k < 3; k++)
	    	mul[i][j] += a1[i][k] * a2[k][j];
		}
   }
	while (1)
    {
		printf ("Enter the Option from 1.Addition \n");
		printf("2.Difference \n");
		printf("3.Product \n");
		printf("0.To Quit ");
		scanf ("%d",&option);    
		switch (option)
		{
				
			case 1:
				{
					
			printf ("\nSum of two matrices: \n");   
			for (i = 0; i < 3; ++i)
			{
				for (j = 0; j < 3; ++j)   {
			printf ("%d ", sum[i][j]);}		 		
			printf ("\n");     
			}    
			break;	  
			} 
			case 2:
				{
					
			printf ("\nDifference of two matrices: \n");
					
			for (i = 0; i < 3; ++i)
				{
					for (j = 0; j < 3; ++j) 
					
			printf ("%d ", diff[i][j]);
			printf ("\n");
			} 
			break;
				
			}
			
			case 3:
				{
					
			printf ("\nMultiplication of two matrices: \n");
					
			for (i = 0; i < 3; i++)
					{
						for (j = 0; j < 3; j++)
						{
						printf ("%d ", mul[i][j]);
						}
			printf ("\n");      
			}
					
			break;
				
			}
			case 0:
			exit (0);
			}
		} 
	return 0;
}
