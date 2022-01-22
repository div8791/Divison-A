#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, m, t;
    cin >> n >> m;
    if (m > n)
    {
        t = -1;
    }
    else
    {
        if (n % 2 == 0)
        {
            t = (n / 2);
        }
        else
        {
            t = (n / 2) + 1;
        }
        while (t % m != 0)
        {
            t++;
        }
    }
    cout << t << endl;
    return 0;
}