#include<iostream>
#include<string>
using namespace std;

int stringstr(string haystack,string needle)
{
    return haystack.find(needle);
}
int main()
{
    string haystack;
    cout<<"enter the string :"<<endl;
    cin>>haystack;
    string needle;
    cout<<"enter the substring :"<<endl;
    cin>>needle;
    cout<<" the first occurence of string is : "<<stringstr(haystack,needle);
    return 0;

}