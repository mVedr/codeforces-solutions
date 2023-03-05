#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int neg = 0;
    int sum = 0;
    f(i, 0, n)
    {
        cin >> v[i];
        if(v[i]<0) neg++;
        v[i] = abs(v[i]);
        sum+=v[i];
    }
    if(neg%2==0){
        cout<<sum<<endl;
    }else{
       int tt =  *min_element(v.begin(),v.end());
       cout<<sum - 2*tt<<endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}