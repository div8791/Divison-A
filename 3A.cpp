#include <bits/stdc++.h>
using namespace std;
signed main()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='y')
        {
            continue;
        }
        else
        {
             ans += '.';
            ans += s[i];
        }
    }
  
    cout << ans << endl;
    return 0;
}