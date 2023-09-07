//4.	Write a program to read an integer number and print the reverse of that number using recursion.
#include <stdio.h>
void rev(int n, int *r)
{
    if (n==0)
        return;
    int d = n % 10;
    *r = (*r) * 10 + d;
    rev(n/10, r);
}
void main()
{
    int n,rn=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    rev(n,&rn);
    printf("Reverse = %d",rn);
}
