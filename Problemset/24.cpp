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
  int n; cin>>n;
  int mx = -1;
  vi a(100005,0);
  f(i,0,n){
    int x; cin>>x;
    a[x]++;
    mx = max(mx,x);
  }
  vi b(100005,0);
  b[0]=0,b[1]=a[1];
  f(i,2,100001){
    b[i] = max(b[i-1],b[i-2]+(a[i]*i));
  }
  cout<<b[mx]<<endl;
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}