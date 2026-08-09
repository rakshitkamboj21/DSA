#include<iostream>
#include<vector>
using namespace std;
int mincost(vector<int>&height)
{
    int n=height.size();
    if(n==1) return 0;
    int prev1=0;
    int prev2=abs(height[1]-height[0]);
    int result=prev2;
    for(int i=2;i<n;i++)
    {
        int result=min(prev2+abs(height[i]-height[i-1]), prev1+abs(height[i]-height[i-2]));
        prev1=prev2;
        prev2=result;
    }
    return prev2;
}

int main()
{
    vector<int> height={30,20,50,10,40};
    cout<<mincost(height)<<endl;
    return 0;
}