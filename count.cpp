#include<iostream>
using namespace std;
int main()
{
    int N=3;
     int count=0;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
       
        if(arr[i]>=N)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}