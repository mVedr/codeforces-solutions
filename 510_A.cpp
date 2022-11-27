#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define f(s, e) for (long long int i = s; i < e; i++)
#define fi(s, e) for (long long int i = s; i <= e; i++)
#define ll long long
int main()
{
    int m, n; // m is always odd
    cin >> m >> n;
    fi(1, m)
    {

        if (i % 2 != 0)
        {
            for(int j=1;j<=n;j++)
            {
                cout << "#";
            }
        }else{
            if(i%4!=0){
                for(int j=1;j<=n;j++){
                   if(j==n) cout<<"#";
                   else{
                    cout<<".";
                   }
                }
            }
            else{
                for(int j=1;j<=n;j++){
                   if(j==1) cout<<"#";
                   else{
                    cout<<".";
                   }
                }
            }
        }
      cout<<endl;
    }
    return 0;
}