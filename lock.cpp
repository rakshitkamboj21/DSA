#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>l(n);
    for(int i=0;i<n;i++)
    {
        cin>>l[i];
    }
     int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(l[i]==l[j])
            {
                continue;
            }
            if((l[i]%2)==(l[j]%2))
            {
                int cost=abs(l[i]-l[j]);
                ans=min(ans,cost);
            }
        }
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}