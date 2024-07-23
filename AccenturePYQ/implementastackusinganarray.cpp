// implement a stack using an array

//let try to approach  this 

//stack push and pop ->LIFO property

#include<bits/stdc++.h>
using namespace std;

void viewelem(vector<int> &arr)
{  
    for(int i=arr.size()-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
} 

void push( int value, vector<int>&arr)
{  
    //for pushing it push as from last

    arr.push_back(value);
    

}
void pop(vector<int>&arr)
{
    arr.pop_back();

}



int main()
{  
    int n;
    cout<<"Enter the element you want to inset in stack"<<endl;
    vector<int>arr;
    push(2,arr);
    push(3,arr);
    push(4,arr);
    push(5,arr);

    viewelem(arr);
    cout<<endl;
    pop(arr);
    pop(arr);

    viewelem(arr);


       

    
   
}