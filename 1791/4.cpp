#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  string str; cin>>str;
  vector<int> pre(n,0),suf(n,0);
  set<char> st;
  f(i,0,n){
    st.insert(str[i]);
    pre[i] = st.size();
  }
  set<char> st2;
  for(int i=n-1;i>=0;i--){
    st2.insert(str[i]);
    suf[i] = st2.size();
  }
  int ans = -1;
  f(i,0,n-1){
    int x = pre[i] + suf[i+1];
    ans = max(ans,x);
  }
  cout<<ans<<endl;
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