  #include<bits/stdc++.h>
  using namespace std;
  
  
  int findMaxConsecutiveOnes(vector<int>& nums) {

        // this

        int maxione=INT_MIN;
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
               count++;
            }
            else
            {  maxione=max(count,maxione);
                count=0;
           
            }
        }
        
maxione=max(count,maxione);
        return maxione;
    }

int main()
{
    cout<<"Enter the no of element"<<endl;
    int n;
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter the vector input array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    //calling the function
  cout<<  findMaxConsecutiveOnes(nums)<<endl;


  return 0;

}