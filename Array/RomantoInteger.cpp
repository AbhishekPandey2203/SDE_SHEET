//this question is about the roman to integer
#include<bits/stdc++.h>
using namespace std;

int romantointeger( string &s)
{
       int ans=0;
       unordered_map<char,int>mpp;
  //use of unordered_map help to track the given coming variable
  
     
       mpp['I']=1;
        mpp['V']=5;
         mpp['X']=10;
          mpp['L']=50;
           mpp['C']=100;
            mpp['D']=500;
             mpp['M']=1000;

        //generally we stuck where we get XC,IV->logical approach is to if we get it just sub 
        //otherwise add it
        for(int i=0; i<s.length();i++)
        {
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                ans=ans-mpp[s[i]];
            }
            else
            {
                ans=ans+mpp[s[i]];
            }
        }


        return ans;

}

int main()
{
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;

    //function calling to make the roman string in no format
    cout<<romantointeger(s)<<endl;

    return 0;

}