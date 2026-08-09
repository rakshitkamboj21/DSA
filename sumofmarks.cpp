#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int passcount=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
           int marks;
           cin>>marks;
           sum+=marks;   
        }
        if(sum/m>=50)
        {
            passcount++;
        }
     
    }  
    cout<<passcount;
}