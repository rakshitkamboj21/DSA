#include<iostream>
using namespace std;
bool isperfectsquare(int num)
{
    long long int left=1;
    long long int right=num;
    while(left<=right)
    {
        long long mid=left+(right-left)/2;
        long long square=mid*mid;
        if(square==num)
        {
            return true;
        }
        else if(square<num)
        {
            left=mid+1;
        }
        else

        {
            right=mid-1;
        }
    
    }
    return false;
}
int main()
{
    int num;
    cout<<"enter the number : "<<endl;
    cin>>num;
    if(isperfectsquare(num))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}    
