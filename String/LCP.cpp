// the question is done by me and the entire logic is my--->to solve it
//now Longest common prefix --<

#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    //the entire logic is done by me--->
        if(strs.size()==1)
        return strs[0];
      
      string ans="";
      string check=strs[0];

      for(int i=1;i<strs.size();i++)
      {
           string temp=strs[i];
           string ans1="";
           for(int i=0;i< min(temp.length(),check.length());i++)
           {
                  if(temp[i]==check[i])
                  {
                        ans1+=temp[i];
                  }
                  else
                  break;
           }
           ans=ans1;
           check=ans1;
      }

    return ans;
        
    }

int main()
{   
    int n;
    cout<<"Enter the no  of string in strs"<<endl;

    cin>>n;
    vector<string>strs(n);
     cout <<"Enter the vector of string"<<endl;
   for(int i=0;i<n;i++)
   {
    cin>>strs[i];
   }

   cout<<"The resultant common prefix is:"<<longestCommonPrefix(strs)<<endl;


     return 0;

    
}