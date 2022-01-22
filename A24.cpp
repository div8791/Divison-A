#include <bits/stdc++.h>
using namespace std;
signed main()
{
    long int n, s, x, y;
    cin >> s >> n;
    vector<pair<int, int> > d;
    for (long int i = 0; i < n; i++)
    {
        cin >> x >> y;
        d.push_back(make_pair(x, y));
    }
    sort(d.begin(), d.end());
    for (long int i = 0; i < n; i++)
    {
        if (s <= d[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            s += d[i].second;
        }
    }
    cout << "YES" << endl;
    return 0;
}