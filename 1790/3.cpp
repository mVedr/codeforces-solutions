#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<vector<int>> v(n,vector<int>(n-1));
    f(i,0,n) f(j,0,n-1) cin>>v[i][j];
    int x=-1,y=-1;
    f(i,0,n){
        int f=0;
        f(j,0,n){
            if(i==j) continue;
            
                if(v[i][1]==v[j][0]){
                    x=i;y=j;f=1;break;
                }
             
        }
        if(f==1) break;
    }
    cout<<v[x][0]<<" ";
    f(i,0,n-1) cout<<v[y][i]<<" "; cout<<endl;
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