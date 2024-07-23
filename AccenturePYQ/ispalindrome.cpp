// check the string is palindrome

#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string &s)
{
    int i=0;
    int j=s.length()-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        return false;

        i++;
        j--;

    }

    return true;
}

int main()
{
    cout<<"Enter the string :S"<<endl;

    string s;
    cin>>s;

    cout<<checkpalindrome(s)<<endl;
}