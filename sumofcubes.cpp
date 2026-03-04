// tcs nqt 26 april 2024

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of two numbers ";
    cin>>a>>b;
     int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum=sum+(i*i*i);
    }
    cout<<"the sum of the cube from "<<a<<" to "<<b<<"is :"<<sum;
    return 0;
}
