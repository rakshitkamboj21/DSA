#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximumprofit(vector<int> nums)
{
    int maxprofit=0,bestbuy=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]>bestbuy)
        {
            maxprofit=max(maxprofit,nums[i]-bestbuy);
        }
        bestbuy=min(bestbuy,nums[i]);
    }
    return maxprofit;
}
int profit(vector<int>nums)
{
      int max=0;
      for(int i=1;i<nums.size();i++)
      {
        if(nums[i]>nums[i-1])
        {
            max+=nums[i]-nums[i-1];
        }
    }
     return max;
}
pair<int,int>pairsum(int arr[],int n,int target)
{
 for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
              if(arr[i]+arr[j]==target)
              {
                    return {i,j};
              }
        }
    }
    return {-1,-1};
}
int main()
{  
    vector <int> nums={7,1,5,3,6,4};
    int arr[] = {2, 4, 6, 8, 10};
    int n=5;
    int target=16;
    cout<<"maximum profit is :"<<maximumprofit(nums)<<endl;
    cout<<"profit is  : "<<profit(nums)<<endl;
    pair<int,int>result=pairsum(arr,n,target);
    cout<<"indices : "<<result.first<<" "<<result.second<<endl;
    return 0;
}