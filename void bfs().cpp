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
        for(int v:l[u])
        {
               if(!visited[v])
               {
                   visited[v]=true;
                   q.push(v);
                   
               }
        }

    }
}