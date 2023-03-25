#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
#define INF 1000000000
#define all(a) (a).begin(), (a).end()
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl '\n'
#define vi vector<int>
int t = 1;
using namespace std;

void solve()
{
    int n, x, l = -1, r, sum = 0;
    cin>>n>>x;
    f(i, 0, n)
    {
        int a;
        cin >> a;
        if (a % x)
        {
            if (l == -1)
                l = i;
            r = i;
        }
        sum += a;
    }
    if (sum % x)
        cout << n << endl;
    else if (l == -1)
        cout << -1 << endl;

    else
        cout << (n - min(l + 1, n - r)) << endl;
}
signed main()
{
    fast;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}