#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x,float y);
int main()
{
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn, prev, next;
    printf("Enter x0,y0, h, xn:");
    scanf("%f %f %f %f",&x0,&y0,&h, &xn);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\terror\n");
    while(x<xn)
    {
        prev = y;
        m1=f(x0,y0);
        m2=f((x0+h/2.0),(y0+m1*h/2.0));
        m3=f((x0+h/2.0),(y0+m2*h/2.0));
        m4=f((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
        next = y;
        printf("%f\t%f\t%f\n",x,y, (prev - next));
    }
}
float f(float x,float y)
{
    float m;
    m=(x-y)/(x+y);
    return m;
}