/*Problem statement 
In an array a superior element is one which is greater than all elements to its right. The rightmost element 
will always be considered as a superior element. 
You are given a function, 
Int FindNumberOfSuperiorElements(int* arr, int n); 
The function accepts an integer array ‘arr’ and its length ‘n’. Implement the function to find and return the 
number of superior elements in array ‘arr’. */

// find  the rightmost superior element count

#include<bits/stdc++.h>
using namespace std;

void findnoofsuperiorelements(int arr[], int n)
{
    //rightmost
   int count=0;
   for(int i=0;i<n-1;i++)
   {
       int j=i+1;
         while(j<n)
         {
            if(arr[i]>arr[j])
            {
                j++;
            }
            else
            break;
         }

         if(j==n)
         count++;
   }


   cout<<"Total no of superior element is"<<count+1<<endl;
}

int main()
{
    cout<<"Enter the no of elements in array"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the elements in an array"<<endl;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //calling the function

    findnoofsuperiorelements(arr,n);

    return 0;
}
