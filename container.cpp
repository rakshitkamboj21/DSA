#include<iostream>
#include<vector>
using namespace std;
int maxarea(vector<int> &nums)
{
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            int width=j-i;
            int ht=min(nums[i],nums[j]);
            int area=width*ht;
            ans=max(ans,area);
        }
    }
    return ans;
}
//  optimized solution 
int container(vector<int> &nums)
{
      int ans=0;
        int lp=0,rp=nums.size()-1;
        while(lp<rp)
        {
            int width=rp-lp;
            int ht=min(nums[lp],nums[rp]);
            int area=width*ht;
            ans=max(ans,area);
            if(nums[lp]<nums[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
   }
        
        return ans;
}
int main()
{
    vector <int>nums={1,8,6,2,5,4,8,3,7};
    cout<<"maximum area of container is : "<<container(nums)<<endl;
    cout<<" maximum water in container is : "<<maxarea(nums);
    return 0;
}
