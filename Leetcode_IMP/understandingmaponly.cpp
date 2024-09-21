// Divide Array in Sets of K Consecutive Numbers

//writing the logical code for solving the problem that we have to divide an array into k group and all element in 
//group should contain k consecutive elements

#include<bits/stdc++.h>
using namespace std;

bool isPossibleDivide(vector<int>& nums, int k) {

        // dekho isme logically thing ye thi ki agar hume arr.size()%k==0 ho
        // jata then uske baad humara target h ki har particular ke liye uske k
        // consecutive ho bs yhi logic h iss question m just check ki particular
        // ke liye agr consecutive h toh koi problem nhi agar nhi toh return
        // false;

        int n = nums.size();
        if (n % k != 0)
            return false;

        map<int, int> mpp;  //why it used because it store the value in ascending oreder by key basis

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        // now why map not unoredered_map logic is jise sorted m miljaye aur ya
        // phir jis order m ushe order m

       

        for (auto i : mpp) {
            int val = i.first;
            int cur = val;
            int fre = i.second;
            if (fre == 0)
                continue;

            while (fre--) {
                for (int i = cur; i < cur + k; i++) {
                    // yaha pe todha logic just ye check krlo ki curr se
                    // curr+k-1 consecutive h hmre pass agr ek bhi nhi mtlb
                    // return false; yhi logic h

                    if (mpp[i] == 0)
                        return false;

                    // varna

                    mpp[i]--;
                }
            }
        }

        return true;
}

int main()
{
     int groupsize;
     cout<<"Enter the groupsize you want to divide the array"<<endl;
     cin>>groupsize;

      int n;
     cout<<"Enter the no of elements you want to insert in the array"<<endl;
     cin>>n;


     vector<int>nums(n);
     cout<<"Enter the array element"<<endl;

     for(int i=0;i<n;i++)
     {
        cin>>nums[i];
     }

     cout<<isPossibleDivide(nums,groupsize)<<endl;


     return 0;


}
