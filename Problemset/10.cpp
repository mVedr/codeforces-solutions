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
  int n; cin>>n; vi a(n); f(i,0,n) cin>>a[i];
  int m; cin>>m; vi b(m); f(i,0,m) cin>>b[i];
  int i=0,j=0;
  int cnt = 0;
  sort(all(a)) ; sort(all(b));
  while(i<n && j<m){
        if(abs(a[i]-b[j])<=1) {
           // cout<<"c : "<<cnt<<endl;
           // cout<<i<<" "<<j<<endl;
          //  cout<<a[i]<<" "<<b[j]<<endl;
            cnt++;i++;j++;}
        else if(a[i]<b[j]) i++;
        else j++;
  }
  cout<<cnt<<endl;
}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}