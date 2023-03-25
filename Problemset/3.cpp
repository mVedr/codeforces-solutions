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
      int n; cin >> n;
      int nn = n + n;
      int totSum = ((2 * n) * ((2 * n) + 1)) / 2;
      int temp = totSum;
      int z = 1;
      f(i,0, n - 1)
      {
            temp -= z;
            z++;
      }
      if (temp % n != 0)
      {
            cout << "No\n";
            return;
      }
      z = 1;
      cout << "Yes\n";
      int target = temp / n;
      int init = target - 1;
      int i = 1;
      while(i<=n){
            cout << i << " " << init<<"\n";
            i += 2;
            init--;
      }
      i = 2;
      init = n + n;
      while (i <= n)
      {
            cout << i << " " <<init<<"\n";
            init--;
            i += 2;
      }
}
signed main(){
    fast;
   cin>>t;
  while(t--){
      solve();
  }
    return 0;
}