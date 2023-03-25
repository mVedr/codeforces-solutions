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

int n,tasks[105];
int dp[105][3]={-11};
int solve(int curr,int prev){
    if(curr==n) return 0;
   
    if(tasks[curr]==0) return  1+solve(curr+1,0);
    else if(tasks[curr]==1){
       if(prev==1){
        return  1 + solve(curr+1,0);
       }else{
        return  min(solve(curr+1,1),1+solve(curr+1,0));
       }
    }else if(tasks[curr]==2){
       if(prev==2){
        return  1 + solve(curr+1,0);
       }else{
        return  min(solve(curr+1,2),1+solve(curr+1,0));
       }
    }else{
       if(prev==1){
            return  min(1+solve(curr+1,0),solve(curr+1,2));
       }else if(prev==2){
            return  min(1+solve(curr+1,0),solve(curr+1,1));
       }else{
            return  min(
                1+solve(curr+1,0),min (solve(curr+1,1), solve(curr+1,2)
            ));
       }
    }
}

signed main(){
    fast;
    cin>>n;
    f(i,0,n) cin>>tasks[i];
    cout<<solve(0,0);
    return 0;
}