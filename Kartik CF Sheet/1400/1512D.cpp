#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
 int n; cin >> n;
    vector<int> b(n + 2);
    for (int i = 0; i < n + 2; i++) cin >> b[i];
    sort(b.begin(), b.end());
    if (n == 1) {
        if( b[0] == b[1] || b[0] == b[2]) cout << b[0] <<endl;
        else if (b[1] == b[2]) cout << b[1] <<endl;
        else cout << "-1" <<endl;
        return;
    }
    int sum = 0;
    for (int i = 0; i < n + 1; i++) sum += b[i];
    int idx = -1;
    for (int i = 0; i < n + 1; i++) {
        if (sum - b[i] == b[n] || sum - b[i] == b[n + 1]) { idx = i; break; }
    }
    if (idx == -1) { cout << "-1" <<endl; return; }
    for (int i = 0; i < n + 1; i++) {
        if (i == idx) continue;
        cout << b[i] << " ";
    }
    cout <<endl;
  
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