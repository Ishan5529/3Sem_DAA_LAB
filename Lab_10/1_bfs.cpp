//1. Write a program to implement Breadth First Search (BFS) graph traversal methods.
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    vector<vector<int> > edge;
    vector <int> ex;
    int v;
    graph(int v)
    {
        this->v = v;
    }
    void addedge(int s, int d, int w)
    {
        ex.push_back(s);
        ex.push_back(d);
        ex.push_back(w);
        edge.push_back(ex);
        ex.clear();
    }
    void disp()
    {
        int i,w,x,y;
        ex.push_back(-1);
        ex.push_back(-1);
        ex.push_back(-1);
        edge.push_back(ex);
        vector<int> edg;
        cout<<"No. of vertices: "<<v<<endl<<endl;
        cout<<"Edges: "<<endl;
        for (i=0; i>=0; i++)
        {
            if (edge[i][0] == -1)
                break;
			w = edge[i][0];
			x = edge[i][1];
			y = edge[i][2];
			cout<<"S = "<<w<<" D = "<<x<<" W = "<<y<<endl;
        }
        edge.pop_back();
        ex.clear();
    }
    int* adj(int e, int v)
    {
        int* ad = new int[v+1];
        int i,w,x,y,j=0;
        ex.push_back(-1);
        ex.push_back(-1);
        ex.push_back(-1);
        edge.push_back(ex);
        vector<int> edg;
        for (i=0; i>=0; i++)
        {
            if (edge[i][0] == -1)
                break;
			w = edge[i][0];
			x = edge[i][1];
            if (w == e)
            {
                ad[j] = x;
                j++;
            }
            else if (x == e)
            {
                ad[j] = w;
                j++;
            }
        }
        edge.pop_back();
        ex.clear();
        ad[j] = -1;
        return ad;
    }
};

class Queue
{
public:
    int *q;
    int f,r;
    Queue(int v)
    {
        q = new int[v];
        f = 0;
        r = 0;
    }
    void nq(int x)
    {
        q[r] = x;
        r = r + 1;
    }
    int dq()
    {
        if (r == f)
            return -1;
        int t = q[r - 1];
        r = r - 1;
        return t;
    }
    int emp()
    {
        if (r == f)
            return 0;
        return 1;
    }
};

class BFS
{
public:
    int *col, *p, *d;
    BFS(int n)
    {
        col = new int[n];
        p = new int[n];
        d = new int[n];
    }
    void bsearch(graph g, int v, int e)
    {
        int i,j;
        for (i=0; i<v; i++)
        {
            col[i] = 0;
            d[i] = INT_MAX;
            p[i] = -1;
        }
        col[e] = 1;
        d[e] = 0;
        p[e] = -1;
        Queue qu(v);
        qu.nq(e);
        while (qu.emp())
        {
            i = qu.dq();
            int* ad = g.adj(i,v);
            for (j=0; j>=0; j++)
            {
                if (ad[j] == -1)
                    break;
                if (col[ad[j]] == 0)
                {
                    col[ad[j]] == 1;
                    d[ad[j]] = d[i] + 1;
                    p[ad[j]] = i;
                    qu.nq(ad[j]);
                }
                /*if (col[ad[j]] == 1)
                {
                    if ((d[i] + 1) < d[ad[j]])
                    {
                        d[ad[j]] = d[i] + 1;
                        p[ad[j]] = i;
                        qu.nq(ad[j]);
                    }
                }*/
            }
            col[i] = 2;
        }

        cout<<"BFS Results:\n";
        cout<<"Vertice   Parent   Distance    Color\n";
        for (i=0; i<v; i++)
        {
            cout<<"   "<<i<<"     "<<p[i]<<"      "<<d[i]<<"     "<<col[i]<<endl;
        }
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
    graph g(n);
    for (i=0; i<e; i++)
    {
        cin>>s>>d>>w;
        g.addedge(s,d,w);
    }
    g.disp();
    BFS t(n);
    t.bsearch(g,n,0);
    return 0;
}
