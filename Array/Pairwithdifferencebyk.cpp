// Given an array arr[] of positive integers. Find the number of pairs of integers whose difference equals a given number k.
// Note: (a, b) and (b, a) are considered the same. Also, the same numbers at different indices are considered different.

// Examples:

// Input: arr[] = [1, 5, 3, 4, 2], k = 3
// Output: 2
// Explanation: There are 2 pairs with difference 3,the pairs are {1, 4} and {5, 2} 
// Input: arr[] = [8, 12, 16, 4, 0, 20], k = 4
// Output: 5
// Explanation: There are 5 pairs with difference 4, the pairs are {0, 4}, {4, 8}, {8, 12}, {12, 16} and {16, 20}.



// Let code

#include<bits/stdc++.h>
using namespace std;


// now we have to find the pair with difference k

// as per logically think , we have to find the pair for such question to solve we use ----the hashmap concept and it is acceptable

  int countPairsWithDiffK(vector<int>& arr, int k)
  {     

    //pair difference ke ques solve krne ke liye we use generally --hashmap concept
         
         unordered_map<int,int>mpp;

         int count=0;

    //todha logically soache toh, agr mujhe pair nikalne h toh vo kase hoga h toh jo bhi array h ushme m k ko +,- kro aur mpp m vo already h
    //so ans nikal jayega

    for( int i=0;i<arr.size();i++)
    {
        if(mpp.find(arr[i]+k)!=mpp.end())
        {
            count+=mpp[arr[i]+k];
        }

          if(mpp.find(arr[i]-k)!=mpp.end())
        {
            count+=mpp[arr[i]-k];
        }

        mpp[arr[i]]++;
    }
   return count;

  }


int main()
{
    int n;
    cin>>n;

    cout<<"Enter the array"<<endl;

    vector<int>arr;

    for(int i=0;i<n;i++)
    {
         int ans=0;
         cin>>ans;
         arr.push_back(ans);
    }

   int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
      
  cout<<endl;
    int res=countPairsWithDiffK(arr,k);
    cout<<res<<endl;


   return 0;
}