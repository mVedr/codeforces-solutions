#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    if (n == m){
        cout << ans;
        return 0;
    }else if(m%n==0){
        int d = m/n;
        while(d%2==0) {
            d/=2; ans++;
        }
        while(d%3==0){
            d/=3 ;
            ans++;
        }
        if(d!=-1) ans=-1;
    }
    cout<<ans;
    return 0;
}