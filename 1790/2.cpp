#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    vector<int> a(n);
    int d = r / (n - 1);
    // float cr = d - (int)d;
    // int rem = ceil(cr * (n - 1));
    int rem=r%(n-1);
    //cout<<rem<<endl;
    a[0] = s - r;
   // int y = (int)d;
    cout<<a[0]<<" ";
    f(tt, 1, n) { 
        
        if(rem>0){
            
            cout<<d+1<<" ";
            rem--;
        }
        else{
            cout<<d<<" ";
        }
     }
   
      cout<<endl;
   
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