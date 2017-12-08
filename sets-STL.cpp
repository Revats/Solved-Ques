#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,in,x;cin>>q;set<int> s;
    for(int i(0);i<q;i++)
    {
        cin>>in>>x;
        if(in==1)
        {
            s.insert(x);
        }
        else if(in==2)
        {
            if(s.find(x)!=s.end())
                s.erase(x);
        }
        else
        {
            if(s.find(x)!=s.end())
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}
