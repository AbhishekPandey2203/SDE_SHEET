#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int m=n;
//     string s=to_string(m);
//     int sum1=0;

//     for(int i=0;i<s.size();i+=2)
//     {
//         sum1+=s[i]-'0';

//     }

//     int sum2=0;
//     for(int i=1;i<s.size();i+=2)
//     {
//         sum2+=s[i]-'0';

//     }


//   cout<<abs(sum1-sum2)<<endl;

   
    int sum=0,c=0;

    while(m!=0)
    {
      sum+=((-1)^(c+1))*(m%10);
      m=m/10;
      c++;
    }
    if(c%2)
    cout<<sum;
    else
    cout<<-1*(sum);

    
}
// // 

// i=2,sum=0;
// while(i<=n)
// {
//     while(n%i==0)
//     {
//         sum+=i;
//         n/=i;
//     }
//     i++;
// }
