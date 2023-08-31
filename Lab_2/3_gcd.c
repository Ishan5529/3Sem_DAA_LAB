//3.	Write a program find GCD of two numbers using Euclidean algorithm.
/*Euclidean Algorithm:
Step 1:  Let  a, b  be the two numbers
Step 2:  a mod b = R
Step 3:  Let  a = b  and  b = R
Step 4:  Repeat Steps 2 and 3 until  a mod b  is greater than 0
Step 5:  GCD = b
Step 6: Finish
*/
#include <stdio.h>
void main()
{
    int a,b,r;
    printf("Enter 2 values: ");
    scanf("%d%d",&a,&b);
    r = a%b;
    while (r)
    {
        a = b;
        b = r;
        r = a%b;
    }
    printf("GCD: %d",b);
}
