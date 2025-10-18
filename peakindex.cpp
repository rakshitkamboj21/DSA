// peak mountain index problem 
#include<iostream>
using namespace std;
int peakmountainindex(int arr[],int n)

{
      int start=1,end=n-2;
      while(start<=end)
      {
         int mid=start+(end-start)/2;
         if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
         {
            return mid;
         }
         else if(arr[mid-1]<arr[mid])
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
    int arr[]={1,2,3,6,5,4};
    int n=6;
    cout<<"the peak value of the mountain is at index : "<<peakmountainindex(arr,n);
    return 0;
}