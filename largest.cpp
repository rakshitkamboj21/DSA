#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>arr={1,2,3,4,5};
   int largest=arr[0];
    for(int i=1;i<arr.size();i++)
    {
         if(arr[i]>largest)
         {
              largest=arr[i];
         }
    }
    cout<<"largest element in the array is "<<largest<<endl;
    return 0;
}