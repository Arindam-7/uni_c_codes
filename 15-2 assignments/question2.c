// Write a program in C to read n number 
// of values in an array. After that, count 
// the total number of duplicate elements in 
// that array. Then copy the elements except 
// the duplicate elements of that array into 
// another array and display this array in reverse order.


#include <stdio.h>

int main ()
{
  int  i, j, c = 0, k, n, t;
  printf ("Enter array size:\n ");
  scanf ("%d", &n);
  int a1[n], a2[n];
  printf("\nEnter %d Integers: \n", n);
  for (i = 0; i < n; i++)
    { 
      scanf ("%d", &a1[i]);
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (a1[i] == a1[j])
	    {
	      c++;
        break;
	    }
	}
    }


  printf ("\n duplicate elements present: %d\n", c);

  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n;)
	{
	  if (a1[j] == a1[i])
	    {
	      for (k = j; k < n; k++)
          {
            a1[k] = a1[k + 1];
          }
	      n--;
	    }
	  else
	    {
	      j++;
	    }
	}
    } 
   for(i=0; i<n; i++)
    {
        a2[i] = a1[i];
    }
    for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	    {
	      t = a2[i];
	      a2[i] = a2[j];
	      a2[j] = t;
	    }
    }

	
 
  printf ("\nThe Copied and reversed Array without duplicate element is: \n");
  for (i = 0; i <n ; i++)
    {
      printf ("%d ", a2[i]);
    }
  return 0;
}

 