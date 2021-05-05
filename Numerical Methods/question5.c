#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{
 return sin(x); 
} 
  
float df(float x)
{
 return cos(x);
}

void fdd(float delx)
{ float x;;
 printf("\nEnter the point at which derivative is required: \n");
 scanf("%f",&x);
 float fd=(f(x+delx)-f(x))/delx;
 printf("\nThe value of f'(x) at x=%f is %f by Forward Divided Difference\n",x,fd);
 float rel_per= (fd-df(x))/df(x) ;
 printf("\nThe Relative Percentage error is: %f\n",fabs(rel_per)*100);
}

void bdd(float delx)
{ float x;
 printf("\nEnter the point at which derivative is required: \n");
 scanf("%f",&x);
 float fd=(f(x)-f(x-delx))/delx;
 printf("\nThe value of f'(x) at x=%f is %f by Backward Divided Difference\n",x,fd);
 float rel_per= (fd-df(x))/df(x) ;
 printf("\nThe Relative Percentage error is: %f\n",fabs(rel_per)*100);
}

void cdd(float delx)
{ float x;
 printf("\nEnter the point at which derivative is required: ");
 scanf("%f",&x);
 float fd=(f(x+delx)-f(x-delx))/(2*delx);
 printf("\nThe value of f'(x) at x=%f is %f by Central Divided Differecne\n",x,fd);
 float rel_per= (fd-df(x))/df(x) ;
 printf("\nThe Relative Percentage error is: %f\n",fabs(rel_per)*100);
}


int main()
{ 
 printf("\n The value of delx is: 0.1");
 fdd(0.1);
 bdd(0.1);
 cdd(0.1);
 printf("\n The value of delx is: 0.01");
 fdd(0.01);
 bdd(0.01);
 cdd(0.01);
 
 return 0;
}