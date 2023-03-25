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
  int r,x,y,xd,yd;
  cin>>r>>x>>y>>xd>>yd;
  double dd = sqrt(pow(xd-x,2)+pow(yd-y,2));
  //cout<<"dd : "<<dd<<endl;
  double turns = dd/(2*r);
  cout<<ceil(turns)<<endl;
}
signed main(){
    fast;
 //  cin>>t;
  while(t--){
      solve();
  }
    return 0;
}