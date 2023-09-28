//2.	Building a min-heap from an unsorted array and implement the heap sort algorithm.
#include <stdio.h>
void swap(int a[], int x, int y)
{
    int t = a[x];
    a[x] = a[y];
    a[y] = t;
}
void minHeapify(int a[], int r, int n)
{
    int left = 2*r + 1;
    int right = 2*r + 2;
    int small=r;
    if (left < n && a[left] < a[small])
        small = left;
    if (right < n && a[right] < a[small])
        small = right;
    if (small != r)
    {
        swap(a, small, r);
        minHeapify(a, small, n);
    }
}

void buildHeap(int a[], int n)
{
    int i;
    for (i=n/2 -1; i>=0; i--)
        minHeapify(a, i, n);
}

void hSort(int a[], int n)
{
    int i, t;
    buildHeap(a,n);
    for (i=n-1; i>=0; i--)
    {
        swap(a, i, 0);
        minHeapify(a, 0, i);
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
