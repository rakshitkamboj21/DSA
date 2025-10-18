// minimum of two number using function 
#include<iostream>
using namespace std ;
int min(int a ,int b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b ;
}
}

// calculate sum of numbers from 1 to n 

int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum +=i;
    }
    return sum;
}

//calculate factorial from 1 to n 

int factorialN(int n){
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

//calculate sum of digits of a number

int sumofdigits(int num)
{
    int digsum=0;
    while(num>0)
    {
        int lasdigit=num%10;
        num=num/10;
        digsum +=lasdigit;
    }
    return digsum;
}

// calculate binomial coefficient nCr

int factorial(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int ncr(int n,int r)
{
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return fact_n/(fact_r*fact_nmr);
}
// check whether a number is prime or not
  bool isprime(int n)
{
    if(n<=1)
    {
        return false;

    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

// calculate area of rectangle

int rectangle(int length,int breadth){
    int area =length * breadth;
    return area;
}
int main()
{
    int n=5,r=2;
    min(5,3);
    cout<<"the area of reactangle is "<<rectangle(43,34)<<endl;
    cout<<"the minimum is :"<<min(5,3)<<endl;
    cout<<"the sum from 1 to n is "<<sumN(5)<<endl;
    cout<<"the factorial from 1 to N is " <<factorialN(3)<<endl;
    cout<<"the sum of digits is "<<sumofdigits(12345)<<endl;
    cout<<" biniomial coefficient of nc r is "<<ncr(5,2)<<endl;
    cout << boolalpha;
    cout<<isprime(n)<<endl;
    if(isprime(n))
    {
        cout<<n<<" is a pime number"<<endl;

    }
    else {
        cout<<n<<"is not a prime number "<<endl;
    }
    return 0;
    
}
// write a function to check whether a number is prime or not
