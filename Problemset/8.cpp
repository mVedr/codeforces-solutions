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
  int n,m,a,b; cin>>n>>m>>a>>b;
 if(m * a > b)
    {
        int remain = (n % m) * a;
        if(remain > b)
           cout<<( n / m * b + b)<<endl;
        else
          cout<<( n / m * b + remain)<<endl;;
    }
    else
       cout<<( n * a)<<endl;
}
signed main(){
    fast;
   //cin>>t;
  while(t--){
      solve();
  }
    return 0;
}