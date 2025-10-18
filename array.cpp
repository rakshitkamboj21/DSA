#include<iostream>
#include<climits>
using namespace std ;
int linearsearch(int arr[],int n,int target)
{ 
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
           return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,11,4,5,7};
    int target=5;
    int n=7;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            sum+=arr[i];
        }
    }
    cout<<linearsearch(arr,n,target)<<endl;
    cout<<"sum of number from 1 to n divisible by 3 is : "<<sum<<endl;
    int maxvalue=INT_MIN;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>maxvalue)
        {
            maxvalue=arr[i];
        }
    }
    cout<<"maximumvalue is : "<<maxvalue<<endl;
}