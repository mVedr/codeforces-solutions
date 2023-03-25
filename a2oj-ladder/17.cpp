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
  int n,m; cin>>n>>m;
  vi a(n); f(i,0,n) cin>>a[i];
  sort(all(a));
  int sum=0;
  int j=0;
  f(i,0,n){
    if(j>=m) break;
    j++;
    if(a[i]<0) sum+=a[i];
    else break;
  }
  cout<<-1*sum<<endl;
}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}