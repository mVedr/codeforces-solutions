#include<bits/stdc++.h>
using namespace std; 
#define MOD 1000000007
#define f(s,e) for(long long int i=s;i<e;i++)
#define fi(s,e) for(long long int i=s;i<=e;i++)
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define vi vector<int>
#define vll vector<long long>
#define si set<int>
template <class T> void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
template <class T> void print_mp(map<T,T> &mp) {cout<<"{"; for(auto x : mp) cout<<x.first<<" "<<x.second<<endl;}
template <class T> void print_st(set<T> &st) {for(auto it : st) cout<<it<<" "; cout<<endl;}
int main(){
 map<string,int> poly;
 poly["Tetrahedron"] = 4;
 poly["Cube"] = 6;
 poly["Octahedron"] = 8;
 poly["Dodecahedron"] = 12;
 poly["Icosahedron"] = 20 ;
 int n; cin>>n;
 int sum=0;
 while(n--){
    string shape;
    cin>>shape;
    sum+=poly[shape];
 }
 cout<<sum;
return 0;
}