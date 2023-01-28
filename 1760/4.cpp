#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      vector<int> a(n);
      int ans = 0;
      vector<int> sum(n,0),int l =0; 
      cin>>a[0] ; sum[0] = a[0];
      f(i,1,n) {
        cin>>a[i];
        sum[i] = sum[i-1] + a[i]; 
      }
     // for(auto it : sum)  cout<<it<<"  ";
     if(a[0]<a[1]) ans++;
 
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}