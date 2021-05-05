//    Write a C program which accepts number obtained by five students in five subjects. Print the total marks obtained by all the students. Also determine the highest total marks.


#include<stdio.h>

int main()
{
	int i,j;
	int a[5][5], tmar[5]={0};

	printf("Enter the marks of subjects: ");
	for(i=0;i<5;++i)
	{
		for(j=0;j<5;++j)
		{
			scanf("%d",&a[i][j]);
			tmar[i]+=a[i][j];
		}
	}
	int max=tmar[0];
	for(i=0;i<5;++i)
	{
		printf("Total marks of student no:%d is : %d \n",i+1,tmar[i]);
		if(tmar[i]>=max){
			max=tmar[i];
		}
	}

	printf("The highest marks is: %d",max);
	return 0;
}