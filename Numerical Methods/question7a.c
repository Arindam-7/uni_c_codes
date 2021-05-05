#include<stdio.h>
#include<stdlib.h>
float fun(float x,float y)
{
    float f;
    f=2*x*y;
    return f;
}
int main()
{
    float a,b,x,y,h,t,k, prev, next, err;
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("\n  x\t  y\t error\n");
    while(x<=t)
    {
        k=h*fun(x,y);
        prev = y;
        y=y+k;
        next = y;
        x=x+h;
        err = prev - next;
        printf("%0.3f\t%0.3f\t%0.3f\n",x,y, fabs(err));
    }
    return 0;
}