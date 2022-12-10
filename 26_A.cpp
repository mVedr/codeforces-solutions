#include<bits/stdc++.h>
#define int long long
using namespace std;

bool printPFs(int n){
    set<int> st;
   for(int i=2;i*i<=n;i++){
    while(n%i==0){
        //cout<<i<<" ";
        st.insert(i);
        n/=i;
    }
   }
   if(n>1) st.insert(n);
  if(st.size()==2) return true;
  return false;
}

void solve(){
  int n; cin>>n; int c=0;
  for(int i=1;i<=n;i++){
    if(printPFs(i)) c++;
  }
  cout<<c;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}