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
  int n,a,b,c; cin>>n>>a>>b>>c;
  int i,j,k,ans=0,rem;
       for(i=0;i*a<=n;++i)
       {
           for(j=0;i*a+j*b<=n;++j)
           {
                rem=n-i*a-j*b;
                if(rem%c==0)
                {
                k=rem/c;
                ans=max(ans,i+j+k);
                }
           }
       }
       cout<<ans<<endl;
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}