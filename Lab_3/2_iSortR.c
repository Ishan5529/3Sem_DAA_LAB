//2.	Write a program to perform Insertion sort algorithm for any given list of numbers using recursive function.
#include <stdio.h>
int iSort(int a[], int n)
{
    if (n <= 1)
        return;
    iSort(a, n-1);
    int last = a[n-1];
    int j = n-2;
    while (j >= 0 && a[j] > last)
    {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = last;
}
void main()
{
    int n;
    printf("No. of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    iSort(a,n);
    printf("Sorted Array:\n");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
