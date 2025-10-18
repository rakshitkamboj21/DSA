#include<iostream>
#include<vector>
using namespace std;

   int singlenumber(vector<int> &nums)
   {
    int ans=0;
    for (int value: nums)
    {
    ans^=value;
    }
return ans;
}
pair<int,int>sumofvector(vector<int> &nums,int target)
{
     int n=nums.size();
     for (int i=0;i<n;i++)
     {
        for (int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                 return {i,j}; 
            
                }
        }
     }
     return {-1,-1}; // If no such pair exists
}
int maxarray(int arr[],int size){
    int max=arr[0];
    for (int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int  reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    { 
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int sumvector(vector<int> &nums)
{
    int sum=0;
    for (int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }   
    return sum;
}   
int main()
{ 
    int size=5;
    int arr[]={1,2,3,4,5};
    vector<int> vec={1,2,3,4,5};
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"sum of array is  : "<<sumvector(vec)<<endl;
    cout<<"maximum element is : "<<maxarray(arr,size)<<endl;
    int target=5;
    vector<int>nums={1,2,5,4,5,4,2};
   pair<int, int> result = sumofvector(nums, target);
    cout << "answer is: (" << result.first << ", " << result.second << ")" << endl;
    cout<<singlenumber(nums)<<endl;
    return 0;
}