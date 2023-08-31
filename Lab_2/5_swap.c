//5.	Write a program to swap value of two variables using pointer.
#include <stdio.h>
void main()
{
    int a,b,t;
    printf("Enter values: ");
    scanf("%d%d",&a,&b);
    int *p = &a;
    int *q = &b;
    t = *p;
    *p = *q;
    *q = t;
    printf("Swapped Values: %d  %d",a,b);
}
