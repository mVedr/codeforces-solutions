#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; k < e; k++)
#define fi(k, s, e) for (int k = s; k <= e; k++)
#define MOD 1000000007
using namespace std;
void solve()
{
    char bo[8][8];
    int a = 0;
    int b = 0;
    char l;
    bool fl=false;

    f(i, 0, 8)
    {
        f(j, 0, 8)
        {
            cin >> bo[i][j];
        }
    }
    f(i, 0, 8)
    {
        bool flag = true;
        f(j, 0, 8)
        {
          if(bo[i][j]!='R'){
            flag=false;
            break;
          }
        }
        if(flag){
            fl=true;
            cout<<"R"<<endl;
            return;
        }
    }
    if(!fl){
        f(i,0,8){
            bool flag =true;
            f(j,0,8){
                if(bo[j][i]!='B'){
                    flag=false;
                    break;
                }
            }
            if(flag){
                fl=true;
                cout<<"B"<<endl;
                return;
            }
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}