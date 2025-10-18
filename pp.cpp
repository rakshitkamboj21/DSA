#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,2,0,1,2,1};
    int n=8;
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        if(arr[i]==1)
        {
            count1++;
        }
        if(arr[i]==2)
        {
            count2++;
        }
    }
    int index=0;
    for(int i=0;i<count0;i++)
    {
        arr[index++]=0;
    }
    for(int i=0;i<count1;i++)
    {
        arr[index++]=1;
    }
    for(int i=0;i<count2;i++)
    {
        arr[index++]=2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
}