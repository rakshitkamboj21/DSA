#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()

{
    string str="Hello World";
    stack<char>st,temp;
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            st.pop();
        }
    }
    cout<<"The string after removing vowels is: ";
    while(!st.empty())
    {
        temp.push(st.top());;
        st.pop();
    }
    while(!temp.empty())
    {
        cout<<temp.top();
        temp.pop();
    }
}
