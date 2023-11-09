//3.	Write a program to implement Activity Selection Problem.
#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
	int i, j;
	cout << "Following activities are selected" << endl;
	i = 0;
	cout << i << " ";
	for (j = 1; j < n; j++)
    {
		if (s[j] >= f[i])
		{
			cout << j << " ";
			i = j;
		}
	}
}
int main()
{
	int s[] = { 1, 2, 1, 5, 8, 6 };
	int f[] = { 3, 5, 7, 8, 9, 10 };
	int n = sizeof(s) / sizeof(s[0]);
	printMaxActivities(s, f, n);
	return 0;
}
