#include<iostream>
using namespace std;
    int linearsearch(int arr[],int size,int target)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }
int dectobin(int decnum)
{
    int ans=0,power=1;
    while(decnum>0)
    {
        int remainder=decnum%2;
        decnum=decnum/2;
        ans+=remainder*power;
        power*=10;
    }
    return ans;
}
int reverse(int n)
{
    int reverse=0;
    while(n>0)
    {
        int remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    return reverse;
}
int sumN(int n)
{
    int digsum=0;
    while(n>0)
    
    {
        int lastdigit=n%10;
        n=n/10;
        digsum+=lastdigit;
    }
    return digsum;
}
int sumofarray(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{     
    cout<<"sum of digits is : "<<sumN(123)<<endl;
    cout<<"reverse of 1234 is : "<<reverse(1234)<<endl;
    cout<<"decimal to binary number is : "<<dectobin(105)<<endl;
    int arr[]={1,34,45,56,67};
    int size=5;
    int target;
    linearsearch(arr,size,target);
    cout<<"enter the element to be search : " <<endl;
    cin>>target;
     if(linearsearch(arr,size,target)!=-1)
    {
        cout<<"Element found at index "<<linearsearch(arr,size,target)<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
return 0;
}
