#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr={4,5,0,1,9,0,5,0};
    int j=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<arr.size())
    {
        arr[j]=0;
        j++;
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
