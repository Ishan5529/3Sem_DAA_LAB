#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    int max=a[0],min=a[0];
    for (i=0; i<n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("Max = %d\nMin = %d",max,min);
}
