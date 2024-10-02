// Input: arr = [40,10,20,30]
// Output: [4,1,2,3]
// Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.

// Input: arr = [100,100,100]
// Output: [1,1,1]
// Explanation: Same elements share the same rank.
// Example 3:

// Input: arr = [37,12,28,9,100,56,80,5,12]
// Output: [5,3,4,2,8,6,7,1,3]


// ------------>using the logic
#include<bits/stdc++.h>
using namespace std;

//function to compute the rank --> logic 
//using the set and hashmap we can done

vector<int>rankofanarray(vector<int>&arr, int n, vector<int>&ans)
{
      //using the set functionlaity -->

      set<int>s;

      for(int i=0;i<n;i++)
      {
        s.insert(arr[i]);

      }
   
   //new arr for sort -->
   vector<int>ass;
  for(auto i:s)
  {
    ass.push_back(i);
  }

  sort(ass.begin(),ass.end());

  

  //-->using map functionality

  unordered_map<int,int>mpp;
  for(int i=0;i<ass.size();i++)
  {
        mpp[ass[i]]=i+1;
  }

  for(int i=0;i<n;i++)
  {
      if(mpp.find(arr[i])!=mpp.end())
      {
          ans.push_back(mpp[arr[i]]);
      }
  }
  


return ans;




}

int main()
{
     int n;
     cout<<"Enter the no of element in an array"<<endl;
     cin>>n;

     vector<int>arr(n);

      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      cout<<endl;

   vector<int>ans;
      rankofanarray(arr,n,ans);


      for(int i=0;i<n;i++)
      {
        cout<<ans[i]<<" ";
      }
  
  return 0;

}