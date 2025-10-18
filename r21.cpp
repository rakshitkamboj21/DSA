#include<iostream>
#include<vector>
using namespace std;
int buyandsellstock(vector<int> &arr)
{
    int maxvalue=0,bestbuy=arr[0];
    for(int i=0;i<arr.size();i++)
    {
         if(arr[i]>bestbuy)
         {
            maxvalue=max(maxvalue,arr[i]-bestbuy);
         }
         bestbuy=min(bestbuy,arr[i]);
    }
    return maxvalue;
}
int main()
{
    vector<int>arr={7, 10, 1, 3, 6, 9, 2};
    cout<<buyandsellstock(arr);
    return 0;
}