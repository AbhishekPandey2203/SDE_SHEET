// Program for implementing the longest subarray with zero sum

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of elements in an array"<<endl;
    cin>>n;
    //enter the array element
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
//using the unordered_map logic to find the longest subarray with zero sum, as the prefix sum logic
unordered_map<int,int>mpp;
mpp[0]=-1;

int omax=0;  //longest length
//hum generally approach ye let ek point tk ka sum x h, 
// then infuture kisi y point pe sum again we get x, hence beech ka subaaray sum is zero
int sum=0;

for(int i=0;i<n;i++)
{
    sum+=arr[i];
    if(mpp.find(sum)==mpp.end())
    {
          mpp[sum]=i;
    }
    else
    {
        int length=i-mpp[sum];
        if(length>omax)
        {
            omax=length;
        }
    }
  

}

cout<<omax<<endl;
return 0;

}