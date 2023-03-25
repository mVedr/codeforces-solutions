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
  int n; cin>>n;
  string st; cin>>st;
  string a="1",b="1";
  bool en = false;
  int eni=-1;
  f(i,1,n){
     if(st[i]=='0') a+='0',b+='0';
     else if(st[i]=='2') a+='1',b+='1';
     else{
        a+='1';
        b+='0';
        eni=i;
        break;
     }
  }
  if(eni==-1) {cout<<a<<endl<<b<<endl;}
  else{
    f(i,eni+1,n){
         if(st[i]=='0') a+='0',b+='0';
     else if(st[i]=='2') a+='0',b+='2';
     else{
        a+='0';
        b+='1';
     }
    }
    cout<<a<<endl<<b<<endl;
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