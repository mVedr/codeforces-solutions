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
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
void solve(){
  int n; cin>>n;
  int ans;
  for(int i=1;i*i<=n;i++){
    if(n%i==0 && lcm(i,n/i)==n){
       ans = i;
    }
  }
  cout<<ans<<" "<<n/ans;
}
signed main(){
    fast;

  while(t--){
      solve();
  }
    return 0;
}