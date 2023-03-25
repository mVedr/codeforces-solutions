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
  vi r(n); f(i,0,n) cin>>r[i];
  sort(all(r));
  int ans=0;
  if(n%2){
     f(i,0,n){
        if(i%2){
            ans-=pow(r[i],2);
        }else{
            ans+=pow(r[i],2);
        }
     }
  }else{
     f(i,0,n){
          if(i%2==0){
            ans-=pow(r[i],2);
        }else{
            ans+=pow(r[i],2);
        }
     }
  }
  cout<<fixed<<setprecision(10)<<((double)ans*3.1415926536)<<endl;
}

signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}