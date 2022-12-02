#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        long long ans = (n * (n - 1)) / 2;
        cout << ans << " " << ans << "\n";
        return;
    }
    ll maxi = ((n - k + 1) * (n - k)) / 2;
    ll other1 = n / k;
    ll other2 = n % k;
    ll ans1 = (other1 * (other1 - 1)) / 2;
    ll ans2 = ((other1 + 1) * (other1)) / 2;
    ll ans3 = (ans1 * (k - other2)) + (ans2 * (other2));
    cout << ans3 << " " << maxi << "\n";
}
int main()
{
    solve();
    return 0;
}