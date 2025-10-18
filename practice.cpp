#include<iostream>
using namespace std;
int reverseN(int num)
{
    int reverse=0;
    while(num>0)
    {
        int lastdigit=num%10;
        num=num/10;
        reverse=(reverse*10)+lastdigit;
    }
    return reverse;

}
int sumN(int num)
{
    int digitsum=0;
    while(num>0)
    {
        int lastdigit=num%10;
        num=num/10;
        digitsum+=lastdigit;
    }
    return digitsum;
}
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);

}
int factorial(int n)
{
    int factorial=1;
    for (int i=1;i<=n;i++)
    {
        factorial =factorial*i;
    }
}
int ncr(int n,int r)
{
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    int ncr=fact_n/fact_r*fact_nmr;
    return ncr;
}
void reversearray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main()
{

    int arr[]={1,2,3,4,5};
    int size=5;
    reversearray(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    if (isPowerOfTwo(n))
        cout << n << " is a power of 2." << endl;
    else
     cout << n << " is NOT a power of 2." << endl;
    cout<<"the sum of digits of a number is :"<<sumN(12345)<<endl;
    cout<<" binomail coefficient is : "<<ncr(5,2)<<endl;
    cout<<"the reverse of digit of a number is :" <<reverseN(-123)<<endl;
    int num=1;
    for(int i=1;i<=3;i++)
    {
        
        for(int j=1;j<=3;j++)
        {
            cout<<num;
            num++;
        }
        
        cout<<endl;
    }
for(int i=1;i<=4;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<j;

    }
    cout<<endl;
}
return 0;
}
