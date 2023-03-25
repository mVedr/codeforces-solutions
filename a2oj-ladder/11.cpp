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
const int M= 1000000007;
long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a , long long b){
    return mod(mod(a)-mod(b));
}
long long mul(long long a,long long b){
    return mod(mod(a)*mod(b));
}
void solve(){
  int a, b, t;
    cin >> a >> b >> t;
    int s[] = {a, b, b - a, -a, -b, a - b};
    cout<<mod(s[(t-1)%6]);
}
signed main(){
    fast;
 //  cin>>t;
  while(t--){
      solve();
  }
    return 0;
}