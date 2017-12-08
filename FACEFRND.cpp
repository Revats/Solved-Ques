#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,mf,id,it,ct=0;
    set<int> frd;set<int> mutfrd;
    cin>>f;
    for(int i(0);i<f;i++)
    {
        cin>>mf;
        frd.insert(mf);
        cin>>it;
        for(int j(0);j<it;j++)
        {
            cin>>id;mutfrd.insert(id);
        }
    }
    for( auto x : mutfrd)
    {
        if( frd.count(x)==0)
        {
            ct++;
        }
    }
    cout<<ct;
}
