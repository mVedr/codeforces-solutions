#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
using namespace std;
void compute( int S,
             int X)
{
     int A = (S - X)/2;
    int a = 0, b = 0;
    for (int i=0; i<8*sizeof(S); i++)
    {
         int Xi = (X & (1 << i));
         int Ai = (A & (1 << i));
        if (Xi == 0 && Ai == 0)
        {
        }
        else if (Xi == 0 && Ai > 0)
        {
            a = ((1 << i) | a);
            b = ((1 << i) | b);
        }
        else if (Xi > 0 && Ai == 0)
        {
            a = ((1 << i) | a);
        }
        else 
        {
            cout <<-1<<endl;
            return;
        }
    }
  if((a+b)==(S))
    cout << a << " "<< b<<endl;
    else cout<<-1<<endl;
}
void solve(){
  int x;
  cin>>x;
  compute(2*x,x);
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