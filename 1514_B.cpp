#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    res = (res*res)%MOD;
    if (b % 2)
        return (res * a)%MOD;
    else
        return res;
}

void solve(){
    long long n,k;
    cin>>n>>k;
    cout<<binpow(n,k);cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}