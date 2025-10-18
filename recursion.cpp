#include<iostream>
#include<vector>
using namespace std ;
void printnums(int n)
{
    if(n==1)
    {
       cout<<"1\n";
       return;
    }
    cout<<n<<" ";
    printnums(n-1);
}
// recursion for factorial
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n *factorial(n-1);
}
// sum of n numbers 
int sumN(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + sumN(n-1);

}
// fabonacci series 
int fabonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fabonacci(n-1)+fabonacci(n-2);
}
// print subset using recursion 
void printsubset(vector<int> &arr,vector<int> &ans,int i)
{
      if(i==arr.size())
      {
        for(int val:ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        return;
      }
      ans.push_back(arr[i]);
      printsubset(arr,ans,i+1);
      ans.pop_back();
      printsubset(arr,ans,i+1);
}


int main()
{
    vector<int>arr={1,2,3};
    vector<int>ans;
    printsubset(arr,ans,0);
    printnums(4);
    cout<<factorial(4)<<endl;
    cout<<sumN(4);
}