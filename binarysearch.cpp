#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <int> fx={0,0,0,0,0,1,1,1,1,1};
    sort(fx.begin(),fx.end());
    for(auto a : fx)
    {
        cout<<a<<" ";
    }
    auto low=lower_bound(fx.begin(),fx.end(),1);
    cout<<"\n";
    cout<<low-fx.begin()+1;

}
