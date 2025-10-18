#include<iostream>
#include<vector>
#include<list>
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
   void dfs(int i,int j,vector<vector<bool>>&visited,vector<vector<char>>&grid,int n,int m)
   {
     
    if(i<0||j<0||i>=n||j>=m||visited[i][j]||grid[i][j]=='0')
    {
        return;
    }
         visited[i][j]=true;
         dfs(i-1,j,visited,grid,n,m);
         dfs(i,j+1,visited,grid,n,m);
         dfs(i+1,j,visited,grid,n,m);
         dfs(i,j-1,visited,grid,n,m);
   }
   int numIsLands(vector<vector<char>>& grid)
   {
      int islands=0;
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<bool>>visited(n,vector<bool>(m,false));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1' && !visited[i][j])
            {
                islands++;
                dfs(i,j,visited,grid,n,m);
            }
        }
      }
      return islands;
   }
};
int main()
{
    graph g(0);
    vector<vector<char>>grid={
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };
    cout<<"number of islands is :"<<g.numIsLands(grid)<<endl;
    return 0;

}


