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
  string s,t; cin>>s>>t;
   int n = s.length(), m = t.length();
  bool au=false;
  for(int i=0,j=0;i<s.length();i++){
    if(j<t.length() && s[i]==t[j]) ++j;
    if(j==t.length()) au = true;
  }
  vi cnt(26,0);
    for(int i=0;i<n;++i) cnt[s[i]-'a']++;
    for(int i=0;i<m;++i) cnt[t[i]-'a']--;
    bool sar = true;
    bool all = true;
    
    for(int i=0;i<26;++i){
        sar&=cnt[i]==0;
        all&=cnt[i]>=0;
    }

    if(au) cout<<"automaton"<<endl; else
    if(sar) cout<<"array"<<endl; else
    if(all) cout<<"both"<<endl; else
    cout<<"need tree"<<endl;
}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}