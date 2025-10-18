#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target)
{
     int start=0,end=n-1;
     while(start<=end)
     {
        int mid=(start+end)/2;
        if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else{
        return mid;
        
     }
}
return -1;
}
// recursive method
int recursivebinarysearch(int arr[],int n,int target,int start,int end)
{
     if(start<=end)
     {
        int mid=start+(end-start)/2;
         if(target>arr[mid])

         {
            return recursivebinarysearch(arr, n, target, mid+1 ,end);
         }
         else if(target<arr[mid])

         {
            return recursivebinarysearch(arr, n, target, start ,mid-1);
         }
         else{
            return mid;
         }

     }
     return -1;
}
// serach in rotated sorted 
 int search(int A[],int n, int target) {
        int start=0,end=n-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;

        if(target==A[mid])
        {
            return mid;
        }
        if(A[start]<=A[mid])
        {
            if(A[start]<=target && target<=A[mid])
           
           {
               end=mid-1;
           }
           else

           {
             start=mid+1;
           }

        }  
        else

        {
            if(A[mid]<=target && target<=A[end])

            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }

        }     
        
       return -1; 
      }      
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int target =5;
    int A[]={4,5,6,7,0,1,2};
    cout<<search(A, n, target)<<endl;
    if(binarysearch(arr,n,target)!=-1)
{
   cout<<"element found ";
}   
else
{
    cout<<"element not found ";
}

}
