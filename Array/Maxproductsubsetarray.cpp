// Max product subset array
//It take negative as well as positive no

#include<bits/stdc++.h>
using namespace std;

void findmaxproductsubset(vector<int>&arr)
{
    //as it consider negative as well as positive aur zero so we have to handle all the cases
   //main logic is in this is to consider the negative count and also the zero
   //let approach how to proceed

   //Jo negative ka count if odd then hume negative m sabse minimum chyee-->those who is minimum in negative is always max of negative 

   int negcount=0;
   int prod=1;
   int zerocount=0;
   int valneg=INT_MIN;

   int n=arr.size();
   for(int i=0;i<n;i++)
   {
        if(arr[i]==0)
        {
            zerocount=1;
            continue;
        }

        else if(arr[i]<0)
        {
            negcount++;
            //multiply is common
           prod= prod*arr[i];

            //calculate always max of negative bcz vhi minimum hoga
           valneg=max(valneg,arr[i]);   

        }
        else
        prod=prod*arr[i];
   }


   //handling case
   if(prod<0)
   {
      prod=prod/valneg;
   }
   if(prod==1 && zerocount==1) prod=0;
   cout<<"The maximum product subset is"<<prod<<endl;

}

int main()
{
    cout<<"Enter the no of elements"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the element in a vector"<<endl;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Calling to the function"<<endl;

    findmaxproductsubset(arr);
}
