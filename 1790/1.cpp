#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
string pi= "3141592653589793238462643383279";
void solve(){
  int cnt=0;
  string s; cin>>s;
  f(i,0,s.length()){
    if(s[i]==pi[i]) cnt++;
    else break;
  }
  cout<<cnt<<endl;
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