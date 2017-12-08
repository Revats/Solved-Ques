#include <bits/stdc++.h>
using namespace std;


void dfs_visit(int s,vector<vector<int> >& ad,vector<bool>& vi)
{
    vi[s]=true;
    for(auto i=0;i<ad[s].size();i++)
    {   if(vi[ad[s][i]]==false)
        {
            vi[ad[s][i]]=true;
            dfs_visit(ad[s][i],ad,vi);
        }


    }
    return;
}
int main()
{
    int v,e;cin>>v>>e;int s,d;
    vector<vector<int> > adj(v+1);
    vector<bool> vis(v+1,false);
    for(int i(0);i<e;i++)
    {
        cin>>s>>d;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }

    int alv=1;

    dfs_visit(1,adj,vis);

    for(int i(1);i<=v;i++)
    {
        if(vis[i]==false)
        {
            alv=0;break;
        }
    }
    if(alv==1 && e==v-1)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
}
