#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
int t = 1;
using namespace std;

void solve(){
  int sum = 0;
  int n; cin>>n;
  bool fe=false ,fo=false;
  int ffe,ffo;
  int co=0,ce=0;
  f(i,0,n){
    int x; cin>>x;
    if(x%2){
      if(!fo){
       fo = true;
       ffo = i+1;

      }
      co++;
    }else{
      if(!fe){
       fe = true;
       ffe = i+1;

      }
      ce++;
    }
  }
  if(ce+co==2){
    cout<<max(ffo,ffe)<<endl;
  }else{
    if(ce>co){
        cout<<ffo<<endl;
    }else{
        cout<<ffe<<endl;
    }
  }
}
signed main(){
    fast;
//   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}