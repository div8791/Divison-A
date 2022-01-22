#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    int c = 0;
    for(int i=1; i<=n; i++)
    {
        if(v[i]%2==0)
        {
            c++;
        }
    }
    if(c>1)
    {
        for(int i=1; i<=n; i++)
        {
            if(v[i]%2!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    else{
        for(int i=1; i<=n; i++)
        {
            if(v[i]%2==0)
            {
                cout<<i<<endl;
            }
        }
    }
   

    return 0;
}