#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> findTriplets(vector<int> &arr) {
        
        
        int n=arr.size();
        
        unordered_map<int,vector<pair<int,int>>>mpp;
        
        set<vector<int>>s;
        
        for( int i=0;i<n-1;i++)
        {
            for( int j=i+1;j<n;j++)
            {
                mpp[arr[i]+arr[j]].push_back({i,j});
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            int rem=-arr[i];
            
            if(mpp.find(rem)!=mpp.end())
            {
                vector<pair<int,int>>pairs=mpp[rem];
                
                for(auto p:pairs)
                {
                    //
                    if(p.first!=i && p.second!=i)
                    {
                        vector<int>curr={i,p.first,p.second};
                        
                        sort(curr.begin(),curr.end());
                        s.insert(curr);
                    }
                }
            }
        }
        
        vector<vector<int>>res(s.begin(),s.end());
        
        
        return res;
        
        
    }

int main()
{
    int n;
    cin>>n;


    vector<int>arr(n);

    for( int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
   findTriplets(arr);



   return 0;


}