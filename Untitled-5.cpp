#include<iostream>
#include<vector>
#include<list>
using namespace std;
class graph{
   int v;
   list<int> *l;
   public:
   graph(int v)
   {
    this->v=v;
    l=new list<int>[v];
   }
   void addedge(int u,int v)
   {
       l[u].push_back(v);
       l[v].push_back(u);

   }
   int islands(vector<vector<int>> & grid)
   {
      int island=0;
      int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    island++;
                    dfs(grid,i,j);
                }
            }
        }
        return island;
   }
   
}