#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t,n;ll sum,curval;cin>>t;
    for(int i(0);i<t;i++)
    {
        sum=0;
        cin>>n;
        for(int j(0);j<n;j++)
        {
            cin>>curval;
            sum+=curval%n;
        }
        if(sum%n==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";

    }

}
