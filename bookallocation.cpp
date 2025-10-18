#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
bool isvalid(vector<int>arr,int n,int m,int maxallowedpages)
{
    int student=1,pages=0;
    for(int i=0;i<n;i++)
    
    {
        if(arr[i]>maxallowedpages)

        {
            return -1;
        }
        if(pages+arr[i]<=maxallowedpages)
        {
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    return student>m ? false:true;

}
int allocatebook(vector <int> &arr,int n,int m)

{
    if(m>n)
    {
        return -1;
    }
      int ans=-1;
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum+=arr[i];
      }
      int st=0,end=sum;
      while(st<=end)
      {
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid))

        {
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
      }
      return ans;
}

// painter partion problem 

bool ispossible(vector<int> &arr,int n,int m,int maxallowedtime)
{ 
    int painter=1,time=0;
      for(int i=0;i<n;i++)
      {
        if(time+arr[i]<=maxallowedtime)
        {
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
      }
      return painter<=m ? true:false;
}
int mintimetopaint(vector<int> &arr,int n,int m)
{
    int sum=0,maxvalue=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxvalue=max(maxvalue,arr[i]);
    }
    int st=maxvalue,end=sum,ans=-1;
    while(st<=end)

    { 
        int mid=st+(end-st)/2;
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
//  Agrresive cow problem 
bool iscorrect(vector<int> &arr,int n,int c,int maxallowedistance)
{ 
    int cows=1,lasstallpos=arr[0];
       for(int i=0;i<n;i++)
       {
        if( arr[i]-lasstallpos>=maxallowedistance)
        {
                cows++;
                lasstallpos=arr[i];
        }
        if(cows==c)
        {
            return true;
        }
       }
       return false;
}
int getdistance(vector<int> &arr,int n,int c)
{
    sort(arr.begin(),arr.end());
    int st=1,end=arr[n-1]-arr[0];
    int ans=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(iscorrect(arr,n,c,mid))
    {
           ans=mid;
           st=mid+1;
    }
    else{
            end=mid-1;
    }

    }
    return ans;

}
int main()
{
    vector<int>arr={40,30,10,20};
    int n=4,m=2;
    int c=3;
    cout<<allocatebook(arr,n,m)<<endl;
    cout<<mintimetopaint(arr,n,m)<<endl;
    cout<<getdistance(arr,n,c)<<endl;
}
