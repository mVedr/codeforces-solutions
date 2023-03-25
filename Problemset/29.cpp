#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;k<e;k++)
#define fi(k,s,e) for(int k=s;k<=e;k++)
#define MOD 1000000007
#define INF 1000000000
#define all(a) (a).begin(),(a).end()
#define fast  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define endl '\n'
#define vi vector<int> 
int t = 1;
using namespace std;
class DisjointSet {
    public: 
    vector<int> rank, parent, size,mn,mx; 
    DisjointSet(int n) {
        rank.resize(n+1, 0); 
        parent.resize(n+1);
        size.resize(n+1); 
        mn.resize(n+1);
        mx.resize(n+1);
        for(int i = 1;i<=n;i++) {
            parent[i] = i; 
            mx[i]=i;
            mn[i]=i;
            size[i] = 1; 
        }
    }

    int findUPar(int node) {
        if(node == parent[node])
            return node; 
        return parent[node] = findUPar(parent[node]); 
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v; 
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u; 
        }
        else {
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(size[ulp_u] < size[ulp_v]) {
            mn[ulp_v] = min(mn[ulp_v],mn[ulp_u]);
            mx[ulp_v] = max(mx[ulp_v],mx[ulp_u]);
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
            
        }
        else {
            mn[ulp_u] = min(mn[ulp_v],mn[ulp_u]);
            mx[ulp_u] = max(mx[ulp_v],mx[ulp_u]);
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
            
        }

    }
}; 
void solve(){
  int n,q; cin>>n>>q;
  DisjointSet ds(n);
  while(q--){
    string command; cin>>command;
    if(command[0]=='u'){
        int u,v; cin>>u>>v;
        ds.unionBySize(u,v);
    }else{
        int x; cin>>x;
        int up = ds.findUPar(x);
        cout<<ds.mn[up]<<" "<<ds.mx[up]<<" "<<ds.size[up]<<endl;
    }
  }
}
signed main(){
    fast;
  // cin>>t;
  while(t--){
      solve();
  }
    return 0;
}