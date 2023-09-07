//5.	Write a program to find sum of digits of a number using Recursive Function.
#include <stdio.h>
void sum(int n, int *s)
{
    if (n==0)
        return;
    int d = n % 10;
    *s = (*s) + d;
    sum(n/10, s);
}
void main()
{
    int n,summ=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,&summ);
    printf("Sum = %d",summ);
}
