#include <stdio.h>
void sort(int a[], int n)
{
    int i,j,t;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
void main()
{
    int n,i,e;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,n);
    printf("Sorted Array: ");
    for (i=0; i<n; i++)
        printf("%d  ", a[i]);
    printf("\nElement to search: ");
    scanf("%d",&e);
    int u=0, l=n, m,c=0;
    while (u!=l)
    {
        m=(u+l)/2;
        if (a[m] == e)
        {
            printf("Element found in %d\n",m);
            c++;
            break;
        }
        else if (a[m] > e)
            l = m;
        else
            u = m;
    }
    if (c==0)
        printf("Element not found");
}
