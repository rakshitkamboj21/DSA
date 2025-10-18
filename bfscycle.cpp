#include<iostream>
#include<list>
#include<vector>
#include<queue>
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
bool iscycleUndirBFS(int src,vector<bool> &visited)
{
    queue<pair<int,int>>q;
    q.push({src,-1});
    visited[src]=true;
    while(q.size()>0)
    {
        int u=q.front().first;
        int par=q.front().second;
        q.pop();
       list<int>neigh=l[u];
         for(int v:neigh)
         {
            if(!visited[v])
            {
                q.push({v,u});
                visited[v]=true;
            }
            else if(v!=par)
            {
                return true;
            }
         }
        }
      return false;
    }
   
bool iscycle()
{
    vector<bool>visited(v,false);
     for(int i=0;i<v;i++)
     {
        if(!visited[i])
        {
            if (iscycleUndirBFS(i,visited))
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
    graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);
    cout<<g.iscycle()<<endl;
    return 0;

}
