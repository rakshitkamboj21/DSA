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


    bool iscycleUndirdfs(int par,int src,vector<bool> &visited){
        visited[src]=true;
        list<int>neigh=l[src];
        for(int v:neigh)
        {
            if(!visited[v])
            {
                if(iscycleUndirdfs(src,v,visited))
                {
                    return true;
                }
            }
            else if(v!=par)
                {
                    return true;
                }
            }
            return false;
        }
    bool iscycle()
    {
        vector<bool> visited(v, false);
        for(int i = 0; i < v; i++) {
            if(!visited[i]) {
                if(iscycleUndirdfs(-1, i, visited)) {
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
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
   cout<<g.iscycle()<<endl;
    return 0;

}
