#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    string str="({[]})";
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
            st.push(str[i]);
        }
        else if(str[i]==')'||str[i]=='}'||str[i]==']')
        {
            if(st.empty())
            {
                cout<<"The string is not balanced";
                return 0;
            }
            char top=st.top();
            st.pop();
            if((str[i]==')' && top!='(') || (str[i]=='}' && top!='{') || (str[i]==']' && top!='['))
            {
                cout<<"The string is not balanced";
                return 0;
            }
        }
    }
    if(!st.empty())
    {
        cout<<"The string is not balanced";
        return 0;
    }
    cout<<"The string is balanced";
    return 0;
}
