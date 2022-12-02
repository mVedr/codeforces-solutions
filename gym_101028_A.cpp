#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,f; cin>>n>>f;
        vector<int> v;
        int x;
        while(n--){
         cin>>x;
         v.push_back(x);
        }
        int sum = accumulate(v.begin(),v.end(),1500);
        if(sum==f) cout<<"Correct"<<endl;
        else{
            cout<<"Bug"<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}