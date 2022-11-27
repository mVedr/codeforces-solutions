#include<bits/stdc++.h>
using namespace std; 
#define MOD 1000000007
#define f(s,e) for(long long int i=s;i<e;i++)
#define fi(s,e) for(long long int i=s;i<=e;i++)
#define ll long long
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=1;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
void to_lower(string &a,int j) { for (int i=j;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; }
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
template <class T> void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
template <class T> void print_mp(map<T,T> &mp) {cout<<"{"; for(auto x : mp) cout<<x.first<<" "<<x.second<<endl;}
template <class T> void print_st(set<T> &st) {for(auto it : st) cout<<it<<" "; cout<<endl;}
int main(){
    string w;cin>>w;
    int sum= 0,sum_i=0;
    for(int i=0;i<w.length();i++){
        if(i==0&&w[i]>='A'&&w[i]<='Z'){
            sum_i++;sum++;
        }else if(w[i]>='A'&&w[i]<='Z'){
           sum++;
        }
    }
    if(w[0]>='a'&&w[0]<='z'&&sum==w.length()-1&&!sum_i){
        w[0]=w[0]-'a'+'A';
          for (int i=1;i<w.length();++i) if (w[i]>='A' && w[i]<='Z') w[i]+='a'-'A';
    }else if(sum==w.length()){
         to_lower(w,0);
    }
    cout<<w;
    return 0;
}