#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string s1, s2;
    cin>>s1>>s2;
    // int l1 = s1.length();
    // int l2 = s2.length();
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int c = s2.compare(s1);
    if(c==0)
    {
        cout<<"0"<<endl;
    }
    if(c>0)
    {
        cout<<"-1"<<endl;
    }
    else if(c<0)
    {
        cout<<"1"<<endl;
    }
    return 0;
}