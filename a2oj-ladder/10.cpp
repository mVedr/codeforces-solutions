#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define vi vector<int> 
int t = 1;
using namespace std;

void solve(){
  char a[4] = {'a','b','c','d'};
  int n; cin>>n;
  string ans = "";
  f(i,1,n+1){
    ans += a[(i-1)%4];
  }
  cout<<ans<<endl;
}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}