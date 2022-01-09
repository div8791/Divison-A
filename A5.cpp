#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string s; cin>>s;
    vector<int> t;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            t.push_back(s[i]);
        }
    }
    string ans="";
    sort(t.begin(),t.end());
    for(int i=0; i<t.size(); i++)
    {
        ans += t[i];
        ans += '+';
    }
    ans.erase(ans.length()-1);
    cout<<ans<<endl;
    return 0;
}