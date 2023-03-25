#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
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
    int n;
    cin >> n;
    vi b(n);
    f(i, 0, n) cin >> b[i];
    sort(all(b));
    map<int, int> mp;
    int h = 1, l = 1;
    int pl = b[0], ll = b[n - 1];
    int i = 1, j = n - 2;
    if (pl == ll)
    {
        cout << 0 << " " << n*(n-1)/2 << endl;
        return;
    }
    else
    {
        while (i < n and pl == b[i])
            ++l, ++i;

        while (j > -1 and ll == b[j])
            ++h, --j;
        cout << ll - pl << " " << l * h << endl;
    }
}
signed main()
{
    fast;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}