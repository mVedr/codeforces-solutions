#include <bits/stdc++.h>
#include <algorithm>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
#define MOD 1000000007
using namespace std;

void solve()
{
    int n,x;
    cin >> n;
    vector<int> a(1001,-1);
    f(i,1,n+1){
        cin>>x;
        a[x]=i;
    }
    int ans=-1;
    f(i,1,1001){
        if(a[i]!=-1){
            f(j,i,1001){
                if(a[j]!=-1 && gcd(i,j)==1){
                    ans = max(ans,a[i]+a[j]);
                }
            }
        }
    }
    cout<<ans<<endl;
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