//6.	Write a program to find power of any number using recursion.
#include <stdio.h>
void pow(int n, int p, int *r)
{
    if (p==0)
        return;
    *r = (*r) * n;
    pow(n, p-1, r);
}
void main()
{
    int n, p, rn = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter Power: ");
    scanf("%d",&p);
    pow(n, p, &rn);
    printf("Output = %d",rn);
}
