#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    if(n%2==1){
         cout<<0;
         return;
    }
    n/=2;
    int k = n-1;
    cout<<k/2;
}
int main(){
    solve();
    return 0;
}