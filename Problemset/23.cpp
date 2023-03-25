#include <bits/stdc++.h>
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
    int n, a, b;
    cin >> n >> a >> b;
    // a + kd = b
    int k = b - a;
    int diff;
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
        {
            if (i < n)
            {
                // cout<<"i:"<<i<<" diff:"<<diff<<endl;
                diff = k / i;
            }
            else
                break;
        }
    }
    //  cout<<"diff : "<<diff<<endl;
    int start = a;
    int cnt = 0;
    int start2=a,start3 = b;
    while (cnt != n)
    {
        if (start <= b)
        {
            cout << start << " ";
            start += diff;
        }
        else if(start2-diff>0)
        {
            cout << start2 - diff << " ";
            start2 -= diff;
        }
        else if(start>b){
            cout<<start3+diff<<" ";
            start3+=diff;
        }
        ++cnt;
    }
    cout<<endl;
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