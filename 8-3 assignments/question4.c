// Write a program to sort some numbers in ascending order. The numbers are to be input from a file named ‘input.txt’. The output should be written in a file named ‘output.txt’. Use bubble sort algorithm and dynamic memory allocation for implementation.

#include<stdio.h>
#include<stdlib.h>

void swap(int *, int *);
void bubbleSort(int arr[], int n);

int main(){
    FILE *ptr, *ptr2;
    int i=0;
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    // arr = (int *)malloc(10 * sizeof(int));
    ptr = fopen("input.txt", "r");
    ptr2 = fopen("output.txt", "w");
    if(ptr == NULL){
        printf("\n This file does not exist.");
    } else {
         while (fscanf(ptr, "%d", &arr[i]) == 1)
         {
             i++;
         }

        bubbleSort(arr, n);
        
        for(i=0; i<10; i++){
            fprintf(ptr2, "%d \n", arr[i]);
        }
    }
    fclose(ptr);

    return 0;
}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}