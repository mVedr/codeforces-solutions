#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    int n,m; cin>>n>>m;
    vector<int> a(n),b(m);
    f(i,0,n) cin>>a[i];  f(i,0,m) cin>>b[i];
    int ans =0;
    
    f(i,0,m){
        //cout<<lower_bound(a.begin(),a.end(),b[i])-a.begin()<<" "<<upper_bound(a.begin(),a.end(),b[i])-a.begin()<<endl;
        ans+=upper_bound(a.begin(),a.end(),b[i])-lower_bound(a.begin(),a.end(),b[i]);
    }
    cout<<ans;
    return 0;
}