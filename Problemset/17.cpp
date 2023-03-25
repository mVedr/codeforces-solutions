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
    int n, k; cin>>n>>k;
	vi a(n); f(i,0,n) cin>>a[i];
	sort(all(a));
	int ans;
	if (k == 0) {
		ans = a[0] - 1;
	} else {
		ans = a[k - 1];
	}
	int cnt = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] <= ans) ++cnt;
	if (cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000)) {
		cout<<-1;
		return ;
	}
	cout<<ans<<endl;
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