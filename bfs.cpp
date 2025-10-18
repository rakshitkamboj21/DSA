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
    void bfs()
    {
        queue<int>q;
        q.push(0);
        vector<bool>visited(v,false);
        visited[0]=true;
        while(q.size()>0)
        {
             int u=q.front();
             q.pop();
             cout<<u<<" ";
             for(int v:l[u])
             {
                if(!visited[v])
                {
                    visited[v]=true;
                    q.push(v);
                }
             }

        }
        cout<<endl;
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
    g.bfs();
    return 0;

}
