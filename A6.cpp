#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sum = sum/2;
    int ans = 0;
    int c = 0;
    for(int i=0; i<n; i++)
    {
        ans += a[i];
        c++;
        if(ans>sum)
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}