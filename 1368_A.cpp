#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b,int n){
    int count=0;
    while(a<=n){
        a+=b;
       // cout<<a<<endl;
        count++;
    }
    return count;
}
int main(){
   int t;  
   //cin>>t;
   int a,b,n;cin>>a>>b>>n;
//    while(t--){
//     cin>>a>>b>>n;
//     cout<<min(solve(a,b,n),solve(b,a,n));cout<<endl;
//    }
cout<<"Ans : "<<solve(a,b,n);
    return 0;
}