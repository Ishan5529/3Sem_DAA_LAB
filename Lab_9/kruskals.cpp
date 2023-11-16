//Q2.	WAP to implement Kruskal’s algorithm.
#include <bits/stdc++.h>
using namespace std;

class DSU
{
	int* parent;
	int* rank;
public:
	DSU(int n)
	{
		parent = new int[n];
		rank = new int[n];
		for (int i = 0; i < n; i++)
        {
			parent[i] = -1;
			rank[i] = 1;
		}
	}

	int find(int i)
	{
		if (parent[i] == -1)
			return i;
		return parent[i] = find(parent[i]);
	}

	void unite(int x, int y)
	{
		int s1 = find(x);
		int s2 = find(y);

		if (s1 != s2) {
			if (rank[s1] < rank[s2])
				parent[s1] = s2;
			else if (rank[s1] > rank[s2])
				parent[s2] = s1;
			else
			{
				parent[s2] = s1;
				rank[s1] += 1;
			}
		}
	}
};

class Graph {
	vector<vector<int> > edgelist;
	int V;
    vector<int> ex;
public:
	Graph(int V)
	{
	    this->V = V;
    }
	void addEdge(int x, int y, int w)
	{
	    ex.push_back(w);
	    ex.push_back(x);
	    ex.push_back(y);
		edgelist.push_back(ex);
		ex.clear();
	}

	void kruskals_mst()
	{
	    int i,w,x,y;
		sort(edgelist.begin(), edgelist.end());
		DSU s(V);
		ex.push_back(-1);
        ex.push_back(-1);
        ex.push_back(-1);
        edgelist.push_back(ex);
		int ans = 0;
		cout<< "Following are the edges in the constructed MST"<< endl;
		cout<<"Src    Dst    Wt."<<endl;
		cout<<"-----------------"<<endl;
		for (i=0; i>=0; i++)
        {
            if (edgelist[i][0] == -1)
                break;
			w = edgelist[i][0];
			x = edgelist[i][1];
			y = edgelist[i][2];

			if (s.find(x) != s.find(y))
            {
				s.unite(x, y);
				ans += w;
				cout<<" "<<x<<"  --  "<<y<<"  ==  "<<w<< endl;
			}
		}
		edgelist.pop_back();
        ex.clear();
		cout<<endl<< "Minimum Cost Spanning Tree: " << ans;
	}

	void disp()
    {
        int i,w,x,y;
        ex.push_back(-1);
        ex.push_back(-1);
        ex.push_back(-1);
        edgelist.push_back(ex);
        vector<int> edg;
        cout<<endl<<endl<<"No. of vertices: "<<V<<endl;
        cout<<"Edges: "<<endl;
        for (i=0; i>=0; i++)
        {
            if (edgelist[i][0] == -1)
                break;
			w = edgelist[i][0];
			x = edgelist[i][1];
			y = edgelist[i][2];
			cout<<"S = "<<x<<"   D = "<<y<<"   W = "<<w<<endl;
        }
        cout<<endl<<endl;
        edgelist.pop_back();
        ex.clear();
    }
};

int main()
{
    int n,e,s,d,w;
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>e;
    cout<<"Enter Source, Destination, Weight: "<<endl;
    int i;
    Graph g(n);
    for (i=0; i<e; i++)
    {
        cin>>s>>d>>w;
        g.addEdge(s,d,w);
    }
    g.disp();

	g.kruskals_mst();
	return 0;
}


/**********
------
OUTPUT
------
Enter number of vertices: 5
Enter number of edges: 6
Enter Source, Destination, Weight:
0 1 1
0 2 5
2 3 6
3 1 2
3 4 4
1 4 3


No. of vertices: 5
Edges:
S = 0   D = 1   W = 1
S = 0   D = 2   W = 5
S = 2   D = 3   W = 6
S = 3   D = 1   W = 2
S = 3   D = 4   W = 4
S = 1   D = 4   W = 3


Following are the edges in the constructed MST
Src    Dst    Wt.
-----------------
 0  --  1  ==  1
 3  --  1  ==  2
 1  --  4  ==  3
 0  --  2  ==  5

Minimum Cost Spanning Tree: 11
**********/
