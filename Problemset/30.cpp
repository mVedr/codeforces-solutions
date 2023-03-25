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
int N = 200005;
vector<vector<int>> adj(N);
vi col(N,-1);
vi vis(N);
bool dfs(int u)
{
    vis[u] = 1;
    for (int v:adj[u]){
        if (col[v] == col[u])return false;        
        else if (!vis[v]){
            col[v] = !col[u];
            if (!dfs(v))return false;
        }
    }
    return true;
}
void solve(){
    int n,m;
  cin>>n>>m;
    
    vector<vector<int>> el;
 
    for (int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        el.push_back({u,v});
    }
    col[1] = 0;
    if (!dfs(1)){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        string ans = "";
        for (int i = 0;i<m;i++){//iterating over all edges
            int u = el[i][0],v = el[i][1];
            if (col[u] == 0){//u is an outgoing node
                ans += "0";
            }
            else{
                ans += "1";
            }
        }
        cout<<ans;
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