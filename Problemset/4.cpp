#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
int t = 1;
using namespace std;

void solve(){
    int n;cin >> n;
    vi a(n);
    map<int, int> cnt;
    set<int> b;
    f (i,0,n) {
        cin >> a[i];
        cnt[a[i]]++;
        b.insert(a[i]);
        b.insert(a[i] + 1);
    }
    int last = 0;
    int res = 0;
    for (auto x: b) {
        int c = cnt[x];
        int yy = 0;
        res += max(yy, c - last);
        last = c;
    }
    cout << res <<endl;  
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}