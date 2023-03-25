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
    int n;cin >> n;
		set<int> st;
		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0 && !st.count(i)) {
				st.insert(i);
				n /= i;
				break;
			}
		}
		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0 && !st.count(i)) {
				st.insert(i);
				n /= i;
				break;
			}
		}
		if (st.size() < 2 || st.count(n) || n == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			st.insert(n);
			for (auto it : st) cout << it << " ";
			cout << endl;
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