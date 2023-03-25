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
  int m,s; cin>>m>>s;
  int ss = s;
  string mx="";
  if(s==0){
    if(m!=1) cout<<-1<<" "<<-1<<endl;
    else{
        cout<<0<<" "<<0<<endl;
    }
    return;
  }
  while(m--){
     if(s>=9){
       char c='9';
       mx+=c;
       s-=9;
     }else if(s>0){
        int k = s;
        char c = '0'+k;
        mx+=c;
        s-=k;
     }else{
       mx+='0';
     }
  }
  int chk = 0;
  for(auto &x : mx){
    chk+= (x-'0');
  }
  //cout<<chk<<endl;
  if(chk!=ss){
   cout<<-1<<" "<<-1<<endl;
   return;
 }
  string mn = mx;
  reverse(all(mn));
  if(mn[0]!='0'){
    cout<<mn<<" "<<mx<<endl;
  }else{
    f(i,1,mn.length()){
        if(mn[i]!='0'){
            mn[i]-=1;
            mn[0]='1';
            break;
        }
    }
   cout<<mn<<" "<<mx<<endl;
  }
}
signed main(){
    fast;
 //  cin>>t;
  while(t--){
      solve();
  }
    return 0;
}