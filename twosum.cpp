#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;
vector<int>twosum(vector<int> &arr,int tar)
{
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {
        int first=arr[i];
        int sec=tar-first;
        if(m.find(sec)!=m.end())
        {
             
               ans.push_back(m[sec]);
               ans.push_back(i);
               break;
            }
            m[first]=i;
        }
       return ans;
    }       
// finding duplicates and missing value 
  vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid)
    {
          int n=grid.size();
          unordered_set<int>s;
          int a,b;
          vector<int>ans1;
          int expsum=0,actualsum=0;
          for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
                actualsum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end())
                {
                    a=grid[i][j];
                    ans1.push_back(a);
                }
                s.insert(grid[i][j]);
            }
          }
          expsum=(n*n) *(n*n+1)/2;
          b=expsum+a-actualsum;
          ans1.push_back(b);
          return ans1;
    }    
// three sum 
vector<vector<int>>threesum(vector<int>& nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1,k=n-1;
        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0)
            {
                j++;
            }
            else if(sum>0)
            {
                k--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++,k--;
                while(j<k && nums[j]==nums[j-1]) j++;
            }
        }

    }
    return ans;
}    
int main()
{
    vector<int>arr={2,3,5,7,9,15};
    int tar=9;
    vector<vector<int>>grid={{9,1,7},{8,9,2},{3,4,6}};
    vector<int>nums={-1, 0, 1, 2, -1, -4};
    vector<int>result=findMissingAndRepeatedValues(grid);
    cout<<"the repated number is : " <<result[0]<<" and missing number is : "<<result[1]<<endl;
    vector<int>output=twosum(arr,tar);
    for(int val:output)
    {
        cout<<val<<" ";
    }
    vector<vector<int>>display=threesum(nums);
    for (auto triplet : display) {
    for (int num : triplet) {
        cout << num << " ";
    }
    cout << endl;
}
}    
