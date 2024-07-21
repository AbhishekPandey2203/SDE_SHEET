// The question is to find the element in 2d matrix 
#include<bits/stdc++.h>
using namespace std;
bool findkey(vector<vector<int>>&mat , int k)
{
    int n=mat.size();
    int m=mat[0].size();

 //here main logic is just to understand how from mid we can compute which rowindx and colindx it indicate
 //so to takle it the concept is mid/m-give row and mid%m give col indx -col se divided krna h
 int low=0;
 int high=n*m-1;
 while (low<=high)
 {
    int mid=low+(high-low)/2;
    if(mat[mid/m][mid%m]==k)
    return true;
    else if(mat[mid/m][mid%m]<k)
    low=mid+1;
    else
    high=mid-1;
 }
 
return false;

}

int main()
{
    int n,m,k;
    cout<<"Enter the no of Row and COl"<<endl;
    cin>>n>>m;

    vector<vector<int>>mat(n,vector<int>(m));

    cout<<"Enter the element in 2D Matrix"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    //enter the target element
    cout<<"Enter the target element"<<endl;
    cin>>k;
     

    //calling the function

    cout<<findkey(mat,k)<<endl;

    return 0;
}