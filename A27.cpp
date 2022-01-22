#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n, d;
    cin>>n>>d;
    vector<int> t(n);
    for(int i=1; i<=n; i++)
    {
        cin>>t[i];
    }
    int s = 0;
    for(int i=1; i<=n; i++)
    {
        s += t[i];
    }
    if(s+(n-1)*10 > d)
    {
        cout<<"-1"<<endl;
    }
    else{
        d = d-s;
        d = d - (n-1)*10;
        int ans = 2*(n-1);
        if(d>=5)
        {
            ans += d/5;
        }
        cout<<ans<<endl;
    }
    return 0;
}