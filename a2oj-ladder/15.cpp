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
    int k, n,f,s;
    cin>>n;
    pair<int,int> a[n];
    map<int,int> mp;
    f(i,0,n)
    {
        cin>>f>>s;
        mp[f]++;
        a[i]={f,s};
    }

    int m=n-1;
    f(i,0,n)
    {
        a[i].first=m+mp[a[i].second];
        a[i].second=m-mp[a[i].second];

        cout<<a[i].first<<" "<<a[i].second<<endl;
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