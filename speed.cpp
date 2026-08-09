#include<iostream>
using namespace std;
int main()
{
    int distance,time;
    cout<<"enter the distance and time ";
    cin>> distance >> time;
    if(time>=1 && time<=60)
    {
        int speed= (distance *18)/(time * 5);
        cout<<"the speed is "<<speed;

    }
    else
    {
        cout<<"error";
    }
}