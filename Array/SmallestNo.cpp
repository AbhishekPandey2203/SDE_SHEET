// Given two integers s and d. The task is to find the smallest number such that the sum of its digits is s 
// and the number of digits in the number are d. Return a string that is the smallest possible number. 
// If it is not possible then return -1.


// now let
//input s,d;
#include<bits/stdc++.h>
using namespace std;

  string smallestNumber(int s, int d) {
        
        
     //this is good pattern based observing question:
     //genrally iss question ko dekh ke binary search wali approach lgi
     //but this is an exmaple of constructive algorithm
     //now isse hum no ko try krenge khud se construct krne ka
     
     //base condition
     
     if(s>9*d)
     return "-1";
     
     string ans="";
     
     //now let try to make the digit:
     
     for(int i=d;i>0;i--)
     {
         //psble case right most se leftmost jayenge ab tk 9 psble tab tk lete rho
         
         if(s>9)
         {
             ans="9"+ans;
             s=s-9;
         }
         else
         {
             //ab agr ek digit bache h fill krne ko toh
             if(i==1)
             ans=to_string(s)+ans;
             
             else
             {
                 ans=to_string(s-1)+ans;
                 i--;
                 //now bs psble zero add krte rhe sbse chota chye 
                 
                 while(i>1)
                 {
                     ans="0"+ans;
                     i--;
                 }
                 
                 //last m add 1 kr bcz upar s-1 kiya h
                 ans="1"+ans;
             }
         }
     }
     
     
     return ans;
        
  
        
    }

int main()
{
    int s;
    int d;
    cin>>s>>d;

    //function to calculate the smallest no 

    cout<<smallestNumber(s,d)<<endl;
    return 0;

    
}