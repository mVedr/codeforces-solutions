#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  int tt = 0;
  string st; cin>>st;
  f(i,0,n/2){
    if(st[i]!=st[n-i-1]){
        tt++;
    }else{
        break;
    }
  }
  cout<<n-(2*tt)<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
   int t = 1;
   cin>>t;
  while(t--){
      solve();
  }
    
    return 0;
}