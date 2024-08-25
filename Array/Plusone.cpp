// plus one addition -->

#include<bits/stdc++.h>
using namespace std;

vector<int> pluseone(vector<int>&digits, int n)
{
    
    for(int i=n-1;i>=0;i--)
    {
        if(digits[i]<9)
        {
            //simple add 1 time only

            digits[i]++;
            return digits;
        }
        digits[i]=0;
    }


    digits.insert(digits.begin(),1);
}

int main()
{
      int n;
      cout<<"Enter the no of elements in n"<<endl;
      cin>>n;
      vector<int>digits(n);

      for(int i=0;i<n;i++)
      {
        cin>>digits[i];
      }
   
   vector<int>ans;

      //calling the function plusone-->
     ans=  pluseone(digits,n);
    
      for(int i=0;i<n;i++)
      { 

        cout<<ans[i]<<" ";
        
      }
   




}