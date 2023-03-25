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
     int n,m;
        cin>>n>>m;
        cout<<n*m<<endl;
        int a[n+1][m+1];
        int sum=1;
	for(int j=1;j<=n;j++){
		a[j][1]=sum++;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			a[i][j]=a[i][j-1]+512;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";	
		}
        cout<<endl;
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