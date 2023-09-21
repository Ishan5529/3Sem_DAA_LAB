#include <stdio.h>
void sort(int a[], int n)
{
    int i=0, j=0;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (a[j] > a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
}
void binSearch(int a[], int n, int x)
{
    int f=0, r=n, m, c=0;
    while (f <= r)
    {
        m = (f+r)/2;
        if (a[m] == x)
        {
            printf("Element at index: %d",m);
            c++;
            break;
        }
        else if (a[m] < x)
            f = m+1;
        else
            r = m-1;
    }
    if (c == 0)
        printf("Element not found");
}
void main()
{
    int n, x, i;
    printf("No of elements: ");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("Element to Search: ");
    scanf("%d",&x);
    binSearch(a,n,x);
}
