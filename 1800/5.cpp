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
  int n; cin>>n;
  string s; cin>>s;
  int ans=0;
  f(i,1,n-1){
    if(s[i-1]==s[i+1]) continue;
    ans++;
  }
  cout<<ans+1<<endl;
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}