// using the bitmanupulation  ..

//basically a standard procedure for handling the by summet sir

#include<bits/stdc++.h>
using namespace std;

void findtwounique(vector<int>&arr)
{
    int a=0;
    int b=0;
    int n=arr.size();
    //s-1 findxor of a element

    int xxorofa=0;

    for(int i=0;i<n;i++)
    {
        xxorofa=xxorofa^arr[i];
    }

    //we get xor
    //now using the  right most set bit of all xor
    //  logic we can done this
    
    int s2com=xxorofa & -xxorofa;

    //just find the two uniqueone

    for( int i=0;i<n;i++)
    {
        if((arr[i]&s2com)==0)  //represent one which is unique
        {
            a=a^arr[i];
        }
        else                  //represent one other which is unique
        {
            b=b^arr[i];
        }
    }

    cout<<a<<" "<<b<<endl;


}

int main()
{
    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;

    cout<<"Enter the array element every element twice expect the two elements"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //calling the function
    findtwounique(arr);

    return 0;


}