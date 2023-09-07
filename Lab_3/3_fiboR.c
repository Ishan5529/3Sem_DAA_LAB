//3.	Write a program to generate Fibonacci series using recursive function.
#include <stdio.h>
int fibo(int n)
{
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}
void main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int i;
    for (i=0; i<n; i++)
        printf("%d  ",fibo(i));
}
