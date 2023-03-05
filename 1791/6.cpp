#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
  int n,c; cin>>n>>c;
  vector<int> temp;
  f(i,0,n){
     int x; cin>>x;
     temp.push_back(i+1+x);
  }
  sort(temp.begin(),temp.end());
  int cnt=0;
  for(auto it : temp){
    c-=it;
    if(c<0) break;
    else{
        cnt++;
    }
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