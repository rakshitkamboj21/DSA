#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int st,int end)
{
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quicksort(vector<int> &arr,int st,int end)
{
    if(st<end)
    {
        int pividx=partition(arr,st,end);
        quicksort(arr,st,pividx-1);
        quicksort(arr,pividx+1,end);

    }
}
int main()
{
    vector<int>arr={12,8,18,5,3,10,15,7};
    quicksort(arr,0,arr.size()-1);
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;

}