//2.	Write a program to perform Bubble sort algorithm for any given list of numbers.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int i,j,a[n];
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                a[j] += a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] -= a[j+1];
            }
        }
    }
    printf("After Sorting (Ascending Order):\n");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
