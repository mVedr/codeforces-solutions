#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define INF 1000000000
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
int t = 1;
using namespace std;

void solve(){
  int v,c,n,m; cin>>v>>c>>n>>m;
  if(v>c) swap(v,c);
  if(v+c<n+m){
    cout<<"No\n";
    return;
  }
  if(v<m) cout<<"No\n";
  else cout<<"Yes\n";
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}