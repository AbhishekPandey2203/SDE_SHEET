#include<bits/stdc++.h>
using namespace std;

void solve(int indx,vector<int>&a, vector<vector<int>> &store, vector<int>&ds)
{
    if(indx==a.size())
    {
        store.push_back(ds);
        return;
    }

  ds.push_back(a[indx]);
  solve(indx+1,a,store,ds);
  ds.pop_back();
  solve(indx+1,a,store,ds);


}

int main()
{
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){

         cin>>a[i];
    }
   
    vector<vector<int>>store;

    vector<int>ds;

  solve(0,a,store,ds);
    

for(auto v:store)
{
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }

     cout<<endl;
}



}