// Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these functions to develop a function which returns a value 1 if the point (x, y) lies inside the triangle ABC, otherwise a value 0. 

#include<stdio.h>
#include<math.h>

float roundoff(float var)
{  
    float value = floor(100 * var) / 100;
    return (float)value;
} 

float dist(float x1,float y1,float x2,float y2)
{
	float dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return dist;
}

float area(float x1,float y1,float x2,float y2,float x3,float y3)
{
	float a,b,c,area, s;
	a=dist(x1,y1,x2,y2);
	b=dist(x2,y2,x3,y3);
	c=dist(x1,y1,x3,y3);
	
    s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}

void check(float x4,float y4, float x1,float y1,float x2,float y2,float x3,float y3)
{	float ar1,ar2,ar3,total;
	total=roundoff(area(x1,y1,x2,y2,x3,y3));
	ar1=roundoff(area(x4,y4,x2,y2,x3,y3));
	ar2=roundoff(area(x1,y1,x4,y4,x3,y3));
	ar3=roundoff(area(x1,y1,x2,y2,x4,y4));
	
	if((ar1+ar2+ar3)==total)
	printf("1 \n");
	else
	printf("0 \n");
}

int main()
{
	float x1,x2,x3,x4,y1,y2,y3,y4, ar = 0;
	printf("Enter the coordinates of the first point: \n");
	scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of the second point: \n");
	scanf("%f %f",&x2,&y2);
    printf("Enter the coordinates of the third point: \n");
	scanf("%f %f",&x3,&y3);
	
	ar=area(x1,y1,x2,y2,x3,y3);
	printf("The area is: %.2f \n",ar);
	
	printf("\n Enter the coordinates of any point to check if it is inside or outside the triangle: ");
	scanf("%f",&x4,&y4);
	check(x4,y4,x1,y1,x2,y2,x3,y3);
	return 0;
}