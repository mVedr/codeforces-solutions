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
  string ans="";
  f(i,0,n-1){
  
    char c = s[i];
    char c1 = s[i+1];
    if(c>='A'&&c<='Z') c = (char)(c-'A'+'a');
    if(c1>='A' && c1<='Z') c1 = (char)(c1-'A'+'a');
    if(c!=c1) {
        ans+=c;
    }
  }
  char c = s[n-1];
  if(c>='A'&&c<='Z') c = (char)(c-'A'+'a');
  ans+=c;
  //cout<<ans<<endl;
  if(ans=="meow") cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}