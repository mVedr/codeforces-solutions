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
  string n; cin>>n;
  for(auto c : n){
    if((c-'0')%8==0){
        cout<<"YES\n"<<c;
        return;
    }
  }
  f(i,0,n.length()){
    f(j,i+1,n.length()){
        int l = (n[i]-'0')*10  + (n[j]-'0');
        if(l%8==0){
            cout<<"YES\n"<<l;
            return;
        }
    }
  }
  f(i,0,n.length()){
    f(j,i+1,n.length()){
        f(k,j+1,n.length()){
            int l  = (n[i]-'0')*100 + (n[j]-'0')*10 + (n[k]-'0');
            if(l%8==0){
                cout<<"YES\n"<<l;
                return;
            }
        }
    }
  }
  cout<<"NO";
}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}