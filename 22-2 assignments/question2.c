// A positive integer is entered through the keyboard, write a C function to find the binary equivalent of this number using recursion.



#include<stdio.h>

int dec_to_bin(int n)
{
	if(n==0){
		return 0;
	}
	else{
		return ((n%2)+10*(dec_to_bin(n/2)));
	}
}

int main()
{
	int n;
	printf("Enter the integer: ");
	scanf("%d",&n);
	printf("The binary equivalent is: %d", dec_to_bin(n));
	
return 0;	
}