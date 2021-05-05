//  Write a program in C to store n numbers in an array and print the elements using pointers.  Also compute the sum of all elements of that array using pointers.

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the limit of numbers: ");
	scanf("%d",&n);
	int a[n],i,sum=0;
	
    printf("\n Enter the numbers one by one: ");
	for(i=0;i<n;++i) {
        scanf("%d",&a[i]);
    }
	
	int *ptr;
	ptr=a;
	printf("The elements of array are: \n");
	while(ptr<=&a[n-1])
	{
        printf("%d ",*ptr);
        ptr++;
	}
	printf("\n");
	ptr=a;
	
	for(i=0;i<n;++i)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("The sum is: %d \n",sum);
	
	return 0;	
}