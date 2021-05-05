#include<stdio.h>
#include<math.h>

float f(float x)
{
    return(1/(1+pow(x,2)));
}

void trapezoidal(float xn, float x0) {
    float h,s;
    int i,n;
    puts("Enter no. of subintervals");
    scanf ("%d", &n);
    h = (xn-x0)/n;
    s = f(x0)+f(xn);
    for (i=1;i<=n-1;i++)
    s += 2*f(x0+i*h);
    printf ("Value of integral is % 6.4f\n", (h/2)*s);
}

void simpson(float xn, float x0){
    float h,s;
    int i,n;
    puts("Enter no. of subintervals");
    scanf("%d", &n);
    h = (xn-x0)/n;
    s = f(x0)+f(xn)+4*f(x0+h);
    for (i=3;i<=n-1;i+=2)
    s += 4*f(x0+i*h)+2*f(x0+(i-1)*h);
    printf("Value of integral is %6.4f\n", (h/3)*s);
}


int main()
{
    int lower, upper;
    printf("\n Enter lower limit: ");
    scanf("%d", &lower);
    printf("\n Enter upper limit: ");
    scanf("%d", &upper);

    printf("\n Integration using trapezoidal method: \n");
    trapezoidal(upper, lower);
    printf("\n Integration using simpson's 1/3rd method: \n");
    simpson(upper, lower);

    return 0;
}




