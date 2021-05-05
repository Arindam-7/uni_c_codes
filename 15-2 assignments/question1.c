// Write a program in C to reverse the 
// contents of the elements of an integer array.

#include<stdio.h>

int main() {
    int n, i, start, end, temp;
    printf("\n Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\n Enter the elements of the array: \n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    start = 0;
    end = n - 1;

    while (start < end) 
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(i=0; i<n; i++) {
        printf("%d , ", arr[i]);
    }

    printf("\n");

    return 0;
}