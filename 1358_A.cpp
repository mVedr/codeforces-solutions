#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int res = m*(n/2);
        if(n%2) res+= ceil(1.0*m/2);
        cout<<res<<endl;
    }
    return 0;
}