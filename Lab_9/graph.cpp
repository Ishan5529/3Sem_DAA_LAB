//Q1.  WAP to input a graph
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
    return 0;
}

/*input
0 1 1
0 2 5
2 3 6
3 1 2
3 4 4
1 4 3*/
