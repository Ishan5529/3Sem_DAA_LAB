#include <stdio.h>
void search(int a[], int e, int n)
{
    int i, c=0;
    for (i=0; i<n; i++)
        if (a[i] == e){
            printf("Element found in position: %d\n",i);
            c++;
        }
    if (c==0)
        printf("Element not found");
}
void main()
{
    int n,e,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&e);
    search(a,e,n);
}
