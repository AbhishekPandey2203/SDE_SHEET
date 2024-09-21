#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    cout<<endl;
    while(t--)
    {
        int m,n;
        cin>>m>>n;

        if((m+n)%3==0 &&(max(m,n)<=2*(min(m,n))))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


return 0;

}


