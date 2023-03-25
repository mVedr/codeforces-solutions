#include <bits/stdc++.h>
#define int long long
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
}
signed main()
{
    fast;
    int n;
    cin >> n;
    vi a(n);
    f(i, 0, n) cin >> a[i];
    vi b = a;
    reverse(all(b));
    if (is_sorted(all(a)))
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else if(is_sorted(all(b))){
        cout<<"yes"<<endl;
        cout<<1<<" "<<n;
    }
    else
    {
        int h = -1;
        f(i, 1, n)
        {
            if (a[i - 1] > a[i])
            {
                h = i - 1;
                break;
            }
        }
        int l = -1;
        f(i, h + 1, n)
        {
            if (a[i] < a[i + 1])
            {
                l = i;
                break;
            }
        }
        //cout<<h<<" :  "<<l<<endl;
        
        if (h == -1 || l == -1)
        {
            cout << "no" << endl;
        }
        else
        {
            //for(auto it : a) cout<<it<<" "; cout<<endl;
            reverse(a.begin() + h, a.begin() + l + 1);
            if (is_sorted(all(a)))
            {
                cout << "yes" << endl;
                cout << h + 1 << " " << l + 1 << endl;
            }
            else
            {
                cout << "no";
            }
        }
    }
    return 0;
}