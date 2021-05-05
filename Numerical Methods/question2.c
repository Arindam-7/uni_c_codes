#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void gaussElimination();
void jacobi();
void pivotingGauss();



int main(){
    int c;
    printf("\n1.Using Gauss-Elimniation method");
    printf("\n2.Using Gauss Elimination with pivoting method");
    printf("\n3.Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &c);

    switch(c){
        case 1:
            gaussElimination();
            break;
        case 2: 
            pivotingGauss();
            break;
        case 3: 
            exit(0);
        default:
            printf("\n Wrong choice. Enter between 1 to 3.");
    }

    return 0;

}

void gaussElimination(){
     int i,j,k,n;
  float A[20][20],c,x[10],sum;
  printf("\nEnter the order of matrix: ");
  scanf("%d",&n);
  printf("\nEnter the elements of augmented matrix row-wise:\n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=(n+1); j++)
    {
      printf("A[%d][%d] : ", i,j);
      scanf("%f",&A[i][j]);
    }
  }

  /* loop for the generation of upper triangular matrix*/
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n; j++)
    {
      if(j>i)
      {
        c=A[j][i]/A[i][i];
        for(k=1; k<=n+1; k++)
        {
          A[j][k]=A[j][k]-c*A[i][k];
        }
      }
    }
  }

  /* Upper Traingular matrix */
  printf("\nThe Upper Triangular matrix is: \n\n");
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=(n+1); j++)
    {
      printf("%f ",A[i][j]);
    }
    printf("\n");
  }

  /* initializing x[i] to zeros */
  for(i=1; i<=n; i++)
  {
    x[i]=0;
  }

  /* loop is for backward substitution */
  printf("\nAfter applying Backward Substitution: \n");
  for(i=n; i>=1; i--)
  {
    sum=0;
    for(j=1; j<=n; j++)
    {
      if(i!=j)
        sum=sum+A[i][j]*x[j];
    }
    x[i]=(A[i][n+1]-sum)/A[i][i];
  }

  printf("\nThe solution is: \n");
  for(i=1; i<=n; i++)
  {
    printf("\nx%d=%f\t",i,x[i]);
    /* x1, x2, x3 are the required solutions */
  }
}


void pivotingGauss(){
    int i, j, p, n;
    double a[10][10], b, c, d, x1, x2, x3, temp, max;
    printf("\n Enter the size of matrix: ");
    scanf("%d", &n);
    printf("\n Enter the matrix: ");
    for(i=0; i<n; i++){
        for(j=0; j<=n; j++){
            scanf("%lf", &a[i][j]);
        }
    }

    max = a[0][0];
    if(a[1][0] >= max){
        p = 1;
    }
    if(a[2][0] >= max){
        p = 2;
    }
    for(j=0; j<=n; j++){
        temp = a[p][j];
        a[p][j] = a[0][j];
        a[0][j] = temp;
    }

    printf("\n After pivoting: ");
    for(i=0; i<n; i++){
        for(j=0; j<=n; j++){
            printf("%lf", a[i][j]);
        }
        printf("\n\n");
    }

    b = a[1][0];
    c = a[2][0];
    d = a[0][0];
    for(j=0; j<=i; j++){
        a[1][j] = (a[1][j] - ((b/(double)d)*a[0][j]));
        a[2][j] = (a[2][j] - ((b/(double)d)*a[0][j]));
    }
    b = a[2][1];
    d = a[1][1];

    for(j=0; j<=n; j++){
        a[2][j] = (a[2][j] - ((b/(double)d)*a[1][j]));
    }

    printf("\n After Elimination: ");
    for(i=0; i<n; i++){
        for(j=0; j<=n; j++){
            printf("%lf", a[i][j]);
        }
        printf("\n\n");
    }

    x3 = (a[2][3]/(double)a[2][2]);
    x2 = ((a[1][3] - (a[1][2]*x3)) / (double)a[1][1]);
    x1 = ((a[0][3] - (a[0][1]*x2) - (a[0][2]*x3))/(double)a[0][0]);

    printf("\n The solution are: ");
    printf("x1 = %lf\n\n", x1);
    printf("x2 = %lf\n\n", x2);
    printf("x3 = %lf\n\n", x3);
}