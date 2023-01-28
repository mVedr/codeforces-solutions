#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void solve(){
 // int t; cin>>t;
  //while(t--){
    int k; cin>>k; const int n = k;
    vector<int> b(n+1);
    f(i,0,n) {cin>>b[i];}
    vector<int> ap1(n+1),ap2(n+1);
    ap1 = b; ap2 =b;
    f(i,0,n) if(ap1[i]==0) {ap1[i]=1;break;}

    for(int i = n-1; i>=0;i--) if(ap2[i]==1) { ap2[i]=0;break;}
    int  inv1 = 0,inv2=0;
    vector<int> pre1(n+1,0) , pre2(n+1,0);
      pre1[0] = ap1[0] , pre2[0] = ap2[0];
    f(i,1,n) pre1[i]  =  pre1[i-1] + ap1[i] ;
     f(i,1,n) pre2[i]  =  pre2[i-1] + ap2[i] ;
    f(i,0,n) {
        if(ap1[i]==1)
       
       {  //cout<<ap1[i]<<endl;
        inv1 += ap1[i] -pre1[n-1]+pre1[i] + n-i;
       // cout<<inv1<<endl;}
        if(ap2[i]==1) 
        inv2 +=ap2[i] -pre2[n-1]+pre2[i] + n-i;
    }
    //cout<<max(inv1,inv2)<<endl;
    cout<<inv2;
  //}
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}