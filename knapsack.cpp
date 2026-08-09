#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

static bool compare(vector<int>&a,vector<int>&b)
{
    double a1=(double)a[0]/a[1];
    double b1=(double)b[0]/b[1];
    return a1>b1;
}
double franctionalKnapsack(vector<vector<int>>& items,int k)
{
    sort(items.begin(),items.end(),compare);
    double maxval=0.0;
    for(auto& item:items)
    {
      int val=item[0];
      int wt=item[1];

       if(wt<=k)
       {
           maxval+=val;
           k-=wt;
       }
       else
       {
         maxval+=((double)val/wt)*k;
         break;
       }

    }
    return maxval;
}
int main()
{
    vector<vector<int>> items = {{60,10},{100,20},{120,30},{80,40},{150,15}};
    int k=60;
    cout<<franctionalKnapsack(items,k);
    return 0;
}