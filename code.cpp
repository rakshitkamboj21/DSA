// This program prints a rectangle of asterisks with a height of n and a width of 50.

#include<iostream>
using namespace std;
void hello()
{
    cout<<"hello world"<<endl;

}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int m=50;
        for(int j=1;j<=50;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        hello();


    }

// Q2) print factorial from t to n 

    int long factorial=1;
    cout<<"enter the value of n :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         factorial=factorial*i;
    }
    cout<<"factorial of 1 to n is : "<<factorial<<endl;
}