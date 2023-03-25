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
  int n,a,b; cin>>n>>a>>b;
  if(a==1){
    if((n-1)%b==0) cout<<"Yes\n";
    else cout<<"No\n";
    return;
  }else{
    int num = 1;
    while(num<=n){
        if((n-num)%b==0){
            cout<<"Yes\n";
            return;
        }
        num*=a;
    }
    cout<<"No\n";
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