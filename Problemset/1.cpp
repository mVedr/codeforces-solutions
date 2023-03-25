#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
#define all(a) (a).begin(), (a).end()
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define endl '\n'
int t = 1;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt1 = 0;
    vi v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            cnt1++;
        }
    }
    if (cnt1 == n)
    {
        cout << 0 << endl;
    }
    else if (cnt1 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<pair<int, int>> res;
        for (int i = 1; i <= n; i++)
        {
            res.push_back({v[i], i});
        }

        sort(res.begin(), res.end());
        vector<pair<int, int>> ans;

        while (res[0].first != res[n - 1].first)
        {
            int val = res[0].first;
            for (int i = 1; i < n; i++)
            {
                if (res[i].first != val)
                {
                    res[i].first = (res[i].first + val - 1) / val;
                    ans.push_back({res[i].second, res[0].second});
                }
            }
            sort(res.begin(), res.end());
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
            ;
        }
    }
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