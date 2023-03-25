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
    int n;cin >> n;
    vi a(n),b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	map<int, int> mp;
	sort(all(b));
	for (int i = 0; i < n; i++) {
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		a[i] = mp[a[i]];
	}
	int L = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != i) {
			L = i;
			break;
		}
	}
	int R = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != i) {
			R = i;
			break;
		}
	}
	if (L == -1 || R == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(a.begin() + L, a.begin() + R + 1);
		int ok = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != i) {
				ok = false;
			}
		}
		if (ok) {
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		} else {
			cout << "no" << endl;
		}
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