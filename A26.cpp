#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin>>n;
    int v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int w = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>v;
        if(v==1)
        {
            v1.push_back(i);
        }
        else if(v==2)
        {
            v2.push_back(i);
        }
        else if(v==3)
        {
            v3.push_back(i);
        }
    }
    w = min(v1.size(), min (v2.size(), v3.size()));
    cout<<w<<endl;
    for(int i=0; i<w; ++i)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    return 0;
}