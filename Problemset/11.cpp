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
vi adj[200005];

void solve(){
  int a,b; cin>>a>>b;
  int ans = 0;
  while(b>a){
    if(b%2!=0){
        ++b;
    }else{
        b/=2;
    }
    ++ans;
  }
  ans+=(a-b);
  cout<<ans<<endl;
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}