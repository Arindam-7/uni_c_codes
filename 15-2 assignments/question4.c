// Write a program to find the range of a 
// set of integers entered by the user. 
// Range is the difference between the 
// smallest and biggest number in the list.

#include<stdio.h>
int main()
{	
	int n,i;
	printf("Enter the number of elements to be inputed: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);

	int max=0,min=2147483647;
	
	for(i=0;i<n;++i)
	{
		if(a[i]>max){	
			max=a[i];
		}
		
		if(a[i]<min){     
			min=a[i];
		}
	}
	int range=max-min;
	printf("The Range is: %d",range);	
	return 0; 
}