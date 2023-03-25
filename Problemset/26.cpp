#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define INF 1000000000
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
int t = 1;
using namespace std;

void solve(){
  int n; cin>>n; vi a(n); f(i,0,n) cin>>a[i];
  int c0=0,c1=0; f(i,0,n) {
    int x; cin>>x;
    if(x) c1++;
    else c0++;
  }
  if(is_sorted(all(a))){
    cout<<"Yes"<<endl;
  }else{
      if(c1==0 || c0==0){
        cout<<"No"<<endl;
      }
      else cout<<"Yes"<<endl;
  }
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}