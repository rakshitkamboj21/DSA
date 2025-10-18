#include<iostream>
#include<vector>
using namespace std;

// buble sort

void bubblesort(int arr[],int n)
{ 
  
   for(int i=0;i<n-1;i++)

   {
    bool isswap=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            isswap=true;
        }
    }
    if(!isswap)
    {
        return;
    }
   }
}   
void printarray(int arr[],int n)
{


   for(int i=0;i<n;i++)
   {
    cout<<" "<<arr[i]<<endl;
   }
}

//selecton sort 

void selectionsort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int smallestindx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestindx])
            {
                smallestindx=j;
            }
        }
        swap(arr[i],arr[smallestindx]);

    }
}

//insertion sort 

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
//sort of array 0s,1sand 2s
void sort(vector<int> &nums)
{
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[mid],nums[low]);
            mid++,low++;
        }
        else if(nums[mid]==1)
        {
            mid++;

        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
void allow(vector<int>nums)
{
    for(int i=0;i<nums.size();i++)
    {
           cout<<" "<<nums[i];
    }
}
int main()
{
     int arr[]={4,1,5,2,3};
     int n=5;
     vector<int>nums={2,0,0,1,2};
     bubblesort(arr,n);
     selectionsort(arr,n);
     insertionsort(arr,n);
    printarray(arr,n);
    sort(nums);
    allow(nums);
}

