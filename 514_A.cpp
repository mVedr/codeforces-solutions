#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define f(s, e) for (long long int i = s; i < e; i++)
#define fi(s, e) for (long long int i = s; i <= e; i++)
#define ll long long

int main()
{
        string n;
        cin>>n;
        for(int i =0 ;i<n.length();i++){
            char s = n[i];
            if(i==0 && s>='5' && s<'9' ){
                n[i] = '9' - s + '0';
            }else if(i>0 && s>='5'){
                n[i] = '9'- s + '0';
            }
        }
        cout<<n;
        return 0;
}