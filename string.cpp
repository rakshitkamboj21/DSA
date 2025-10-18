#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std ;
bool isvalid(string str)
{
    int start=0,end=str.size()-1;
    while(start<=end)
    {
        if(str[start]!=str[end])
        {
            return false;
            start++,end--;
        }
        else{
            return true;
        }
    }
}

// reverse a word in a string 

string reversewords(string s)
{
    int n=s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        string word="";
        while(i<n && s[i]!=' ')
        {
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0)
        {
            ans+=" "+word;
        }
    }
    return ans.substr(1);    
}
string removeoccurence(string s1,string part)
{
    while(s1.length()>0 && s1.find(part)<s1.length())
    {
        s1.erase(s1.find(part),part.length());
    }
    return s1;
}

// compression of string 
int compress(vector<char>& chars) {
     int n=chars.size();
     int idx=0;
    for(int i=0;i<n;i++)
    {
        char ch=chars[i];
        int count=0;
        while(i<n && chars[i]==ch)
        { 
          count++,i++;
        }
        if(count==1)
        {
            chars[idx++]=ch;
        }
         else
        {
            string str=to_string(count);
             for(char dig:str)
                {
                    chars[idx++]=dig;
                }
            }

            i--;
        }
        chars.resize(idx);
        return idx;
    }

int main()
{
   string str="radar";
   string s;
   string s1="aabcbbbbabcbabc";
   string part="abc";
   vector<char> chars = {'a','a','b','b','c','c','c'};
   int compressedLength = compress(chars);
    for (int i = 0; i < compressedLength; i++) {
        cout << chars[i] << " ";
    }   
    cout << endl;
   cout<<removeoccurence(s1,part);
   cout<<" enter the string :";
   getline(cin,s);
   cout<<reversewords(s)<<endl;
   return 0;

}