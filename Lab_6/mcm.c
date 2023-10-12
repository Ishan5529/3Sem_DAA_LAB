//1. Write a program to Implement Matrix Chain Multiplication. (DON'T WRITE)
#include <stdio.h>
long long MCM(int a[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	long long min, q;
	for (k = i; k < j; k++)
	{
		q = MCM(a, i, k) + MCM(a, k + 1, j) + a[i - 1] * a[k] * a[j];
		if (k == i)
            min = q;
		if (q < min)
            min = q;
	}
	return min;
}
int main()
{
	int n, i, j;
    printf("Enter number of matrices: ");
    scanf("%d",&n);
    int m[n];
    for (i=0; i<n; i++)
        scanf("%d",&m[i]);
	printf("\nMCM = %ld", MCM(m, 1, n-1));
	return 0;
}
