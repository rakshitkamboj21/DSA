#include<iostream>
#include<list>
#include<vector>
#include<stack>
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
    }
    void dfs(int src,vector<bool> &vis,stack<int>&s)
    {
        vis[src]=true;
        for(int v:l[src])
        {
            if(!vis[v])
            {
                dfs(v,vis,s);
            }
        }
        s.push(src);
    }
    int topsort()
    {
        stack<int>s;
        vector<bool>vis(v,false);
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,s);
            }
        }
        while(s.size()>0)
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    
};
int main()
{
    graph g(6);
    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,2);
    g.topsort();
    return 0;

}
