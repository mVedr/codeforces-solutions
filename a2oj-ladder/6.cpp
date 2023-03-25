#include<bits/stdc++.h>
#define int long long
#define f(k,c,e) for(int k=c;k<e;k++)
#define fi(k,c,e) for(int k=c;k<=e;k++)
#define MOD 1000000007
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define vi vector<int> 
int t = 1;
using namespace std;

void solve(){
     string c;
    cin >> c;
    int n = c.length() - 1, ind = n;

    for (int i = 0; i < n; i++)
        if ((c[i] - '0') % 2 == 0)
        {
            ind = i;
            if (c[n] > c[i])
                break;
        }

    if (n == ind)
        cout << -1 << endl;
    else
    {
        swap(c[ind], c[n]);
        cout << c << endl;
    }
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}