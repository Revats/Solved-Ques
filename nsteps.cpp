#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    for(int i(0);i<t;i++)
    {
            int x,y;
            cin>>x>>y;
            if(y==x)
            {
                int l=2*x-(x%2);
                cout<<l<<"\n";
            }
            else if(y==x-2)
            {
                int l=2*(y+1)-(y%2);
                cout<<l<<"\n";
            }
            else
                cout<<"No Number"<<"\n";

    }
}
