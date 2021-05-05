

#include<stdio.h>
#include<math.h>
float cons; 

float f(float x)
{ 
 return (x*tan(x)-cons);
}

float df(float x)
{
 return (tan(x)+x/(cos(x)*cos(x)));
}

void bisection(float a, float b,float e)   //BISECTION METHOD
{
 float c;
 while((b-a)>= e)
 {
  c=(a+b)/2;
 if(f(c)==0)
 break;
 
 else if(f(c)>0)
  b=c;
 else 
 a=c; 
 }
 printf("The root is: %f\n",c);
}

void regula_falsi(float a,float b)   //REGULA FALSI METHOD
{ int i;
 float c;
 for(i=0;i<1000000;++i)
 {
  c= (a*f(b)-b*f(a))/(f(b)-f(a)) ;
 
 if(f(c)==0)
 break;
 
 else if(f(a)*f(c)<0)
 b=c;
 else
 a=c; 
 }
 printf("The root is %f \n",c); 
 
}

void newton_raphson(float c,float e)   //NEWTON RAPHSON METHOD
{
 float h= (f(c)/df(c));
 while(fabs(h) >= e)
 {
  h=f(c)/df(c);
  
  c=c-h;
  
  if(f(c)==0)
  break;
 }
 printf("The root is: %f \n",c);
}

int main()
{
 float a,b;
 printf("Enter the value of the constant:");
 scanf("%f",&cons);
 
 float e;
 printf("Enter the tolerable error: ");
 scanf("%f",&e);
 int option,t=1;
 while(t==1)
 {
  printf("\nEnter two approximate root such that f(a).f(b)<0 \n");
 scanf("%f %f",&a,&b);
 
 if(f(a)*f(b)>=0)
 {
  printf("\nYou have not assumed correct a and b ");
  return 0;
 }
 
 printf("\n1.Bisection Method \n2.Regula Falsi Method \n3.Newton Rapshon Method \n4.Exit\n");
 scanf("%d",&option);
 
 switch(option)
 {
 
 case 1: 
   bisection(a,b,e);
   break;
 case 2: 
   regula_falsi(a,b);
   break;
 case 3: 
   newton_raphson(b,e);
   break;
 case 4: 
   return 0;
 }
 }
 
 return 0;
}