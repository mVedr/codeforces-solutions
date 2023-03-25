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
        int n, k;
		cin >> n >> k;
		int ans = (k - 1) / (n - 1);
		cout << k + ans << endl;
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}