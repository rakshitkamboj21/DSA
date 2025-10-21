#include<iostream>
#include<vector>
#include<list>
using namespace std;
class graph
{
    int v;
    list<int>* l;
    public:
    graph(int v)
    {
        this->v=v;
        l=new list<int>[v];
    }
    void addEdge(int u,int v)
    {
        l[u].push_back(v);
    }
    bool iscycledirdfs(int src,vector<bool> &vis,vector<bool> &recPath)
    {
        vis[src]=true;
        recPath[src]=true;
        list<int>neigh=l[src];
        for(int v:l[src])
        {
            if(!vis[v])
            {
                if(iscycledirdfs(v,vis,recPath))
                {
                    return true;
                }
            }
            else if(recPath[v])
            {
                return true;
            }
        }
        recPath[src]=false;
        return false;
    }
    bool iscycle()
    {
        vector<bool>vis(v,false);
        vector<bool>recPath(v,false);
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {
                if(iscycledirdfs(i,vis,recPath))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    graph g(4);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,0);
    cout<<g.iscycle()<<endl;
    return 0;
}
