//6.    Reverse an array using pointer
#include <stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void main()
{
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    for (i=0; i<n/2; i++)
        swap(&a[i],&a[n-i-1]);
    printf("Reversed Array\n");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
