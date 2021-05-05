#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fact(int n)      //Calculating the factorial
{ 
    int i,fac = 1; 
    for (i = 2; i <= n; i++) 
        fac *= i; 
    return fac; 
}

void Lagrange(float x0, int n)
{ 
 float x[]={1,2,3,4},y[]={1,8,27,64},a,s=1,t=1,k=0;
    int i,j;
    
    
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(x0-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\n\n The value of f(2.5) is: %f",k);
     
}

float u_cal(float u, int n) 
{  int i;
    float temp = u; 
    for (i = 1; i < n; i++) 
        temp = temp * (u - i); 
    return temp; 
} 

void New_FD(int n)
{
  float x[] = { 1,2,3,4 }; 
      int i,j;
    
    float y[n][n]; 
    y[0][0] = 1; 
    y[1][0] = 8;
    y[2][0] = 27;
    y[3][0] = 64;
  
    
    for (i = 1; i < n; i++) { 
        for (j = 0; j < n - i; j++) 
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1]; 
    } 
  
  
    
    float value = 2.5; 
  

    float sum = y[0][0]; 
    float u = (value - x[0]) / (x[1] - x[0]); 
    for (i = 1; i < n; i++) { 
        sum = sum + (u_cal(u, i) * y[0][i]) / fact(i); 
    } 
 printf("The value at 2.5 is : %f \n",sum);
}

void New_BD(int n)
{ float x[10],y[10][10],sum,p=2.5,u,temp;
   int i,j,k=0,f,m;
  x[0]=1; x[1]=2; x[2]=3; x[4]=3;
  y[0][0]=1; y[0][1]=8; y[0][2]=27; y[0][3]=64; 
 
  for(i=1;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
     y[i][j]=y[i-1][j]-y[i-1][j-1];
    }
  }
  i=0;
  do
  {
   if(x[i]<p && p<x[i+1])
    k=1;
   else
    i++;
  }while(k != 1);
  f=i+1;
  u=(p-x[f])/(x[f]-x[f-1]);
  //printf("\n\n u = %.3f ",u);

  n=n-i+1;
  sum=0;
  for(i=0;i<n;i++)
  {
   temp=1;
   for(j=0;j<i;j++)
   {
    temp = temp * (u + j);
   }
    m=fact(i);
    sum = sum + temp*(y[i][f]/m);
  }
  printf("\n\n f(%.2f) = %f \n",p,sum);
}


int main()
{
 int opt;
 while(1)
 {
 printf("\n1.Lagrange's Formula \n2.Newton's Forward Difference formula \n3.Newton's Backward Difference formula \n4.Exit ");
 scanf("%d",&opt);

  switch(opt)
  {
   case 1: 
     Lagrange(2.5,4);
     break;
   case 2: 
     New_FD(4); 
     break;
   case 3: 
     New_BD(4);
     break;
   case 4:
    return 0;
  }
 }
 return 0;
}