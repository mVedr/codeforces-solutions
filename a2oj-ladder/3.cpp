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
#define vi vector<int>
int t = 1;
using namespace std;

void solve()
{
    int n, l;
    cin >> n >> l;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int d = 2 * max(arr[0], l - arr[n - 1]);

    for (int i = 1; i < n; i++)
    {
        d = max(d, (arr[i] - arr[i - 1]));
    }
    cout << fixed << setprecision(10) << (double)d / 2;
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