//1.	Write a program to perform Insertion sort algorithm for any given list of numbers.
//Algo/code/complexity for 1/2/3 only code and o/p for 4/5
#include <stdio.h>
void insert(int a[], int n, int e, int p)
{
    int i;
    for (i=n-2; i>=p; i--)
        a[i+1] = a[i];
    a[p] = e;
}
void main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n+1],i;
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    int e,p;
    printf("Enter element to insert and index: ");
    scanf("%d%d",&e,&p);
    n+=1;
    insert(a,n,e,p);
    printf("After Insertion\n");
    for (i=0; i<n; i++)
        printf("%d  ",a[i]);
}
