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
  int x,a,b,c,y,d,e,f,z;
  cin>>x>>a>>b>>c>>y>>d>>e>>f>>z;
  x = (c+d+e+f-a-b)/2;
  y = (e+f+a+b-c-d)/2;
  z = (a+b+c+d-e-f)/2;
  cout<<x<<" "<<a<<" "<<b<<" "<<endl<<c<<" "<<y<<" "<<d<<endl<<e<<" "<<f<<" "<<z<<endl;
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}