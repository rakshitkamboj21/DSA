#include<iostream>
#include<unordered_map>
using namespace std;
int main()

{
    unordered_map<char,int>freq;
    string str="leetcode";
    for(int i=0;i<=str.length()-1;i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;i<=str.length()-1;i++)
    {
        if(freq[str[i]]==1)
        {
            cout<<str[i];
            break;
        }
    }
    return 0;
}