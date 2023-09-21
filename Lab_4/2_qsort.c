#include <stdio.h>
int partition(int a[], int p, int r)
{
    int i = p-1;
    int x = a[r],j;
    for (j=p; j<r; j++)
    {
        if (a[j] <= x)
        {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    //swap(a[i+1],a[r]);
    int t = a[i+1];
    a[i+1] = a[r];
    a[r] = t;
    return i+1;
}
void qsort(int a[], int p, int r)
{
    if (p>=r)
        return;
    int q = partition(a,p,r);
    qsort(a,p,q-1);
    qsort(a,q+1,r);
}
void main()
{
    int n,i;
    printf("No of elements: ");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    qsort(a,0,n);
    printf("Sorted Array: ");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
