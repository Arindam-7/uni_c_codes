#include<stdio.h>
#include<math.h>
int main()
{
 
    int n,i;
    float a,b,x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0;
    
    printf("\n Enter number of terms :");
    scanf("%d",&n);
    printf("\n Enter the values of x:\n");
    for(i=0;i<n;i++)
        scanf(" %f",&x[i]);
 
    
    printf("\n Enter the values of y:");
    for(i=0;i<n;i++)
        scanf("%f",&y[i]);
    
    for(i=0;i<=n-1;i++)
    {
        sumx=sumx +x[i];
        sumx2=sumx2 +x[i]*x[i];
        sumy=sumy +y[i];
        sumxy=sumxy +x[i]*y[i];
 
    }
    a=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    b=((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    printf("\n\nThe line is Y=%3.3f +%3.3f X",a,b);
    return 0;
}