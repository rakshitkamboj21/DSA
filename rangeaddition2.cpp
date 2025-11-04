#include<iostream>
#include<vector>
using namespace std;

int maxcount(int m,int n,vector<vector<int>> &op)
{
    if(op.empty())
    {
        return m*n;
    }
    int minA=m;
    int minB=n;
    for(auto &ops:op)
    {
        minA=min(minA,ops[0]);
        minB=min(minB,ops[1]);
    }
    return minA*minB;
}

int main()
{
    int m,n;
    cout<<"enter the dimensions of the matrix : "<<endl;
    cin>>m>>n;
    int k;
    cout<<"enter the number of operations : "<<endl;
    cin>>k;
    vector<vector<int>> op;
    cout<<"enter the operations : "<<endl;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        op.push_back({a,b});
    }
    int result=maxcount(m,n,op);
    cout<<"the maximum count of elements with maximum value is : "<<result<<endl;
    return 0;
}