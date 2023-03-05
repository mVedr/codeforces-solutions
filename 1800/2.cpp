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
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> farr(52, 0);
    int ans = 0;
    f(i, 0, n)
    {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            farr[26 + c - 'A']++;
        }
        else
        {
            farr[c - 'a']++;
        }
    }
    int xx=0;
    f(i,0,26){
            ans+=min(farr[i],farr[26+i]);
            xx+=abs(farr[i]-farr[26+i])/2;
    }
    cout << ans+min(xx,k) << endl;
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