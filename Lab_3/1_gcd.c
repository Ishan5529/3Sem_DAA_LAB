//1.	Find the GCD of two numbers using recursion.
#include <stdio.h>
int min(int a, int b)
{
    if (a>b)
        return b;
    return a;
}
int gcdf(int a, int b)
{
    int m = min(a,b);
    int ma = a+b - m;
    int r = ma % m;
    if (r == 0)
        return m;
    ma = m;
    m = r;
    gcdf(ma,m);
}
void main()
{
    int a,b,gcd;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    gcd = gcdf(a,b);
    printf("GCD = %d",gcd);
}
