#include<bits/stdc++.h>
#include<unordered_set>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  unordered_set<int> st;
  f(i,0,n){
    int x; cin>>x;
    st.insert(x);
  }
  if(st.size()==n) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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