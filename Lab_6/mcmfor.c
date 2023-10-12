//1. Write a program to Implement Matrix Chain Multiplication. (WRITE THIS)
#include <stdio.h>
long long dp[100][100];
long long MCM(int p[], int i, int j)
{
	if (i == j)
		return 0;
	if (dp[i][j] != -1)
		return dp[i][j];
    int k;
    long long q, min;
	for (k = i; k < j; k++)
	{
        q = MCM(p, i, k) + MCM(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        if (k == i)
            dp[i][j] = q;
		if (q < dp[i][j])
            dp[i][j] = q;
	}
	return dp[i][j];
}
int main()
{
    int n, i, j;
    printf("Enter number of matrices: ");
    scanf("%d",&n);
    int m[n];
    for (i=0; i<n; i++)
        scanf("%d",&m[i]);
	for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            dp[i][j] = -1;
	printf("\nMCM = %ld", MCM(m, 1, n-1));
}
