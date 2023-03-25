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
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = 26;
    int mx = -1;
    int ans = 0;
    vi a(n);
    f(i, 0, n)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    //for(auto it : a) cout<<it<<" ";
    f(i,0,s.length())
    {
        ans += a[s[i] - 'a'] * (i+1);
    }
    int i = s.length();
    f(j,i,i+k){
        ans+=(mx)*(j+1);
    }
    cout << ans << endl;
}
signed main()
{
    fast;
    //   cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}