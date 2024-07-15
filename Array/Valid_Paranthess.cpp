#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {

     stack<char>s1;

     for(int i=0;i<s.length();i++)
     {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        s1.push(s[i]);
        else 
        {    if(s1.empty()) return false;
             
             if(s1.top()!='(' && s[i]==')')
             {
                 return false;
             }
             if(s1.top()!='{' && s[i]=='}')
             {
                 return false;
             }
             if(s1.top()!='['&& s[i]==']')
             {
                 return false;
             }
             s1.pop();

        }
       

        
     }
    if(s1.empty())
     return true;
     else
     return false;
    
        
}

int main()
{
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;

    cout<<isValid(s)<<endl;
    return 0;
}
