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

vector<int> lucky;

void help(int number, int fours, int sevens) {
  if(number > 1e10) return;
  
  if(fours == sevens)
    lucky.push_back(number);
  
  help(number * 10 + 7, fours, sevens + 1);
  help(number * 10 + 4, fours + 1, sevens);
}

void solve(){
  help(4, 1, 0);
  help(7, 0, 1);
  int n;
  cin >> n;
  sort(lucky.begin(), lucky.end());
  cout << lucky[lower_bound(lucky.begin(), lucky.end(), n) - lucky.begin()] << endl;
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}