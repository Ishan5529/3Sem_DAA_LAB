//2. Write a program to Implement Longest Common Subsequence.
#include <stdio.h>
int dp[100][100];
int lcs(char* X, char* Y, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m - 1] == Y[n - 1])
    {
        dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1);
        return dp[m][n];
    }
	if (dp[m][n] != -1)
		return dp[m][n];
	int q1 = lcs(X, Y, m, n - 1);
	int q2 = lcs(X, Y, m - 1, n);
	if (q1 > q2)
        dp[m][n] = q1;
    else
        dp[m][n] = q2;
	return dp[m][n];
}
int main()
{
    int m,n;
    printf("Enter string lengths: ");
    scanf("%d%d",&m,&n);
    printf("Enter 2 strings: ");
    char X[m];
	char Y[n];
    scanf("%s%s",X,Y);
	int i,j;
	for (i=0; i<m+1; i++)
        for (j=0; j<n+1; j++)
            dp[i][j] = -1;
	printf("Length of LCS is %d",lcs(X, Y, m, n));;
	return 0;
}
