#include <bits/stdc++.h>
using namespace std;
signed main()
{
    string s;
    cin >> s;
    int n = s.length();
    string h = "hello";
    int j = 0, pass = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == h[j])
        {
            j++;
            pass++;
            if (pass == 5)
            {
                break;
            }
        }
    }
    if(pass==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}