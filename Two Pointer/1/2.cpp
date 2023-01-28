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
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    f(i,0,n) cin>>a[i];  f(i,0,m) cin>>b[i];
    int ans =0;
    int i=0,j=0;
    while(i<n && j<m){
       if(a[i]<b[j]){
        ans++;
        i++;
       }
       else{
        cout<<ans<<" ";
        j++;
       }
    }
    while(j<m){
       cout<<ans<<" ";
        j++;
    }
    return 0;
}