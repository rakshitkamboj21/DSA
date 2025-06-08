#include<iostream>
using namespace std ;
int dectobinary(int decnum)
{
      int ans=0,power=1;
      while(decnum>0)
      {
            int remainder=decnum%2;
            decnum=decnum/2;
            ans+= remainder*power;
            power *=10;
      }
      return ans;
}
// binary to decmal conversion
int binarytodec(int binnum)
{
    int ans=0,power=1;
    while(binnum>0)
    {
        int remainder=binnum%10;
        ans+=remainder*power;
        power *=2;
        binnum=binnum/10;
    }
    return ans;

}
int main()
{
    cout<<"binary number is :"<<dectobinary(50)<<endl;
    for (int i=0;i<=10;i++)
    {
        cout<<"binary number of "<<i<<" is : "<<dectobinary(i)<<endl;

    }
    cout<<"decimal number is : "<<binarytodec(1101001)<<endl;
    return 0;
}  