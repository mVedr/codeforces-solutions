#include<bits/stdc++.h>
using namespace std; 
#define MOD 1000000007
#define f(s,e) for(long long int i=s;i<e;i++)
#define fi(s,e) for(long long int i=s;i<=e;i++)
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
template <class T> void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
template <class T> void print_mp(map<T,T> &mp) {cout<<"{"; for(auto x : mp) cout<<x.first<<" "<<x.second<<endl;}
template <class T> void print_st(set<T> &st) {for(auto it : st) cout<<it<<" "; cout<<endl;}
int main(){
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int limes = c*d;
  int drinks = k*l;
  int x = drinks/(n*nl);
  int y = limes/n;
  int z = p/(n*np);
  cout<<min(x,min(y,z));
return 0;
}