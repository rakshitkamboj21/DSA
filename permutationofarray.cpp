#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std ;
void permutation(vector<int> &nums)
{
    int pvt=-1;
    int n=nums.size();
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            pvt=i;
            break;
        }
    }
    if(pvt==-1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i=n-1;i>pvt;i--)
    {
        if(nums[i]>nums[pvt])
        {
           swap(nums[i],nums[pvt]);
           break;
        }
    }
    int i=pvt+1,j=n-1;
    while(i<=j)
    {
        swap(nums[i++],nums[j--]);
    }
}
void print(vector<int>&nums)
{
    for(int i=0;i<nums.size();i++)
    {
       cout<<" "<<nums[i]<<endl;
    }
}
int peakindex(vector<int> &nums)
{
    int start=1,end=nums.size()-2;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])
        {
            return mid;
        }
        else if(nums[mid-1]<nums[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={1,2,3,5,4};
    int arr[]={1,2,3,-7,5,6};
    int n=6,currsum=0,maxsum=INT_MIN;
    cout<<peakindex(nums)<<endl;
    permutation(nums);
    print(nums);
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0)
        {
            currsum=0;
        }
    }
    cout<<maxsum;
}
