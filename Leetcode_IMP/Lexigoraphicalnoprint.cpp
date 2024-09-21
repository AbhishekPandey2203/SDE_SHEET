#include<bits/stdc++.h>
using namespace std;

//function to find out the lexigoraphical number order --using the dfs way
void dfs(int i , int n, vector<int>&ans)
{
    if(i>n) return;

    //sabse phele jo h usko add kro then vo apne child ko call kr lega

    ans.push_back(i);
    for(int j=0;j<10;j++)
    {
        dfs(10*i+j,n,ans);
    }
}

int main()
{
    int n;
    cout<<"Enter the number till you want to print the lexigrophical "<<endl;
    cin>>n;
    
    vector<int>ans;

    for(int i=1;i<=9;i++)
    {
        dfs(i,n,ans);
    }

    cout<<endl;


    //printing the order

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

  return 0;

}