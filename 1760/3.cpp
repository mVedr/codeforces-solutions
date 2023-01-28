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
      vector<int> s1(n);
      f(i,0,n) cin>>s1[i];
      vector<int> s2 = s1;
      sort(s2.begin(),s2.end());
      int e = s2[n-1];
      int k = s2[n-2];
     // cout<<k<<endl;
      f(i,0,n){
        if(s1[i]<e){
            s1[i] = s1[i] - e;
        }else {s1[i] = s1[i] - k;}
      }
      for(auto it : s1){
        cout<<it<<" ";
      }cout<<endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}