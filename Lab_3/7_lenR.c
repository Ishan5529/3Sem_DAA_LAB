//7.	Write a program to calculate length of the string using recursion.
#include <stdio.h>
void length(char n[], int *s, int c)
{
    if (n[c] == '\0')
        return;
    *s = (*s) + 1;
    length(n, s, c+1);
}
void main()
{
    char n[200];
    int len=0;
    printf("Enter a String: ");
    scanf("%s",n);
    length(n, &len, 0);
    printf("Length = %d",len);
}
