#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int vectorsum(vector<int> &nums)
{ int sum=0;
    for(int values:nums)
    {
        sum+=values;
    }
    return sum;
}
int countUniqueElements(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            count++;
        }
    }
    return count;
}
void reversevector(vector <int> &nums)

{
    int start=0,end=nums.size()-1;
    while(start<end)
    {
        swap(nums[start],nums[end]);
        start++;
        end--;

    }

}
int main()
{  
    vector <int> nums={1,2,3,4,5};
    int n=7;
    int arr[]={1,2,3,4,5,2,3};
    int size=7;
    reversevector(nums);
    for(int i=0;i<nums.size();i++)
     {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"output of the array is : "<<countUniqueElements(arr,size)<<endl;
    cout<<"sum of elements of vector is "<<vectorsum(nums)<<endl;
    
    int maxsum=INT_MIN;
    int currsum=0;
        for(int i=0;i<n;i++)
        {
           currsum+=arr[i];
           maxsum=max(maxsum,currsum);
           if(currsum<0){

            currsum=0;
           }
        }
        cout<<"Maximum subarray sum is : "<<maxsum<<endl;
        int maxsum2=INT_MIN;
        for(int st=0;st<n;st++)
        {
            int currvalue=0;
            for(int end=st;end<n;end++)
            {
                currvalue+=arr[end];
                maxsum2=max(maxsum2,currvalue);
            }
        }
        cout<<"Maximum subarray sum using brute force is : "<<maxsum2<<endl;
    } 
