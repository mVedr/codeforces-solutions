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
  int n; cin>>n;
  map<string,int> mp;
  f(i,0,n){
    string str; cin>>str;
    if(mp.find(str)==mp.end()){
        cout<<"OK"<<endl;
        mp[str]++;
    }else{
        cout<<str+to_string(mp[str])<<endl;
        mp[str]++;
    }
  }

}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}