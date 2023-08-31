//4.	Write a Program for deletion of an element from the specified location from an Array.
#include <stdio.h>
int delete(int a[], int n, int e)
{
    int j;
    for (j=e; j<n; j++)
        a[j] = a[j+1];
    return 1;
}
void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    int e;
    printf("Enter index to delete: ");
    scanf("%d",&e);
    n--;
    delete(a,n,e);
    printf("Array status:\n");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
