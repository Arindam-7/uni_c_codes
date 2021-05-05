// Write a C program which accepts ten integers 
// from user and prints them in ascending order. 
// Use array to store the integers.

#include <stdio.h>

int main()
{
   int i, j, k, temp, length = 10, number[20];

   printf("\nEnter the numbers: ");
   for (i = 0; i < length; ++i) {
        scanf("%d", &number[i]);
   } 
   
   // sorting by ascending order
   for (j = 0; j < length; j++)
   {
      for (k = j + 1; k < length; k++)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }

   printf("Numbers in ascending order:\n");
   for (i = 0; i < length; ++i) {
        printf("%d , ", number[i]);
   }

   printf("\n");

   return 0;
}
