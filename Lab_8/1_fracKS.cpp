//1.	Write a program to find solution for Fractional knapsack problem using greedy algorithm.
#include <bits/stdc++.h>
using namespace std;

struct Item
{
	int profit, weight;
};
static bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.profit / (double)a.weight;
	double r2 = (double)b.profit / (double)b.weight;
	return r1 > r2;
}

double fracKS(int W, struct Item item[], int N)
{
	sort(item, item + N, cmp);
	double profit = 0.0;
	for (int i = 0; i < N; i++)
    {
		if (item[i].weight <= W)
		{
			W -= item[i].weight;
			profit += item[i].profit;
		}
		else
		{
			profit += item[i].profit * ((double)W / (double)item[i].weight);
			break;
		}
	}
	return profit;
}
int main()
{
	int n,w,i;
    cout<<"Total Elements: ";
    cin>>n;
    struct Item item[n];
    cout<<"Max Weight: ";
    cin>>w;
    cout<<"Enter profit followed by weight: "<<endl;
    for (i=0; i<n; i++)
    {
        cin>>item[i].profit;
        cin>>item[i].weight;
    }
	cout << fracKS(w, item, n);
	return 0;
}
