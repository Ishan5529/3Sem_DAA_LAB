#include <stdio.h>
void merge(int a[], int p, int q, int r)
{
    int n1 = (q-p+1), n2 = (r-q);
    int b[n1],c[n2];
    int z=p, i=0, j=0;
    for (i = 0; i < n1; i++)
        b[i] = a[p + i];
    for (j = 0; j < n2; j++)
        c[j] = a[q + 1 + j];
    i=0;j=0;z=p;
    while (i<n1 && j<n2)
    {
        if (b[i] < c[j])
        {
            a[z] = b[i];
            i++;
        }
        else
        {
            a[z] = c[j];
            j++;
        }
        z++;
    }
    while (i<n1)
    {
        a[z] = b[i];
        i++;
        z++;
    }
    while (j<n2)
    {
        a[z] = c[j];
        j++;
        z++;
    }
}
void msort(int a[], int p, int r)
{
    if (p<r)
    {
        int q = (p+r)/2;
        msort(a,p,q);
        msort(a,q+1,r);
        merge(a,p,q,r);
    }
}
void main()
{
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    msort(a,0,n);
    printf("Sorted Array: ");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
