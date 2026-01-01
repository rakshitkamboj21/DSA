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
    }

    void topsort()
    {
        vector<int>res;
        vector<int>indegree(v,0);
        for(int u=0;u<v;u++)
        {
            for(int v:l[u])
            {
                indegree[v]++;
            }
        }
        queue<int>q;
        for(int i=0;i<v;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(q.size()>0)
        {
            int curr=q.front();
            q.pop();
            res.push_back(curr);
            for(int v:l[curr])
            {
                 indegree[v]--;
                 if(indegree[v]==0)
                 {
                    q.push(v);

                 }
            }

        }
        for(int val:res)
        {
            cout<<val<<" ";
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
