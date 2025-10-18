#include<iostream>
#include<list>
#include<vector>
using namespace std;
class graph 

{
    int v;
    list<int> *l;
    public:
    graph(int v)
    {
        this->v=v;
        l=new list<int>[v];
    }
    void addEdge(int u,int v)
    {
       l[u].push_back(v);
       l[v].push_back(u);
    }

    void printAdjList()
    {
        for(int i=0;i<v;i++)
        {
            cout<<i<<" : ";
            for(int neigh:l[i])
            {
                cout<<neigh<<" ";
            }   
             cout<<endl;
        }
       
    }

    void dfsHelper(int u,vector<bool>&visited)
    {
        cout<<u<<" ";
        visited[u]=true;
        for(int v:l[u])
        {
            if(!visited[v])
            {
                dfsHelper(v,visited);
            }
        }
    }
    void dfs()
    {
        int src=0;
        vector<bool>visited(v,false);
        dfsHelper(src,visited);
        cout<<endl;
    }
};


int main()
{
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.dfs();
    return 0;

}
