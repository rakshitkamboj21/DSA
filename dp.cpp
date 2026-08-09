#include<iostream>
#include<vector>
using namespace std;

int fabonacciDP(int n,vector<int>& f)
{
    if(n==1||n==2)
    {
        return n;
    }
    if(f[n]!=-1)
    {
        return f[n];
    }
    return f[n]=fabonacciDP(n-1,f)+fabonacciDP(n-2,f);
}

int main()
{
    int n=6;
    vector<int>f(n+1,-1);
    cout<<fabonacciDP(n,f);
    return 0;
}