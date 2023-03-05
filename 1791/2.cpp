#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
bool check(int x,int y){
    if(x==1 && y==1) return true;
    return false;
}
void solve(){
   int n; cin>>n;
  string m; cin>>m;
  int x=0,y=0;
  int key=1;
  f(i,0,n){
    if(m[i]=='U') y+=1;
     else if(m[i]=='D') y-=1;
     else if(m[i]=='R') x+=1;
     else x-=1;
     if(check(x,y)){
       // cout<<x<<" "<<y<<endl;
        cout<<"YES"<<endl;
        key=0;
        break;
     }
  }
  if(key)
  cout<<"NO"<<endl;
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