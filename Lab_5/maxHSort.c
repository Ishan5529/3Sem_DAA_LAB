#include <stdio.h>
void swap(int a[], int x, int y)
{
    int t = a[x];
    a[x] = a[y];
    a[y] = t;
}
void maxHeapify(int a[], int r, int n)
{
    int left = 2*r + 1;
    int right = 2*r + 2;
    int big=r;
    if (left < n && a[left] > a[big])
        big = left;
    if (right < n && a[right] > a[big])
        big = right;
    if (big != r)
    {
        /*int t = a[big];
        a[big] = a[r];
        a[r] = t;*/
        swap(a, big, r);
        maxHeapify(a, big, n);
    }
}

void buildHeap(int a[], int n)
{
    int i;
    for (i=n/2 -1; i>=0; i--)
        maxHeapify(a, i, n);
}

void hSort(int a[], int n)
{
    int i, t;
    /*for (i=n/2 -1; i>=0; i--)
        maxHeapify(a, i, n);*/
    buildHeap(a,n);
    for (i=n-1; i>=0; i--)
    {
        swap(a, i, 0);
        /*t = a[i];
        a[i] = a[0];
        a[0] = t;*/
        maxHeapify(a, 0, i);
    }
}
void main()
{
    int n, i;
    printf("No. of elements: ");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    hSort(a, n);
    printf("Sorted Array: ");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
