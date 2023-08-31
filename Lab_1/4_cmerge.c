#include <stdio.h>
void merge(int a[], int b[], int c[], int n, int m)
{
    int i=0,j=0,k=0;
    while (i<n || j<m)
    {
        if (a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i<n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j<m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}
void main()
{
    int n,m,i;
    printf("Enter size of both array: ");
    scanf("%d%d",&n,&m);
    int a[n],b[m],c[m+n];
    printf("Enter 1st array: ");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd array: ");
    for (i=0; i<m; i++)
        scanf("%d",&b[i]);
    merge(a,b,c,n,m);
    for (i=0; i<(m+n);i++)
        printf("%d  ",c[i]);
}
