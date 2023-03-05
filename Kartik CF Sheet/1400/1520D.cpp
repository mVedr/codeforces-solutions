#include<bits/stdc++.h>
#include<numeric>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
int ncr(int n,int r){
      long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m =gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
    return p;
}
void solve(){
  int n; cin>>n;
  vector<int> a(n);
  f(i,0,n) cin>>a[i];
  map<int,int> mp;
  f(i,0,n){
    mp[a[i]-i]++;
  }
  int ans = 0;
  for(auto it : mp){
    if(it.second>=2){
        ans+=ncr(it.second,2);
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