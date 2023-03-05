#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n; cin>>n;
  vector<int> a(n);
  map<int,int> mp;
   f(i,0,n) {
    cin>>a[i];
    mp[a[i]]=i+1;
  }
  int ans = 0 ;
  fi(i,1,2*n){
    fi(j,i+1,2*n){
        if(i*j>2*n) break;
        int pp  = i*j;
        if(mp.find(i)==mp.end()||mp.find(j)==mp.end()) continue;
        auto it1 = mp.find(i) , it2 = mp.find(j);
        if((*it1).second+(*it2).second == pp){
             ans++;
        }
    }
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